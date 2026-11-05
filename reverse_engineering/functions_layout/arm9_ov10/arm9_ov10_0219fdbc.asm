0219fdbc  stmdb sp!,{r3,lr}
0219fdc0  sub sp,sp,#0x8
0219fdc4  ldr r1,[0x219fe04]
0219fdc8  ldr r1,[r1,#0x0]
0219fdcc  cmp r1,#0x0
0219fdd0  beq 0x0219fdfc
0219fdd4  strb r0,[sp,#0x4]
0219fdd8  bl 0x0219b620
0219fddc  mov r0,r0, lsl #0x18
0219fde0  mov r12,#0xff
0219fde4  mov r3,r0, asr #0x18
0219fde8  add r1,sp,#0x4
0219fdec  mov r0,#0x9
0219fdf0  mov r2,#0x1
0219fdf4  str r12,[sp,#0x0]
0219fdf8  bl 0x0219f834
0219fdfc  add sp,sp,#0x8
0219fe00  ldmia sp!,{r3,pc}
