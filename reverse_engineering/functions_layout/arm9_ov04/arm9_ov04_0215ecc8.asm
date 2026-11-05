0215ecc8  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0215eccc  sub sp,sp,#0x18
0215ecd0  mov r10,r0
0215ecd4  mov r5,#0x0
0215ecd8  add r4,sp,#0x8
0215ecdc  mov r6,#0x2f
0215ece0  mul r0,r5,r6
0215ece4  add r0,r0,#0x5
0215ece8  str r0,[r4,r5,lsl #0x2]
0215ecec  bl 0x0214f704
0215ecf0  add r0,r10,r0
0215ecf4  ldrsb r0,[r0,#0x14]
0215ecf8  cmp r5,r0
0215ecfc  ldreq r0,[r4,r5,lsl #0x2]
0215ed00  addeq r0,r0,#0xc
0215ed04  streq r0,[r4,r5,lsl #0x2]
0215ed08  add r5,r5,#0x1
0215ed0c  cmp r5,#0x4
0215ed10  blt 0x0215ece0
0215ed14  mov r7,#0x0
0215ed18  mov r6,r7
0215ed1c  add r5,sp,#0x8
0215ed20  mov r4,#0xe8000
0215ed24  add r11,sp,#0x4
0215ed28  b 0x0215edb4
0215ed2c  add r0,r10,r7
0215ed30  ldrsb r3,[r0,#0x18]
0215ed34  mov r2,r6
0215ed38  add r0,r10,r3, lsl #0x2
0215ed3c  ldr r9,[r0,#0x4]
0215ed40  add r1,r3,#0x7
0215ed44  ldr r0,[r9,#0x4]
0215ed48  add r3,r10,r3
0215ed4c  orr r1,r1,#0x820000
0215ed50  ldrsb r8,[r3,#0x14]
0215ed54  bl 0x02023894
0215ed58  ldr r0,[r9,#0x4]
0215ed5c  ldr r0,[r0,#0x68]
0215ed60  ldr r1,[r0,#0x0]
0215ed64  ldr r1,[r1,#0x6c]
0215ed68  blx r1
0215ed6c  ldr r1,[r5,r8,lsl #0x2]
0215ed70  str r4,[sp,#0x4]
0215ed74  add r1,r1,#0x6
0215ed78  mov r1,r1, lsl #0xc
0215ed7c  str r1,[sp,#0x0]
0215ed80  mov r0,r9
0215ed84  mov r1,r11
0215ed88  add r2,sp,#0x0
0215ed8c  bl 0x0214e1b8
0215ed90  ldr r0,[r9,#0x4]
0215ed94  mov r1,#0x1
0215ed98  ldr r2,[r0,#0x0]
0215ed9c  ldr r2,[r2,#0xd8]
0215eda0  blx r2
0215eda4  ldr r0,[r5,r8,lsl #0x2]
0215eda8  add r7,r7,#0x1
0215edac  add r0,r0,#0xc
0215edb0  str r0,[r5,r8,lsl #0x2]
0215edb4  ldrsb r0,[r10,#0x1c]
0215edb8  cmp r7,r0
0215edbc  blt 0x0215ed2c
0215edc0  add sp,sp,#0x18
0215edc4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
