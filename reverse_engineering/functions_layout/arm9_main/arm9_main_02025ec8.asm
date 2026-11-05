02025ec8  stmdb sp!,{r3,lr}
02025ecc  ldr r3,[r0,#0x38]
02025ed0  mov r0,r1
02025ed4  mov r1,r2
02025ed8  blx r3
02025edc  ldmia sp!,{r3,pc}
