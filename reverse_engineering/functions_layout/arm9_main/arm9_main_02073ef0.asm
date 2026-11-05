02073ef0  stmdb sp!,{r3,lr}
02073ef4  ldr r2,[0x2073f1c]
02073ef8  mov r3,r0
02073efc  ldr r12,[r2,r3,lsl #0x2]
02073f00  mov r2,r1
02073f04  ldr r0,[0x2073f20]
02073f08  mov r1,r3
02073f0c  mov r3,#0x3f
02073f10  str r12,[sp,#0x0]
02073f14  bl 0x02073e90
02073f18  ldmia sp!,{r3,pc}
