02018f74  stmdb sp!,{r4,lr}
02018f78  mov r4,r0
02018f7c  mov r0,r1, lsl #0x1
02018f80  bl 0x0200c954
02018f84  mov r1,r0
02018f88  ldr r0,[0x2018fb0]
02018f8c  bl 0x0200c9e4
02018f90  ldr r1,[0x2018fb4]
02018f94  bl 0x0200c5ac
02018f98  mov r1,r0
02018f9c  ldr r0,[0x2018fb8]
02018fa0  bl 0x0200c9e4
02018fa4  bl 0x0200c8e0
02018fa8  str r0,[r4,#0x0]
02018fac  ldmia sp!,{r4,pc}
