02055278  mrs r1,cpsr
0205527c  bic r2,r1,#0xc0
02055280  orr r2,r2,r0
02055284  msr cpsr_c,r2
02055288  and r0,r1,#0xc0
0205528c  bx lr
