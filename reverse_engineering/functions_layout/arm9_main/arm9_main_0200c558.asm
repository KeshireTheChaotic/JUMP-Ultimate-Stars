0200c558  mov r3,#0x1000000
0200c55c  cmp r3,r0, lsl #0x1
0200c560  movhi r0,#0x0
0200c564  cmp r3,r1, lsl #0x1
0200c568  movhi r1,#0x0
0200c56c  cmp r0,r1
0200c570  movne r0,#0x1
0200c574  moveq r0,#0x0
0200c578  mrs r12,cpsr
0200c57c  bicne r12,r12,#0x40000000
0200c580  orreq r12,r12,#0x40000000
0200c584  msr cpsr_f,r12
0200c588  bx lr
