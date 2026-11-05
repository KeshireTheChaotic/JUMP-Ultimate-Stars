02151668  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0215166c  mov r6,r0
02151670  cmp r1,#0x6
02151674  movhi r1,#0x6
02151678  ldr r0,[0x21516ec]
0215167c  rsb r3,r1,#0x6
02151680  mov r5,r2
02151684  ldr r2,[r0,r3,lsl #0x2]
02151688  mov r0,#0xa
0215168c  mul r0,r2,r0
02151690  sub r0,r0,#0x1
02151694  cmp r6,r0
02151698  movhi r6,r0
0215169c  ldr r0,[0x21516ec]
021516a0  sub r4,r1,#0x1
021516a4  mov r9,#0x0
021516a8  add r8,r0,r3, lsl #0x2
021516ac  b 0x021516dc
021516b0  ldr r10,[r8,r9,lsl #0x2]
021516b4  mov r0,r6
021516b8  mov r1,r10
021516bc  bl 0x0200d338
021516c0  mov r7,r0
021516c4  mov r0,r6
021516c8  mov r1,r10
021516cc  bl 0x0200d338
021516d0  strb r7,[r5,r9]
021516d4  mov r6,r1
021516d8  add r9,r9,#0x1
021516dc  cmp r9,r4
021516e0  blt 0x021516b0
021516e4  strb r6,[r5,r9]
021516e8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
