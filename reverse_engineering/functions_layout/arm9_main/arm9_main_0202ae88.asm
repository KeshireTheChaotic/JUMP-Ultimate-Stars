0202ae88  stmdb sp!,{r3,lr}
0202ae8c  mov r2,r0
0202ae90  ldrb r0,[r2,#0x25]
0202ae94  mov r0,r0, lsl #0x1b
0202ae98  movs r0,r0, lsr #0x1f
0202ae9c  ldmiaeq sp!,{r3,pc}
0202aea0  ldrb r0,[r1,#0x25]
0202aea4  tst r0,#0x7
0202aea8  add r0,r2,#0x54
0202aeac  bne 0x0202aebc
0202aeb0  add r1,r2,#0x3c
0202aeb4  bl 0x0201a12c
0202aeb8  ldmia sp!,{r3,pc}
0202aebc  add r1,r1,#0x54
0202aec0  bl 0x0201a12c
0202aec4  ldmia sp!,{r3,pc}
