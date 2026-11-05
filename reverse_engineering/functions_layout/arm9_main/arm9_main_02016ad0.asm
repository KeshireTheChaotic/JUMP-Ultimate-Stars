02016ad0  stmdb sp!,{r4,lr}
02016ad4  ldr r1,[r0,#0x0]
02016ad8  mov r4,r0
02016adc  ldr r1,[r1,#0x18]
02016ae0  blx r1
02016ae4  ldrh r2,[r4,#0x8]
02016ae8  ldrh r1,[r4,#0xa]
02016aec  mul r1,r2,r1
02016af0  mul r0,r1,r0
02016af4  mov r0,r0, lsr #0x3
02016af8  ldmia sp!,{r4,pc}
