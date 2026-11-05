021552bc  stmdb sp!,{r3,lr}
021552c0  mov r1,r1, lsl #0xc
021552c4  str r1,[sp,#0x0]
021552c8  ldr r0,[r0,#0x4]
021552cc  add r1,sp,#0x0
021552d0  ldr r2,[r0,#0x0]
021552d4  ldr r2,[r2,#0x10]
021552d8  blx r2
021552dc  ldmia sp!,{r3,pc}
