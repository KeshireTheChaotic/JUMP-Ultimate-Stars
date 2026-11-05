02167d54  stmdb sp!,{r3,lr}
02167d58  blx 0x0217ec74
02167d5c  cmp r0,#0x0
02167d60  movne r0,#0x1
02167d64  moveq r0,#0x0
02167d68  ldmia sp!,{r3,pc}
