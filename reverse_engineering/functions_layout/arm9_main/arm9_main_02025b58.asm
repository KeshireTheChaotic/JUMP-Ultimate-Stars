02025b58  stmdb sp!,{r4,lr}
02025b5c  mov r4,r0
02025b60  bl 0x02020e20
02025b64  ldr r1,[0x2025b74]
02025b68  mov r0,r4
02025b6c  str r1,[r4,#0x0]
02025b70  ldmia sp!,{r4,pc}
