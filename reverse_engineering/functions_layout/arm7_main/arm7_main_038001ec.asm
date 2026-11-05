038001ec  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
038001f0  sub sp,sp,#0x1c
038001f4  mov r6,r0
038001f8  mov r4,#0x0
038001fc  mov r11,r4
03800200  mov r7,#0x1
03800204  str r4,[sp,#0x8]
03800208  mov r0,#0x7f
0380020c  str r0,[sp,#0x14]
03800210  str r4,[sp,#0x10]
03800214  str r4,[sp,#0xc]
03800218  str r4,[sp,#0x4]
0380021c  str r4,[sp,#0x0]
03800220  ldr r8,[sp,#0x0]
03800224  mov r10,r8
03800228  mov r9,r8
0380022c  mov r1,#0x54
03800230  ldr r0,[0x38004f4]
03800234  mla r5,r4,r1,r0
03800238  ldrb r1,[r5,#0x3]
0380023c  mov r0,r1, lsl #0x1f
03800240  movs r0,r0, lsr #0x1f
03800244  beq 0x038004dc
03800248  mov r0,r1, lsl #0x1e
0380024c  movs r0,r0, lsr #0x1f
03800250  beq 0x03800284
03800254  bic r0,r1,#0xf8
03800258  mov r1,r1, lsl #0x18
0380025c  mov r1,r1, lsr #0x1b
03800260  orr r1,r1,#0x1
03800264  and r1,r1,#0xff
03800268  and r1,r1,#0x1f
0380026c  orr r0,r0,r1, lsl #0x3
03800270  strb r0,[r5,#0x3]
03800274  ldrb r0,[r5,#0x3]
03800278  bic r0,r0,#0x2
0380027c  strb r0,[r5,#0x3]
03800280  b 0x038002d0
03800284  mov r0,r4
03800288  bl 0x037fefd0
0380028c  cmp r0,#0x0
03800290  bne 0x038002d0
03800294  ldr r3,[r5,#0x48]
03800298  cmp r3,#0x0
0380029c  strbeq r11,[r5,#0x22]
038002a0  beq 0x038002b8
038002a4  mov r0,r5
038002a8  mov r1,r7
038002ac  ldr r2,[r5,#0x4c]
038002b0  mov lr,pc
038002b4  bx r3
038002b8  ldr r0,[sp,#0x4]
038002bc  strh r0,[r5,#0x24]
038002c0  ldrb r0,[r5,#0x3]
038002c4  bic r0,r0,#0x1
038002c8  strb r0,[r5,#0x3]
038002cc  b 0x038004dc
038002d0  ldrb r0,[r5,#0x9]
038002d4  mov r1,r0, lsl #0x1
038002d8  ldr r0,[0x38004f8]
038002dc  ldrsh r0,[r0,r1]
038002e0  add r8,r8,r0
038002e4  ldrb r1,[r5,#0x8]
038002e8  ldrb r0,[r5,#0x5]
038002ec  sub r0,r1,r0
038002f0  add r10,r10,r0, lsl #0x6
038002f4  mov r0,r5
038002f8  mov r1,r6
038002fc  bl 0x0380005c
03800300  add r8,r8,r0
03800304  mov r0,r5
03800308  mov r1,r6
0380030c  bl 0x037ff8dc
03800310  add r2,r10,r0
03800314  ldrsh r0,[r5,#0xc]
03800318  add r1,r8,r0
0380031c  ldrsh r0,[r5,#0x6]
03800320  add r8,r1,r0
03800324  ldrsh r0,[r5,#0xe]
03800328  add r10,r2,r0
0380032c  mov r0,r5
03800330  mov r1,r6
03800334  bl 0x037ff840
03800338  ldrb r1,[r5,#0x28]
0380033c  cmp r1,#0x0
03800340  beq 0x0380036c
03800344  cmp r1,#0x1
03800348  beq 0x03800358
0380034c  cmp r1,#0x2
03800350  addeq r9,r9,r0
03800354  b 0x03800370
03800358  mov r1,#0x8000
0380035c  rsb r1,r1,#0x0
03800360  cmp r8,r1
03800364  addgt r8,r8,r0
03800368  b 0x03800370
0380036c  add r10,r10,r0
03800370  ldrsb r0,[r5,#0xa]
03800374  add r9,r9,r0
03800378  ldrb r0,[r5,#0x4]
0380037c  cmp r0,#0x7f
03800380  mulne r0,r9,r0
03800384  addne r0,r0,#0x40
03800388  movne r9,r0, asr #0x7
0380038c  ldrsb r0,[r5,#0xb]
03800390  add r9,r9,r0
03800394  ldrb r0,[r5,#0x2]
03800398  cmp r0,#0x3
0380039c  bne 0x038003fc
038003a0  ldr r0,[0x38004fc]
038003a4  cmp r8,r0
038003a8  bgt 0x038003fc
038003ac  ldrb r0,[r5,#0x3]
038003b0  bic r0,r0,#0xf8
038003b4  orr r0,r0,#0x10
038003b8  strb r0,[r5,#0x3]
038003bc  ldr r3,[r5,#0x48]
038003c0  cmp r3,#0x0
038003c4  ldreq r0,[sp,#0x8]
038003c8  strbeq r0,[r5,#0x22]
038003cc  beq 0x038003e4
038003d0  mov r0,r5
038003d4  mov r1,r7
038003d8  ldr r2,[r5,#0x4c]
038003dc  mov lr,pc
038003e0  bx r3
038003e4  ldr r0,[sp,#0xc]
038003e8  strh r0,[r5,#0x24]
038003ec  ldrb r0,[r5,#0x3]
038003f0  bic r0,r0,#0x1
038003f4  strb r0,[r5,#0x3]
038003f8  b 0x038004dc
038003fc  mov r0,r8
03800400  bl 0x037ff408
03800404  mov r8,r0
03800408  ldrh r0,[r5,#0x3c]
0380040c  mov r1,r10
03800410  bl 0x037ff48c
03800414  ldrb r1,[r5,#0x1]
03800418  cmp r1,#0x1
0380041c  ldreq r1,[0x3800500]
03800420  andeq r0,r0,r1
03800424  moveq r0,r0, lsl #0x10
03800428  moveq r0,r0, lsr #0x10
0380042c  adds r9,r9,#0x40
03800430  ldrmi r9,[sp,#0x10]
03800434  bmi 0x03800440
03800438  cmp r9,#0x7f
0380043c  ldrgt r9,[sp,#0x14]
03800440  ldrh r1,[r5,#0x24]
03800444  cmp r8,r1
03800448  beq 0x03800474
0380044c  strh r8,[r5,#0x24]
03800450  ldrb r2,[r5,#0x3]
03800454  bic r1,r2,#0xf8
03800458  mov r2,r2, lsl #0x18
0380045c  mov r2,r2, lsr #0x1b
03800460  orr r2,r2,#0x8
03800464  and r2,r2,#0xff
03800468  and r2,r2,#0x1f
0380046c  orr r1,r1,r2, lsl #0x3
03800470  strb r1,[r5,#0x3]
03800474  ldrh r1,[r5,#0x26]
03800478  cmp r0,r1
0380047c  beq 0x038004a8
03800480  strh r0,[r5,#0x26]
03800484  ldrb r0,[r5,#0x3]
03800488  bic r1,r0,#0xf8
0380048c  mov r0,r0, lsl #0x18
03800490  mov r0,r0, lsr #0x1b
03800494  orr r0,r0,#0x4
03800498  and r0,r0,#0xff
0380049c  and r0,r0,#0x1f
038004a0  orr r0,r1,r0, lsl #0x3
038004a4  strb r0,[r5,#0x3]
038004a8  ldrb r0,[r5,#0x23]
038004ac  cmp r9,r0
038004b0  beq 0x038004dc
038004b4  strb r9,[r5,#0x23]
038004b8  ldrb r0,[r5,#0x3]
038004bc  bic r1,r0,#0xf8
038004c0  mov r0,r0, lsl #0x18
038004c4  mov r0,r0, lsr #0x1b
038004c8  orr r0,r0,#0x10
038004cc  and r0,r0,#0xff
038004d0  and r0,r0,#0x1f
038004d4  orr r0,r1,r0, lsl #0x3
038004d8  strb r0,[r5,#0x3]
038004dc  add r4,r4,#0x1
038004e0  cmp r4,#0x10
038004e4  blt 0x03800220
038004e8  add sp,sp,#0x1c
038004ec  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
038004f0  bx lr
