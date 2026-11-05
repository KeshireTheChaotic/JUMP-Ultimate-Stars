02174008  stmdb sp!,{r3,lr}
0217400c  ldr r0,[r0,#0x4]
02174010  ldr r1,[r0,#0x0]
02174014  ldr r1,[r1,#0x8]
02174018  blx r1
0217401c  ldmia sp!,{r3,pc}
