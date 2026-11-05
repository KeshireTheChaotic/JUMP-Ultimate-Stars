02056cb0  stmdb sp!,{r4,lr}
02056cb4  bl 0x02056d10
02056cb8  mov r4,r0
02056cbc  bl 0x02056cd0
02056cc0  rsb r1,r4,#0x100
02056cc4  sub r0,r1,r0
02056cc8  ldmia sp!,{r4,lr}
02056ccc  bx lr
