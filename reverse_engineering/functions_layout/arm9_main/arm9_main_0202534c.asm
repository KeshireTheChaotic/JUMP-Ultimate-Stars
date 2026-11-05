0202534c  stmdb sp!,{r3,lr}
02025350  sub sp,sp,#0x8
02025354  mov r2,#0xff000
02025358  str r2,[sp,#0x0]
0202535c  ldrh r3,[r1,#0x12]
02025360  add r1,sp,#0x4
02025364  add r2,sp,#0x0
02025368  mov r3,r3, lsl #0xc
0202536c  str r3,[sp,#0x4]
02025370  bl 0x0202537c
02025374  add sp,sp,#0x8
02025378  ldmia sp!,{r3,pc}
