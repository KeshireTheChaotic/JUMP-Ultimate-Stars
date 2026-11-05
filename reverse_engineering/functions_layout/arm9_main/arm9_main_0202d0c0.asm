0202d0c0  stmdb sp!,{r4,lr}
0202d0c4  mov r4,r0
0202d0c8  ldr r0,[r4,#0x18]
0202d0cc  ldr r2,[r0,#0x0]
0202d0d0  ldr r2,[r2,#0x1c]
0202d0d4  blx r2
0202d0d8  ldr r1,[r4,#0x14]
0202d0dc  add r0,r0,r1, lsl #0x2
0202d0e0  ldmia sp!,{r4,pc}
