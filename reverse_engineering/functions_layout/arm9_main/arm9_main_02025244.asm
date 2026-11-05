02025244  stmdb sp!,{r4,lr}
02025248  mov r0,r1
0202524c  mov r4,r2
02025250  bl 0x0201bf90
02025254  strh r0,[r4,#0x0]
02025258  ldmia sp!,{r4,pc}
