02161e50  stmdb sp!,{r3,lr}
02161e54  bl 0x02160064
02161e58  cmp r0,#0x0
02161e5c  moveq r0,#0x1
02161e60  movne r0,#0x0
02161e64  ldmia sp!,{r3,pc}
