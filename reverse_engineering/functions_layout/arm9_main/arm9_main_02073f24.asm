02073f24  stmdb sp!,{r3,r4,lr}
02073f28  sub sp,sp,#0x4
02073f2c  ldr r3,[0x2073f5c]
02073f30  mov r4,r0
02073f34  mov lr,r1
02073f38  ldr r12,[r3,r4,lsl #0x2]
02073f3c  mov r3,r2
02073f40  ldr r0,[0x2073f60]
02073f44  mov r1,r4
02073f48  mov r2,lr
02073f4c  str r12,[sp,#0x0]
02073f50  bl 0x02073e90
02073f54  add sp,sp,#0x4
02073f58  ldmia sp!,{r3,r4,pc}
