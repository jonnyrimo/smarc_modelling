# SAM

`SAM` provides a lightweight analytical model of the SAM AUV based on
Fossen's python vehicle simulator:).

## Running Things:
To run the simulator, call `sam_sim.py`. It instantiates a SAM
object. 

### Set Initial Conditions

Initial conditions are set in the beginning:
- eta0: provide \[x, y, z, q0, q1, q2, q3\], the pose in the world frame
- nu0: provide \[u, v, w, q, p, r\], the velocities in the body frame
- u0: provide \[vbs, lcg, ds, dr, rpm1, rpm2\], the control inputs for SAM. 
Note that SAM is neutral with vbs = 50 and lcg = 50.

### Simulate

The simulator uses an Euler forward integration method and provides a dynamics
wrapper to interface with SAM. 

### Control

If you want to write your own controller, take charge and provide an input u in
the dynamics wrapper. This is also how you would interact with the model if you
want to use it in e.g. a MPC scheme. Then you can write your own integration
method or use what your optimization sovler provides, just call it with 
```python
sam = SAM(dt)
sam.dynamics(x,u)
```
where `x` is the appropriate state space vector and `u` your desired control input.

### Ocean Currents

Untested feature! You can provide an ocean current with `V_current` and
`beta_current`. While we caluclate the relative speed and angle of attack, use
at your own peril.

### Plots

We provide some basic plotting functionality in the end, including a 3D
trajectory which can be animated.




## SAM

The dynamics are based on Fossen 2021, ch. 8, eq. 8.1, 8.2.
```math
\begin{align}
\dot{\eta} &= J_k(\eta)(\nu_r + \nu_c) \\
M\dot{\nu_r} + C(\nu_r)&\nu_r + D(\nu_r)\nu_r + g(\eta) = \tau
\end{align}
```

The model outputs `x_dot`, where `x` is the state vector as defined above.
Furthermore, the model takes `u_ref`, a desired control input that is provided
to the `actuator_dynamics` that calculate the actual actuator input to take the
VBS and LCG dynamics into account as well.

### \_\_init\_\_
Initializes the vehicle parameters, including the subsystems in `init`.

### dynamics

First, we read out the state vector x and update the system state based on it
and the control inputs. Then we update the center of gravity and the inertias
accordingly. This is due to the fact that SAM can change its center of gravity
with the LCG and the VBS as well as changing its buoyancy with the VBS. We
apprximate the change in buoyancy as a change in mass. Based on these changes,
we update the inertia tensors.

Then we construct the individual matrices from eq 8.1 and 8.2. The function
returns
```math
\dot{x} = f(x, u_{\text{ref}}),
```
where $x = \[\eta, \nu, u_{\text{current}}\]^T$. Subsequently, we have
$\dot{x} = \[\dot{\eta}, \dot{\nu}, \dot{u}\_{\text{current}}\]^T$. We
calculate $\dot{\eta}$ in the eta\_dynamics function and
$\dot{u}\_{\text{current}}$ in the actuator\_dynamics. $\dot{\nu}$ follows
from eq. 8.2 as
```math
\dot{\nu} = M^{-1}\left(\tau - C(\nu_r)\nu_r - D(\nu_r)\nu_r - g(\eta)\right).
```

### calculate\_M

Update the rigid-body inertia matrix based on the new ineratias, center of
gravity, and weight. Update the added mass (since we move through water) based
on SAM's mass and new inertias.

### calculate\_C

Compute coriolis matrix for ridgid body and added mass.

### calculate\_D

Compute the damping matrix based on the relative speed. Note that we take
cross-couplings into account, compared to Fossen eq. 8.10. Therefore, we don't
need to calculate drag and lift as well as cross-flow drag individually
anymore.

### calcualte\_g

Compute gravity and buoyancy forces based on weight and orientation

### calculate\_tau

Our external force is the two counter-rotating propellers.

### eta\_dynamics

Compute the dynamics for the world frame based on Fossen eq. 2.83, including
the normalization for numerical stability in eq. 2.85, 2.86, and 2.88

### actuator\_dynamics

We include simple, linear actuator dynamics for VBS and LCG based on how fast
the individual motors run. For RPM and thrust vectoring, we assume
instantaneous acutation.



