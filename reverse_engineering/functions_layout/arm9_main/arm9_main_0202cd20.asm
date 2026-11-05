0202cd20  stmdb sp!,{r3,lr}
0202cd24  strb r2,[sp,#0x0]
0202cd28  ldr r3,[r0,#0x0]
0202cd2c  add r2,sp,#0x0
0202cd30  ldr r3,[r3,#0x24]
0202cd34  blx r3
0202cd38  ldmia sp!,{r3,pc}
