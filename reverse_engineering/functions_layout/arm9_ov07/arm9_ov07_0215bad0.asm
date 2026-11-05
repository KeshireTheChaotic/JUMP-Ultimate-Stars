0215bad0  stmdb sp!,{r3,lr}
0215bad4  ldr r0,[r0,#0x4]
0215bad8  ldr r0,[r0,#0x94]
0215badc  cmp r0,#0x0
0215bae0  moveq r0,#0x0
0215bae4  ldmiaeq sp!,{r3,pc}
0215bae8  bl 0x0214f340
0215baec  ldmia sp!,{r3,pc}
