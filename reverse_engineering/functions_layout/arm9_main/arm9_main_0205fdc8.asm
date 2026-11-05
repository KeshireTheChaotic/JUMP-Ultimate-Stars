0205fdc8  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0205fdcc  sub sp,sp,#0x2c
0205fdd0  ldr r4,[sp,#0x54]
0205fdd4  ldrb r5,[r0,#0xc]
0205fdd8  str r4,[sp,#0x54]
0205fddc  ldr r4,[r4,#0x0]
0205fde0  ldr r6,[r1,#0x0]
0205fde4  mov r7,r5, lsl #0x6
0205fde8  ldrb r4,[r4,#0x1]
0205fdec  mov r5,r7, asr #0x2
0205fdf0  add r5,r7,r5, lsr #0x1d
0205fdf4  cmp r4,#0x0
0205fdf8  ldr r6,[r6,#0x8]
0205fdfc  mov r9,r3
0205fe00  ldr r8,[r0,#0x4]
0205fe04  ldr r7,[r0,#0x8]
0205fe08  mov r10,r2
0205fe0c  mov r5,r5, asr #0x3
0205fe10  addeq sp,sp,#0x2c
0205fe14  ldr lr,[r0,#0x0]
0205fe18  ldrb r3,[r6,#0x1]
0205fe1c  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205fe20  adds r6,r10,r4
0205fe24  addmi sp,sp,#0x2c
0205fe28  ldmiami sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205fe2c  adds r2,r9,r3
0205fe30  addmi sp,sp,#0x2c
0205fe34  ldmiami sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205fe38  cmp r10,#0x0
0205fe3c  movle r11,#0x0
0205fe40  add r6,r6,#0x7
0205fe44  movgt r11,r10, lsr #0x3
0205fe48  cmp r9,#0x0
0205fe4c  movle r12,#0x0
0205fe50  add r2,r2,#0x7
0205fe54  mov r6,r6, lsr #0x3
0205fe58  movgt r12,r9, lsr #0x3
0205fe5c  cmp r6,r8
0205fe60  movcs r6,r8
0205fe64  mov r2,r2, lsr #0x3
0205fe68  cmp r2,r7
0205fe6c  movcs r2,r7
0205fe70  subs r7,r6,r11
0205fe74  addmi sp,sp,#0x2c
0205fe78  sub r2,r2,r12
0205fe7c  ldmiami sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205fe80  cmp r2,#0x0
0205fe84  addlt sp,sp,#0x2c
0205fe88  ldmialt sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205fe8c  ldr r6,[r0,#0x10]
0205fe90  cmp r10,#0x0
0205fe94  sub r8,r6,r7
0205fe98  mul r8,r5,r8
0205fe9c  mla r11,r6,r12,r11
0205fea0  andge r10,r10,#0x7
0205fea4  str r8,[sp,#0x0]
0205fea8  ldr r8,[sp,#0x54]
0205feac  mla r6,r5,r11,lr
0205feb0  ldr r12,[r8,#0x4]
0205feb4  ldr r11,[sp,#0x50]
0205feb8  cmp r9,#0x0
0205febc  sub r8,r11,#0x1
0205fec0  andge r9,r9,#0x7
0205fec4  sub r11,r9,r2, lsl #0x3
0205fec8  str r12,[sp,#0x8]
0205fecc  str r4,[sp,#0x14]
0205fed0  str r8,[sp,#0x28]
0205fed4  str r3,[sp,#0x18]
0205fed8  ldr r3,[r1,#0x0]
0205fedc  cmp r9,r11
0205fee0  ldr r2,[r3,#0x8]
0205fee4  sub r7,r10,r7, lsl #0x3
0205fee8  ldrb r2,[r2,#0x6]
0205feec  str r2,[sp,#0x20]
0205fef0  ldrb r0,[r0,#0xc]
0205fef4  str r0,[sp,#0x24]
0205fef8  ldr r0,[r1,#0x0]
0205fefc  ldr r0,[r0,#0x8]
0205ff00  ldrb r0,[r0,#0x0]
0205ff04  mul r0,r2,r0
0205ff08  str r0,[sp,#0x1c]
0205ff0c  addle sp,sp,#0x2c
0205ff10  ldmiale sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205ff14  add r4,sp,#0x4
0205ff18  mov r8,r10
0205ff1c  str r9,[sp,#0x10]
0205ff20  cmp r10,r7
0205ff24  ble 0x0205ff48
0205ff28  mov r0,r4
0205ff2c  str r6,[sp,#0x4]
0205ff30  str r8,[sp,#0xc]
0205ff34  bl 0x0205ff64
0205ff38  sub r8,r8,#0x8
0205ff3c  cmp r8,r7
0205ff40  add r6,r6,r5
0205ff44  bgt 0x0205ff28
0205ff48  ldr r0,[sp,#0x0]
0205ff4c  sub r9,r9,#0x8
0205ff50  cmp r9,r11
0205ff54  add r6,r6,r0
0205ff58  bgt 0x0205ff18
0205ff5c  add sp,sp,#0x2c
0205ff60  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
