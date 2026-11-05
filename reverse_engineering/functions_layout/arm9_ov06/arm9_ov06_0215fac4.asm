0215fac4  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
0215fac8  mov r7,r0
0215facc  ldr r0,[r7,#0x0]
0215fad0  mov r6,r1
0215fad4  bl 0x0215fb88
0215fad8  mov r5,#0x0
0215fadc  str r5,[r7,#0xc]
0215fae0  str r5,[r7,#0x8]
0215fae4  ldrsb r4,[r6,#0xa]
0215fae8  ldr r9,[0x215fb34]
0215faec  ldr r8,[0x215fb38]
0215faf0  b 0x0215fb1c
0215faf4  add r0,r6,r5
0215faf8  ldr r2,[r8,#0x0]
0215fafc  ldrsb r1,[r0,#0xb]
0215fb00  ldr r3,[r2,#0x50]
0215fb04  mov r0,r7
0215fb08  ldrb r2,[r3,r1,lsl #0x2]
0215fb0c  add r1,r3,r1, lsl #0x2
0215fb10  ldr r2,[r9,r2,lsl #0x2]
0215fb14  blx r2
0215fb18  add r5,r5,#0x1
0215fb1c  cmp r5,r4
0215fb20  blt 0x0215faf4
0215fb24  ldr r0,[r7,#0x0]
0215fb28  mov r1,#0x5
0215fb2c  bl 0x0215fc78
0215fb30  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
