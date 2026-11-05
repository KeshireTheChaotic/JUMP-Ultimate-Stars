0200c4a8  mov r3,#0x1000000
0200c4ac  cmp r3,r0, lsl #0x1
0200c4b0  movhi r0,#0x0
0200c4b4  cmp r3,r1, lsl #0x1
0200c4b8  movhi r1,#0x0
0200c4bc  orrs r3,r0,r1
0200c4c0  eormi r0,r0,r1
0200c4c4  eormi r1,r0,r1
0200c4c8  eormi r0,r0,r1
0200c4cc  cmp r0,r1
0200c4d0  movhi r0,#0x1
0200c4d4  movls r0,#0x0
0200c4d8  mrs r12,cpsr
0200c4dc  bicls r12,r12,#0x20000000
0200c4e0  orrhi r12,r12,#0x20000000
0200c4e4  msr cpsr_f,r12
0200c4e8  bx lr
