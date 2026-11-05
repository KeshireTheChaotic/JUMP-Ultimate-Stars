0202b3c8  stmdb sp!,{r3,r4,r5,lr}
0202b3cc  ldr r1,[0x202b3fc]
0202b3d0  mov r5,r0
0202b3d4  ldr r0,[r1,#0x148]
0202b3d8  blx r0
0202b3dc  mov r4,r0
0202b3e0  ldr r0,[r4,#0x64]
0202b3e4  mov r1,r5, lsl #0x1
0202b3e8  ldr r2,[r0,#0x0]
0202b3ec  ldr r2,[r2,#0x5c]
0202b3f0  blx r2
0202b3f4  mov r0,r4
0202b3f8  ldmia sp!,{r3,r4,r5,pc}
