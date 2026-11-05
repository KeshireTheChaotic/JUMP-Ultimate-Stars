02018f50  stmdb sp!,{r4,lr}
02018f54  mov r4,r0
02018f58  ldr r0,[0x2018f70]
02018f5c  bl 0x0200c9e4
02018f60  bl 0x0200c8e0
02018f64  str r0,[r4,#0x0]
02018f68  mov r0,r4
02018f6c  ldmia sp!,{r4,pc}
