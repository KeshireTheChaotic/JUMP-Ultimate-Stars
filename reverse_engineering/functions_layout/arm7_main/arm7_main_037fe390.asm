037fe390  mrs r0,cpsr
037fe394  bic r1,r0,#0x80
037fe398  msr cpsr_c,r1
037fe39c  and r0,r0,#0x80
037fe3a0  bx lr
