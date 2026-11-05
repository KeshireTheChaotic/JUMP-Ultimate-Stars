02012300  stmdb sp!,{r3,lr}
02012304  ldr r0,[r0,#0x4]
02012308  ldr r1,[r0,#0x0]
0201230c  ldr r1,[r1,#0x74]
02012310  blx r1
02012314  ldmia sp!,{r3,pc}
