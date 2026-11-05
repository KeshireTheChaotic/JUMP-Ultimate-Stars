037fe3d0  mrs r0,cpsr
037fe3d4  orr r1,r0,#0xc0
037fe3d8  msr cpsr_c,r1
037fe3dc  and r0,r0,#0xc0
037fe3e0  bx lr
