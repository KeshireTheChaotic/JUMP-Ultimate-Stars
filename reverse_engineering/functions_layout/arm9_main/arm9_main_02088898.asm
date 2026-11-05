02088898  stmdb sp!,{r4,lr}
0208889c  ldr r3,[0x20888dc]
020888a0  mvn r4,#0x0
020888a4  ldrb lr,[r3,#0x0]
020888a8  ldrb r1,[r3,#0x1]
020888ac  mov r0,r4
020888b0  cmp r1,lr
020888b4  ldmiaeq sp!,{r4,pc}
020888b8  ldr r12,[0x20888e0]
020888bc  add r1,lr,#0x1
020888c0  mov r2,r1, lsr #0x1f
020888c4  ldrsb r0,[r12,lr]
020888c8  rsb r1,r2,r1, lsl #0x1f
020888cc  add r1,r2,r1, ror #0x1f
020888d0  strb r4,[r12,lr]
020888d4  strb r1,[r3,#0x0]
020888d8  ldmia sp!,{r4,pc}
