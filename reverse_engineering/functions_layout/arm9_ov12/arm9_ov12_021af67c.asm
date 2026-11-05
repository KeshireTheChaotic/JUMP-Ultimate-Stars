021af67c  stmdb sp!,{r3,lr}
021af680  ldr r0,[r0,#0x4]
021af684  ldr r1,[r0,#0x0]
021af688  ldr r1,[r1,#0x8]
021af68c  blx r1
021af690  ldmia sp!,{r3,pc}
