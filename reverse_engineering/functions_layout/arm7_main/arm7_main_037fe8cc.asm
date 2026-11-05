037fe8cc  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
037fe8d0  sub sp,sp,#0x8
037fe8d4  ldr r10,[0x37fe9e0]
037fe8d8  ldr r5,[0x37fe9e4]
037fe8dc  mov r7,#0x4100000
037fe8e0  mov r6,#0x0
037fe8e4  mvn r8,#0x3
037fe8e8  mvn r9,#0x2
037fe8ec  ldr r4,[0x37fe9e8]
037fe8f0  ldrh r0,[r10,#0x0]
037fe8f4  ands r0,r0,#0x4000
037fe8f8  ldrhne r0,[r10,#0x0]
037fe8fc  orrne r0,r0,#0xc000
037fe900  strhne r0,[r10,#0x0]
037fe904  movne r1,r9
037fe908  bne 0x037fe938
037fe90c  bl 0x037fe3a4
037fe910  ldrh r1,[r10,#0x0]
037fe914  ands r1,r1,#0x100
037fe918  beq 0x037fe928
037fe91c  bl 0x037fe3b8
037fe920  mov r1,r8
037fe924  b 0x037fe938
037fe928  ldr r1,[r7,#0x0]
037fe92c  str r1,[sp,#0x0]
037fe930  bl 0x037fe3b8
037fe934  mov r1,r6
037fe938  cmp r1,r8
037fe93c  beq 0x037fe9d4
037fe940  mvn r0,#0x2
037fe944  cmp r1,r0
037fe948  beq 0x037fe8f0
037fe94c  ldr r2,[sp,#0x0]
037fe950  mov r0,r2, lsl #0x1b
037fe954  movs r0,r0, lsr #0x1b
037fe958  beq 0x037fe8f0
037fe95c  ldr r3,[r5,r0,lsl #0x2]
037fe960  cmp r3,#0x0
037fe964  beq 0x037fe980
037fe968  mov r1,r2, lsr #0x6
037fe96c  mov r2,r2, lsl #0x1a
037fe970  mov r2,r2, lsr #0x1f
037fe974  mov lr,pc
037fe978  bx r3
037fe97c  b 0x037fe8f0
037fe980  mov r0,r2, lsl #0x1a
037fe984  movs r0,r0, lsr #0x1f
037fe988  bne 0x037fe8f0
037fe98c  orr r0,r2,#0x20
037fe990  str r0,[sp,#0x0]
037fe994  ldrh r0,[r10,#0x0]
037fe998  ands r0,r0,#0x4000
037fe99c  ldrhne r0,[r10,#0x0]
037fe9a0  orrne r0,r0,#0xc000
037fe9a4  strhne r0,[r10,#0x0]
037fe9a8  bne 0x037fe8f0
037fe9ac  bl 0x037fe3a4
037fe9b0  ldrh r1,[r10,#0x0]
037fe9b4  ands r1,r1,#0x2
037fe9b8  beq 0x037fe9c4
037fe9bc  bl 0x037fe3b8
037fe9c0  b 0x037fe8f0
037fe9c4  ldr r1,[sp,#0x0]
037fe9c8  str r1,[r4,#0x0]
037fe9cc  bl 0x037fe3b8
037fe9d0  b 0x037fe8f0
037fe9d4  add sp,sp,#0x8
037fe9d8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
037fe9dc  bx lr
