02055238  mrs r0,cpsr
0205523c  orr r1,r0,#0x80
02055240  msr cpsr_c,r1
02055244  and r0,r0,#0x80
02055248  bx lr
