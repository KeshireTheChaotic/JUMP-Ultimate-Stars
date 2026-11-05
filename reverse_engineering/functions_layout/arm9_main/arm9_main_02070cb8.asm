02070cb8  stmdb sp!,{r3,lr}
02070cbc  ldr r3,[0x2070cd8]
02070cc0  mov r12,r0
02070cc4  mov r2,#0x5c
02070cc8  mov r0,r1
02070ccc  mla r1,r12,r2,r3
02070cd0  bl 0x02051890
02070cd4  ldmia sp!,{r3,pc}
