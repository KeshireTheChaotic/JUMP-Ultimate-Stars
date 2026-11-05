0214d4c8  stmdb sp!,{r3,lr}
0214d4cc  mov r1,r1, lsl #0xc
0214d4d0  str r1,[sp,#0x0]
0214d4d4  ldr r0,[r0,#0x4]
0214d4d8  add r1,sp,#0x0
0214d4dc  ldr r2,[r0,#0x0]
0214d4e0  ldr r2,[r2,#0x10]
0214d4e4  blx r2
0214d4e8  ldmia sp!,{r3,pc}
