02155680  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02155684  ldr r4,[0x21556d4]
02155688  mov r7,r0
0215568c  mov r6,#0x0
02155690  mov r8,#0x9c
02155694  add r0,r4,r6, lsl #0x4
02155698  ldrb r0,[r0,#0xc]
0215569c  mul r5,r6,r8
021556a0  cmp r0,#0x0
021556a4  beq 0x021556c4
021556a8  add r0,r7,r5
021556ac  bl 0x02155588
021556b0  add r0,r4,r6, lsl #0x4
021556b4  ldr r2,[r0,#0x8]
021556b8  mov r0,r7
021556bc  add r1,r7,r5
021556c0  blx r2
021556c4  add r6,r6,#0x1
021556c8  cmp r6,#0x6
021556cc  blt 0x02155694
021556d0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
