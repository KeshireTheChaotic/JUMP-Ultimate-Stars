02086da0  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02086da4  bl 0x0208c51c
02086da8  cmp r0,#0x0
02086dac  beq 0x02086df0
02086db0  bl 0x0219b4b0
02086db4  mov r7,#0x0
02086db8  mov r4,#0x1
02086dbc  mov r6,r0
02086dc0  mov r8,r7
02086dc4  mov r5,r4
02086dc8  tst r6,r5, lsl r8
02086dcc  beq 0x02086ddc
02086dd0  mov r0,r8
02086dd4  bl 0x020876cc
02086dd8  orr r7,r7,r4, lsl r0
02086ddc  add r8,r8,#0x1
02086de0  cmp r8,#0x4
02086de4  blt 0x02086dc8
02086de8  mov r0,r7
02086dec  ldmia sp!,{r4,r5,r6,r7,r8,pc}
02086df0  blx 0x0208bd0c
02086df4  mov r1,#0x1
02086df8  mov r0,r1, lsl r0
02086dfc  sub r0,r0,#0x1
02086e00  ldmia sp!,{r4,r5,r6,r7,r8,pc}
