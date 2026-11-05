021a1f98  stmdb sp!,{r4,lr}
021a1f9c  mov r4,r0
021a1fa0  bl 0x021a1f04
021a1fa4  cmp r0,#0x0
021a1fa8  beq 0x021a1fc0
021a1fac  ldrb r0,[r4,#0x35]
021a1fb0  mov r0,r0, lsl #0x1d
021a1fb4  movs r0,r0, lsr #0x1f
021a1fb8  movne r0,#0x1
021a1fbc  ldmiane sp!,{r4,pc}
021a1fc0  mov r0,#0x0
021a1fc4  ldmia sp!,{r4,pc}
