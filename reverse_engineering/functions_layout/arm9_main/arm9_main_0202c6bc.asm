0202c6bc  stmdb sp!,{r3,lr}
0202c6c0  mov r2,r2, lsl #0xc
0202c6c4  str r2,[sp,#0x0]
0202c6c8  ldr r3,[r0,#0x0]
0202c6cc  add r2,sp,#0x0
0202c6d0  ldr r3,[r3,#0x40]
0202c6d4  blx r3
0202c6d8  ldmia sp!,{r3,pc}
