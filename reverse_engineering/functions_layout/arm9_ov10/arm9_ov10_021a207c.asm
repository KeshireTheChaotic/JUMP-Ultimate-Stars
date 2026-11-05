021a207c  stmdb sp!,{r4,lr}
021a2080  mov r4,r0
021a2084  bl 0x021a1f04
021a2088  cmp r0,#0x0
021a208c  beq 0x021a20a4
021a2090  ldrb r0,[r4,#0x35]
021a2094  mov r0,r0, lsl #0x1f
021a2098  movs r0,r0, lsr #0x1f
021a209c  movne r0,#0x1
021a20a0  ldmiane sp!,{r4,pc}
021a20a4  mov r0,#0x0
021a20a8  ldmia sp!,{r4,pc}
