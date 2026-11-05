021a1de8  stmdb sp!,{r4,lr}
021a1dec  mov r4,r0
021a1df0  bl 0x021a1f04
021a1df4  cmp r0,#0x0
021a1df8  ldrbne r0,[r4,#0x36]
021a1dfc  moveq r0,#0x0
021a1e00  ldmia sp!,{r4,pc}
