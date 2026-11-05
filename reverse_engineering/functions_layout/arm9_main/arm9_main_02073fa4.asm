02073fa4  stmdb sp!,{r3,r4,lr}
02073fa8  sub sp,sp,#0x4
02073fac  ldr r3,[0x2073fdc]
02073fb0  mov r4,r0
02073fb4  mov lr,r1
02073fb8  ldr r12,[r3,r4,lsl #0x2]
02073fbc  mov r3,r2
02073fc0  ldr r0,[0x2073fe0]
02073fc4  mov r1,r4
02073fc8  mov r2,lr
02073fcc  str r12,[sp,#0x0]
02073fd0  bl 0x02073e90
02073fd4  add sp,sp,#0x4
02073fd8  ldmia sp!,{r3,r4,pc}
