0202ac90  stmdb sp!,{r3,r4,r5,lr}
0202ac94  mov r4,r1
0202ac98  mov r5,r0
0202ac9c  bl 0x0202a490
0202aca0  cmp r4,#0x0
0202aca4  ldmiaeq sp!,{r3,r4,r5,pc}
0202aca8  ldrb r0,[r4,#0x24]
0202acac  mov r0,r0, lsl #0x19
0202acb0  movs r0,r0, lsr #0x1f
0202acb4  beq 0x0202acc0
0202acb8  mov r0,r5
0202acbc  bl 0x0202a55c
0202acc0  mov r0,r5
0202acc4  ldr r1,[r0,#0x0]
0202acc8  ldr r1,[r1,#0x14]
0202accc  blx r1
0202acd0  ldmia sp!,{r3,r4,r5,pc}
