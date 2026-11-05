0200c500  mov r3,#0x1000000
0200c504  cmp r3,r0, lsl #0x1
0200c508  movhi r0,#0x0
0200c50c  cmp r3,r1, lsl #0x1
0200c510  movhi r1,#0x0
0200c514  orrs r3,r0,r1
0200c518  eormi r0,r0,r1
0200c51c  eormi r1,r0,r1
0200c520  eormi r0,r0,r1
0200c524  cmp r0,r1
0200c528  movcc r0,#0x1
0200c52c  movcs r0,#0x0
0200c530  mrs r12,cpsr
0200c534  orrcs r12,r12,#0x20000000
0200c538  biccc r12,r12,#0x20000000
0200c53c  msr cpsr_f,r12
0200c540  bx lr
