037ff8dc  stmdb sp!,{r4,r5,lr}
037ff8e0  sub sp,sp,#0x4
037ff8e4  mov r4,r0
037ff8e8  mov r5,r1
037ff8ec  ldrsh r3,[r4,#0x32]
037ff8f0  cmp r3,#0x0
037ff8f4  moveq r0,#0x0
037ff8f8  beq 0x037ff940
037ff8fc  ldr r0,[r4,#0x14]
037ff900  ldr r2,[r4,#0x18]
037ff904  cmp r0,r2
037ff908  movge r0,#0x0
037ff90c  bge 0x037ff940
037ff910  sub r0,r2,r0
037ff914  smull r0,r1,r3,r0
037ff918  mov r3,r2, asr #0x1f
037ff91c  bl 0x03807710
037ff920  cmp r5,#0x0
037ff924  beq 0x037ff940
037ff928  ldrb r1,[r4,#0x3]
037ff92c  mov r1,r1, lsl #0x1d
037ff930  movs r1,r1, lsr #0x1f
037ff934  ldrne r1,[r4,#0x14]
037ff938  addne r1,r1,#0x1
037ff93c  strne r1,[r4,#0x14]
037ff940  add sp,sp,#0x4
037ff944  ldmia sp!,{r4,r5,lr}
037ff948  bx lr
