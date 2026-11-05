02036220  stmdb sp!,{r3,lr}
02036224  str r1,[r0,#0x3c]
02036228  mov r0,r1
0203622c  ldr r1,[r0,#0x0]
02036230  ldr r1,[r1,#0x8]
02036234  blx r1
02036238  ldmia sp!,{r3,pc}
