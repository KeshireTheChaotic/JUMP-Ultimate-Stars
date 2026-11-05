02018150  stmdb sp!,{r4,lr}
02018154  mul r2,r1,r2
02018158  mov r4,r0
0201815c  mov r0,r2, lsr #0x3
02018160  bl 0x0201a228
02018164  str r0,[r4,#0xc]
02018168  mov r0,#0x1
0201816c  strb r0,[r4,#0x10]
02018170  ldmia sp!,{r4,pc}
