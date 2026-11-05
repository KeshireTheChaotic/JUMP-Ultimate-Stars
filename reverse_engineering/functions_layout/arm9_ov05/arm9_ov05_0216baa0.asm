0216baa0  stmdb sp!,{r3,lr}
0216baa4  str r1,[r0,#0xc]
0216baa8  str r2,[r0,#0x10]
0216baac  ldr r3,[r0,#0x1a0]
0216bab0  ldr r1,[0x216bad0]
0216bab4  mov r3,r3, lsl #0x1
0216bab8  ldrh r3,[r1,r3]
0216babc  ldr r12,[r0,#0xc]
0216bac0  mov r1,r2
0216bac4  mov r2,#0x1
0216bac8  blx r12
0216bacc  ldmia sp!,{r3,pc}
