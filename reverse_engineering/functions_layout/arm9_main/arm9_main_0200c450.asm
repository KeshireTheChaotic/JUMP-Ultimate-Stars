0200c450  mov r3,#0x1000000
0200c454  cmp r3,r0, lsl #0x1
0200c458  movhi r0,#0x0
0200c45c  cmp r3,r1, lsl #0x1
0200c460  movhi r1,#0x0
0200c464  orrs r3,r0,r1
0200c468  eormi r0,r0,r1
0200c46c  eormi r1,r0,r1
0200c470  eormi r0,r0,r1
0200c474  cmp r0,r1
0200c478  movcs r0,#0x1
0200c47c  movcc r0,#0x0
0200c480  mrs r12,cpsr
0200c484  biccc r12,r12,#0x20000000
0200c488  orrcs r12,r12,#0x20000000
0200c48c  msr cpsr_f,r12
0200c490  bx lr
