03802758  stmdb sp!,{r4,r5,r6,r7,lr}
0380275c  sub sp,sp,#0x4
03802760  mov r5,#0x0
03802764  mov r4,r5
03802768  ldr r0,[0x38027f4]
0380276c  ldr r0,[r0,#0x0]
03802770  cmp r0,#0x0
03802774  beq 0x038027e8
03802778  mov r7,r5
0380277c  mov r6,#0x1
03802780  mov r0,r7
03802784  bl 0x037fefd0
03802788  cmp r0,#0x0
0380278c  orrne r0,r5,r6, lsl r7
03802790  movne r0,r0, lsl #0x10
03802794  movne r5,r0, lsr #0x10
03802798  add r7,r7,#0x1
0380279c  cmp r7,#0x10
038027a0  blt 0x03802780
038027a4  mov r0,#0x0
038027a8  bl 0x037ff7d0
038027ac  cmp r0,#0x0
038027b0  orrne r0,r4,#0x1
038027b4  movne r0,r0, lsl #0x10
038027b8  movne r4,r0, lsr #0x10
038027bc  mov r0,#0x1
038027c0  bl 0x037ff7d0
038027c4  cmp r0,#0x0
038027c8  orrne r0,r4,#0x2
038027cc  movne r0,r0, lsl #0x10
038027d0  movne r4,r0, lsr #0x10
038027d4  ldr r0,[0x38027f4]
038027d8  ldr r1,[r0,#0x0]
038027dc  strh r5,[r1,#0x8]
038027e0  ldr r0,[r0,#0x0]
038027e4  strh r4,[r0,#0xa]
038027e8  add sp,sp,#0x4
038027ec  ldmia sp!,{r4,r5,r6,r7,lr}
038027f0  bx lr
