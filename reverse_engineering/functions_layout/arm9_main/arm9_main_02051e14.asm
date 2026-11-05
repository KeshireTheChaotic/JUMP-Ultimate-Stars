02051e14  stmdb sp!,{r4,r5,r6,lr}
02051e18  mov r3,#0xc
02051e1c  mul r6,r0,r3
02051e20  ldr r12,[0x2051e54]
02051e24  add r4,r0,#0x8
02051e28  mov r5,#0x1
02051e2c  mov r0,r5, lsl r4
02051e30  ldr r3,[0x2051e58]
02051e34  str r1,[r12,r6]
02051e38  str r2,[r3,r6]
02051e3c  bl 0x02051d5c
02051e40  and r1,r0,r5, lsl r4
02051e44  ldr r0,[0x2051e5c]
02051e48  str r1,[r0,r6]
02051e4c  ldmia sp!,{r4,r5,r6,lr}
02051e50  bx lr
