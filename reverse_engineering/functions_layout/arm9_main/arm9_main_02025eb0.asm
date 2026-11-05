02025eb0  stmdb sp!,{r3,lr}
02025eb4  ldr r3,[r0,#0x2c]
02025eb8  mov r0,r1
02025ebc  mov r1,r2
02025ec0  blx r3
02025ec4  ldmia sp!,{r3,pc}
