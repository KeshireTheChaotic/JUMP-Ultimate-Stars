0201e44c  stmdb sp!,{r3,r4,r5,lr}
0201e450  mov r4,r3
0201e454  mov r5,r1
0201e458  bl 0x0201e1e4
0201e45c  ldr r0,[r4,#0x0]
0201e460  str r0,[r5,#0x58]
0201e464  ldmia sp!,{r3,r4,r5,pc}
