0215bed0  stmdb sp!,{r3,r4,r5,lr}
0215bed4  sub sp,sp,#0x8
0215bed8  ldr r1,[0x215bf48]
0215bedc  mov r5,r0
0215bee0  ldr r4,[r5,#0x4]
0215bee4  bl 0x02151d90
0215bee8  ldr r0,[r0,#0x4]
0215beec  ldr r0,[r0,#0x64]
0215bef0  ldrb r0,[r0,#0x10]
0215bef4  mov r1,r0, lsl #0x18
0215bef8  movs r1,r1, lsr #0x1f
0215befc  beq 0x0215bf18
0215bf00  mov r0,r0, lsl #0x1e
0215bf04  movs r0,r0, lsr #0x1f
0215bf08  beq 0x0215bf18
0215bf0c  mov r0,#0x78
0215bf10  mov r1,#0x3
0215bf14  bl 0x0207342c
0215bf18  ldrsh r0,[r4,#0xa2]
0215bf1c  add r1,sp,#0x4
0215bf20  add r2,sp,#0x0
0215bf24  mov r0,r0, lsl #0xc
0215bf28  str r0,[sp,#0x0]
0215bf2c  ldrsh r3,[r4,#0xa0]
0215bf30  mov r0,r5
0215bf34  mov r3,r3, lsl #0xc
0215bf38  str r3,[sp,#0x4]
0215bf3c  bl 0x0214e1b8
0215bf40  add sp,sp,#0x8
0215bf44  ldmia sp!,{r3,r4,r5,pc}
