020876ac  stmdb sp!,{r3,lr}
020876b0  bl 0x0208c51c
020876b4  cmp r0,#0x0
020876b8  beq 0x020876c4
020876bc  bl 0x0219b620
020876c0  ldmia sp!,{r3,pc}
020876c4  blx 0x0208c11c
020876c8  ldmia sp!,{r3,pc}
