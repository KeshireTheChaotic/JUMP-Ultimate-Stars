02157ed0  stmdb sp!,{r3,lr}
02157ed4  cmp r0,#0x0
02157ed8  ldrsbne r2,[r0,#0x1]
02157edc  cmpne r2,#0x0
02157ee0  ldmiaeq sp!,{r3,pc}
02157ee4  ldr r0,[r0,#0x4]
02157ee8  bl 0x021502d4
02157eec  ldmia sp!,{r3,pc}
