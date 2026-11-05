0202b1cc  stmdb sp!,{r3,lr}
0202b1d0  mov r2,r0
0202b1d4  ldrb r0,[r2,#0x25]
0202b1d8  mov r0,r0, lsl #0x1b
0202b1dc  movs r0,r0, lsr #0x1f
0202b1e0  ldmiaeq sp!,{r3,pc}
0202b1e4  add r0,r2,#0x54
0202b1e8  add r1,r1,#0x54
0202b1ec  add r2,r2,#0x3c
0202b1f0  bl 0x02019fb0
0202b1f4  ldmia sp!,{r3,pc}
