0204a5b4  stmdb sp!,{r3,r4,r5,lr}
0204a5b8  ldr r3,[r0,#0x0]
0204a5bc  mov r5,r0
0204a5c0  ldr r3,[r3,#0x2c]
0204a5c4  blx r3
0204a5c8  mov r4,r0
0204a5cc  mov r0,r5
0204a5d0  ldr r1,[r0,#0x0]
0204a5d4  ldr r1,[r1,#0x60]
0204a5d8  blx r1
0204a5dc  ldr r1,[r0,#0x10]
0204a5e0  mov r0,r4, lsl #0x1
0204a5e4  ldrh r0,[r1,r0]
0204a5e8  ldmia sp!,{r3,r4,r5,pc}
