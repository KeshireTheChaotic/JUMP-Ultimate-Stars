02158440  stmdb sp!,{r3,lr}
02158444  cmp r0,#0x0
02158448  ldmiaeq sp!,{r3,pc}
0215844c  add r0,r0,r1, lsl #0x2
02158450  ldr r0,[r0,#0x4]
02158454  bl 0x0215812c
02158458  ldmia sp!,{r3,pc}
