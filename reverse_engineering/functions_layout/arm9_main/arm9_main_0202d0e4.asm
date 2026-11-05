0202d0e4  stmdb sp!,{r3,r4,r5,lr}
0202d0e8  mov r5,r0
0202d0ec  ldr r0,[r5,#0x18]
0202d0f0  mov r4,r2
0202d0f4  ldr r2,[r0,#0x0]
0202d0f8  ldr r2,[r2,#0x1c]
0202d0fc  blx r2
0202d100  ldr r1,[r5,#0x14]
0202d104  ldr r0,[r0,r1,lsl #0x2]
0202d108  str r0,[r4,#0x0]
0202d10c  ldmia sp!,{r3,r4,r5,pc}
