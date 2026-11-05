02073f64  stmdb sp!,{r3,r4,lr}
02073f68  sub sp,sp,#0x4
02073f6c  ldr r3,[0x2073f9c]
02073f70  mov r4,r0
02073f74  mov lr,r1
02073f78  ldr r12,[r3,r4,lsl #0x2]
02073f7c  mov r3,r2
02073f80  ldr r0,[0x2073fa0]
02073f84  mov r1,r4
02073f88  mov r2,lr
02073f8c  str r12,[sp,#0x0]
02073f90  bl 0x02073e90
02073f94  add sp,sp,#0x4
02073f98  ldmia sp!,{r3,r4,pc}
