02150004  stmdb sp!,{r3,lr}
02150008  ldr r0,[r0,#0x4]
0215000c  ldr r2,[r0,#0x0]
02150010  ldr r2,[r2,#0x24]
02150014  blx r2
02150018  ldmia sp!,{r3,pc}
