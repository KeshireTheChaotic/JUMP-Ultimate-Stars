02159854  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02159858  mov r8,r0
0215985c  ldr r0,[0x21598d8]
02159860  ldrb r3,[r8,#0x4]
02159864  mov r7,r1
02159868  smulbb r5,r2,r0
0215986c  sub r1,r3,#0x4
02159870  add r0,r7,#0x1f0
02159874  add r6,r0,r5
02159878  and r4,r1,#0xff
0215987c  add r0,r7,r5
02159880  add r0,r0,r4, lsl #0x2
02159884  ldr r3,[r6,r4,lsl #0x2]
02159888  ldr r1,[r0,#0x4bc]
0215988c  ldrb r2,[r8,#0x5]
02159890  ldr r0,[r3,#0x4]
02159894  add r1,r2,r1
02159898  mov r2,#0x0
0215989c  bl 0x02023894
021598a0  ldr r0,[r6,r4,lsl #0x2]
021598a4  ldr r0,[r0,#0x4]
021598a8  ldr r0,[r0,#0x68]
021598ac  ldr r1,[r0,#0x0]
021598b0  ldr r1,[r1,#0x6c]
021598b4  blx r1
021598b8  ldrb r0,[r8,#0x6]
021598bc  tst r0,#0x1
021598c0  ldrne r1,[0x21598dc]
021598c4  addne r0,r7,r5
021598c8  strne r1,[r0,#0x1dc]
021598cc  movne r0,#0x1
021598d0  moveq r0,#0x0
021598d4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
