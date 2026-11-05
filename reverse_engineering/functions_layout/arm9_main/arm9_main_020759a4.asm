020759a4  stmdb sp!,{r3,r4,r5,lr}
020759a8  ldr r3,[r0,#0x4]
020759ac  mov r0,r1, lsl #0x3
020759b0  ldrsh r0,[r3,r0]
020759b4  mov r5,r2
020759b8  add r4,r3,r1, lsl #0x3
020759bc  cmp r0,#0x0
020759c0  movne r0,#0x0
020759c4  ldmiane sp!,{r3,r4,r5,pc}
020759c8  ldrh r0,[r4,#0x4]
020759cc  bl 0x020759e8
020759d0  cmp r0,#0x1
020759d4  ldrhne r1,[r4,#0x4]
020759d8  moveq r0,#0x0
020759dc  movne r0,#0x1
020759e0  strne r1,[r5,#0x0]
020759e4  ldmia sp!,{r3,r4,r5,pc}
