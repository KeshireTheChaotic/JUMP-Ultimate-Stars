0202c69c  stmdb sp!,{r3,lr}
0202c6a0  mov r2,r2, lsl #0xc
0202c6a4  str r2,[sp,#0x0]
0202c6a8  ldr r3,[r0,#0x0]
0202c6ac  add r2,sp,#0x0
0202c6b0  ldr r3,[r3,#0x40]
0202c6b4  blx r3
0202c6b8  ldmia sp!,{r3,pc}
