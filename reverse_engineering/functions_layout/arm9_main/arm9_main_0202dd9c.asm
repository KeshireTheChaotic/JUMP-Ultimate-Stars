0202dd9c  stmdb sp!,{r4,lr}
0202dda0  ldr r2,[0x202dde0]
0202dda4  ldr r3,[r0,#0x0]
0202dda8  ldr lr,[r2,#0x1a8]
0202ddac  ldr r12,[0x202dde4]
0202ddb0  add lr,lr,#0x1
0202ddb4  and r4,lr,#0x7
0202ddb8  str r4,[r2,#0x1a8]
0202ddbc  mov r4,lr, lsl #0x1d
0202ddc0  ldr r3,[r3,#0x20]
0202ddc4  add r2,r12,r4, lsr #0x1b
0202ddc8  blx r3
0202ddcc  ldr r0,[0x202dde0]
0202ddd0  ldr r1,[0x202dde4]
0202ddd4  ldr r0,[r0,#0x1a8]
0202ddd8  add r0,r1,r0, lsl #0x2
0202dddc  ldmia sp!,{r4,pc}
