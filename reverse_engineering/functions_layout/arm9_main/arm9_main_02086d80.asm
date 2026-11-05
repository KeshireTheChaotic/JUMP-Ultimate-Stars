02086d80  stmdb sp!,{r3,lr}
02086d84  bl 0x0208c51c
02086d88  cmp r0,#0x0
02086d8c  beq 0x02086d98
02086d90  bl 0x0219b4bc
02086d94  ldmia sp!,{r3,pc}
02086d98  blx 0x0208bd0c
02086d9c  ldmia sp!,{r3,pc}
