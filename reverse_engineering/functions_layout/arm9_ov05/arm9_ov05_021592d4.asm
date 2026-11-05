021592d4  stmdb sp!,{r3,lr}
021592d8  ldr r0,[r0,#0x4]
021592dc  ldr r0,[r0,#0x10]
021592e0  ldr r1,[r0,#0x4b4]
021592e4  blx r1
021592e8  bl 0x02073840
021592ec  ldmia sp!,{r3,pc}
