021530e4  stmdb sp!,{r3,lr}
021530e8  ldr r0,[0x2153104]
021530ec  ldr r0,[r0,#0x8]
021530f0  cmp r0,#0x0
021530f4  ldmiaeq sp!,{r3,pc}
021530f8  ldr r0,[r0,#0x4]
021530fc  bl 0x02031520
02153100  ldmia sp!,{r3,pc}
