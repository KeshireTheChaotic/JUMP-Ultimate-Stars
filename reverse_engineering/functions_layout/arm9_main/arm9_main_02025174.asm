02025174  stmdb sp!,{r4,lr}
02025178  ldr r4,[r0,#0x64]
0202517c  ldr r3,[r4,#0x34]
02025180  add r0,r4,#0x14
02025184  bl 0x02019bec
02025188  mov r0,#0x0
0202518c  str r0,[r4,#0x3c]
02025190  ldmia sp!,{r4,pc}
