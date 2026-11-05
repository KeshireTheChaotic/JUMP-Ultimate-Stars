0207b22c  stmdb sp!,{r3,lr}
0207b230  cmp r0,#0x0
0207b234  ldmiaeq sp!,{r3,pc}
0207b238  ldrb r3,[r0,#0x18]
0207b23c  tst r3,#0x20
0207b240  ldmiaeq sp!,{r3,pc}
0207b244  add r3,r0,#0x3c
0207b248  mov r0,r1
0207b24c  add r1,r3,r2, lsl #0x3
0207b250  mov r2,#0x8
0207b254  bl 0x02051890
0207b258  ldmia sp!,{r3,pc}
