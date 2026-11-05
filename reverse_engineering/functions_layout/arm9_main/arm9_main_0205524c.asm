0205524c  mrs r1,cpsr
02055250  bic r2,r1,#0x80
02055254  orr r2,r2,r0
02055258  msr cpsr_c,r2
0205525c  and r0,r1,#0x80
02055260  bx lr
