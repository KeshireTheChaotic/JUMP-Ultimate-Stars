0202e5cc  stmdb sp!,{r3,lr}
0202e5d0  add r2,r2,r2, lsr #0x1f
0202e5d4  mov r2,r2, asr #0x1
0202e5d8  strh r2,[sp,#0x0]
0202e5dc  ldr r3,[r0,#0x0]
0202e5e0  add r2,sp,#0x0
0202e5e4  ldr r3,[r3,#0x24]
0202e5e8  blx r3
0202e5ec  ldmia sp!,{r3,pc}
