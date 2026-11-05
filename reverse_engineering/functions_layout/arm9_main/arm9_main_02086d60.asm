02086d60  stmdb sp!,{r3,lr}
02086d64  bl 0x0208c51c
02086d68  cmp r0,#0x0
02086d6c  beq 0x02086d78
02086d70  bl 0x0219b4bc
02086d74  ldmia sp!,{r3,pc}
02086d78  blx 0x0208bce4
02086d7c  ldmia sp!,{r3,pc}
