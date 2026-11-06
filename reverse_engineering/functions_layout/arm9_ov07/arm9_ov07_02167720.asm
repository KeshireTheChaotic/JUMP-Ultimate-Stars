02167720  stmdb sp!,{r3,r4,r5,lr}
02167724  sub sp,sp,#0x10
02167728  mov r5,r1
0216772c  cmp r0,#0x11
02167730  mov r4,#0x0
02167734  addls pc,pc,r0, lsl #0x2
02167738  b 0x02167a3c
02167a3c  mov r0,r4
02167a40  add sp,sp,#0x10
02167a44  ldmia sp!,{r3,r4,r5,pc}
