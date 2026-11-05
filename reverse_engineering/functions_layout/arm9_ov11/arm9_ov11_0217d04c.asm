0217d04c  stmdb sp!,{r3,lr}
0217d050  ldr r0,[r0,#0x34]
0217d054  cmp r0,#0x0
0217d058  ldmiaeq sp!,{r3,pc}
0217d05c  ldr r0,[r0,#0x4]
0217d060  bl 0x020282f4
0217d064  ldmia sp!,{r3,pc}
