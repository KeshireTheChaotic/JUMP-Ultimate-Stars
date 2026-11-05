021a2d98  stmdb sp!,{r4,r5,r6,lr}
021a2d9c  mov r5,r1
021a2da0  mov r6,r0
021a2da4  bl 0x0219b614
021a2da8  cmp r5,r0
021a2dac  ldmiaeq sp!,{r4,r5,r6,pc}
021a2db0  mov r0,r5
021a2db4  blx 0x02176654
021a2db8  cmp r0,#0x0
021a2dbc  ldmiaeq sp!,{r4,r5,r6,pc}
021a2dc0  ldrb r0,[r6,#0x30]
021a2dc4  mov r4,#0x1
021a2dc8  tst r0,r4, lsl r5
021a2dcc  ldmiaeq sp!,{r4,r5,r6,pc}
021a2dd0  ldrb r0,[r6,#0x31]
021a2dd4  tst r0,r4, lsl r5
021a2dd8  ldmiane sp!,{r4,r5,r6,pc}
021a2ddc  mov r0,r5
021a2de0  blx 0x0217ef04
021a2de4  cmp r0,#0x0
021a2de8  ldmiaeq sp!,{r4,r5,r6,pc}
021a2dec  ldr r1,[0x21a2e10]
021a2df0  mov r0,r5
021a2df4  mov r2,#0x4
021a2df8  blx 0x0217ee90
021a2dfc  cmp r0,#0x0
021a2e00  ldrbne r0,[r6,#0x31]
021a2e04  orrne r0,r0,r4, lsl r5
021a2e08  strbne r0,[r6,#0x31]
021a2e0c  ldmia sp!,{r4,r5,r6,pc}
