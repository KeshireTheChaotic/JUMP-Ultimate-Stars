021a1dc4  stmdb sp!,{r4,lr}
021a1dc8  mov r4,r0
021a1dcc  bl 0x021a1f04
021a1dd0  cmp r0,#0x0
021a1dd4  ldrne r0,[r4,#0x38]
021a1dd8  moveq r0,#0x0
021a1ddc  ldmia sp!,{r4,pc}
