0215e2ec  stmdb sp!,{r3,lr}
0215e2f0  ldr r0,[r0,#0x4]
0215e2f4  bl 0x02023fb0
0215e2f8  cmp r0,#0x0
0215e2fc  moveq r0,#0x0
0215e300  ldmiaeq sp!,{r3,pc}
0215e304  bl 0x0215e28c
0215e308  ldmia sp!,{r3,pc}
