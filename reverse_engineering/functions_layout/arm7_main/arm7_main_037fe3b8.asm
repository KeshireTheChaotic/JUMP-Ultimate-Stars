037fe3b8  mrs r1,cpsr
037fe3bc  bic r2,r1,#0x80
037fe3c0  orr r2,r2,r0
037fe3c4  msr cpsr_c,r2
037fe3c8  and r0,r1,#0x80
037fe3cc  bx lr
