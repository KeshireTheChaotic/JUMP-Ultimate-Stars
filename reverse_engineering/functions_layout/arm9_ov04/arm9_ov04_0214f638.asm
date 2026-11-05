0214f638  stmdb sp!,{r4,lr}
0214f63c  ldr r0,[0x214f658]
0214f640  ldr r0,[r0,#0x0]
0214f644  ldr r4,[r0,#0x40]
0214f648  bl 0x0214f608
0214f64c  mov r1,#0x28
0214f650  smlabb r0,r0,r1,r4
0214f654  ldmia sp!,{r4,pc}
