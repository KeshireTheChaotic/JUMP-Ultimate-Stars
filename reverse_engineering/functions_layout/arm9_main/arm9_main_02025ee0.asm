02025ee0  stmdb sp!,{r3,lr}
02025ee4  ldr r3,[r0,#0x3c]
02025ee8  mov r0,r1
02025eec  mov r1,r2
02025ef0  blx r3
02025ef4  ldmia sp!,{r3,pc}
