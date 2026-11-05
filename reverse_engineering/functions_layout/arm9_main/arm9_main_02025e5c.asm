02025e5c  stmdb sp!,{r3,lr}
02025e60  ldr r3,[r0,#0x18]
02025e64  mov r0,r1
02025e68  mov r1,r2
02025e6c  blx r3
02025e70  ldmia sp!,{r3,pc}
