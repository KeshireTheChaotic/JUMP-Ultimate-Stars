0214fdb0  stmdb sp!,{r3,r4,lr}
0214fdb4  sub sp,sp,#0x4
0214fdb8  movs r4,r0
0214fdbc  strne r1,[r4,#0x2c]
0214fdc0  strne r2,[r4,#0x30]
0214fdc4  cmpne r2,#0x0
0214fdc8  ldrne r0,[r4,#0x68]
0214fdcc  ldrne r0,[r0,#0x4]
0214fdd0  ldrne r1,[r0,#0x148]
0214fdd4  cmpne r1,#0x0
0214fdd8  beq 0x0214fe0c
0214fddc  ldr r1,[r0,#0x0]
0214fde0  ldr r1,[r1,#0x194]
0214fde4  blx r1
0214fde8  mov r2,r0, lsl #0x10
0214fdec  mov r1,#0x0
0214fdf0  str r1,[sp,#0x0]
0214fdf4  mov r3,r2, asr #0x10
0214fdf8  ldr r1,[r4,#0x30]
0214fdfc  ldr r12,[r4,#0x2c]
0214fe00  mov r0,r4
0214fe04  mov r2,#0x1
0214fe08  blx r12
0214fe0c  add sp,sp,#0x4
0214fe10  ldmia sp!,{r3,r4,pc}
