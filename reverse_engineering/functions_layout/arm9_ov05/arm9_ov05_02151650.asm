02151650  stmdb sp!,{r3,r4,lr}
02151654  sub sp,sp,#0x4
02151658  ldr r0,[r0,#0x4]
0215165c  cmp r1,#0x2
02151660  ldr r4,[r0,#0x10]
02151664  bne 0x021516ac
02151668  ldr r0,[r4,#0x68]
0215166c  ldr r0,[r0,#0x4]
02151670  ldr r1,[r0,#0x0]
02151674  ldr r1,[r1,#0x194]
02151678  blx r1
0215167c  mov r2,r0, lsl #0x10
02151680  mov r1,#0x0
02151684  str r1,[sp,#0x0]
02151688  mov r3,r2, asr #0x10
0215168c  ldr r1,[r4,#0x30]
02151690  ldr r12,[r4,#0x2c]
02151694  mov r0,r4
02151698  mov r2,#0x1
0215169c  blx r12
021516a0  ldr r0,[r4,#0x88]
021516a4  ldr r0,[r0,#0x4]
021516a8  blx 0x021b65e0
021516ac  add sp,sp,#0x4
021516b0  ldmia sp!,{r3,r4,pc}
