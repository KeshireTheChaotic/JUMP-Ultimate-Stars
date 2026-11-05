0216bf78  stmdb sp!,{r3,lr}
0216bf7c  ldr r0,[r0,#0x4]
0216bf80  ldr r1,[0x216bfac]
0216bf84  ldr r2,[r0,#0x124]
0216bf88  ldr r0,[r0,#0x10]
0216bf8c  str r2,[r0,#0x1a0]
0216bf90  mov r2,r2, lsl #0x1
0216bf94  ldrh r3,[r1,r2]
0216bf98  ldr r1,[r0,#0x10]
0216bf9c  ldr r12,[r0,#0xc]
0216bfa0  mov r2,#0x1
0216bfa4  blx r12
0216bfa8  ldmia sp!,{r3,pc}
