037fe3e4  mrs r1,cpsr
037fe3e8  bic r2,r1,#0xc0
037fe3ec  orr r2,r2,r0
037fe3f0  msr cpsr_c,r2
037fe3f4  and r0,r1,#0xc0
037fe3f8  bx lr
