02070cf0  stmdb sp!,{r3,lr}
02070cf4  ldr r3,[0x2070d10]
02070cf8  mov r12,r0
02070cfc  mov r2,#0x4c
02070d00  mov r0,r1
02070d04  mla r1,r12,r2,r3
02070d08  bl 0x02051890
02070d0c  ldmia sp!,{r3,pc}
