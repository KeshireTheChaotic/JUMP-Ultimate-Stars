02055224  mrs r0,cpsr
02055228  bic r1,r0,#0x80
0205522c  msr cpsr_c,r1
02055230  and r0,r0,#0x80
02055234  bx lr
