0202525c  stmdb sp!,{r3,lr}
02025260  mov r0,r1
02025264  ldr r3,[r0,#0x0]
02025268  ldrh r1,[r2,#0x0]
0202526c  ldr r3,[r3,#0xdc]
02025270  blx r3
02025274  ldmia sp!,{r3,pc}
