02055264  mrs r0,cpsr
02055268  orr r1,r0,#0xc0
0205526c  msr cpsr_c,r1
02055270  and r0,r0,#0xc0
02055274  bx lr
