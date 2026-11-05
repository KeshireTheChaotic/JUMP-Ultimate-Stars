021a1f68  stmdb sp!,{r4,lr}
021a1f6c  mov r4,r0
021a1f70  bl 0x021a1f04
021a1f74  cmp r0,#0x0
021a1f78  beq 0x021a1f90
021a1f7c  ldrb r0,[r4,#0x35]
021a1f80  mov r0,r0, lsl #0x1e
021a1f84  movs r0,r0, lsr #0x1f
021a1f88  movne r0,#0x1
021a1f8c  ldmiane sp!,{r4,pc}
021a1f90  mov r0,#0x0
021a1f94  ldmia sp!,{r4,pc}
