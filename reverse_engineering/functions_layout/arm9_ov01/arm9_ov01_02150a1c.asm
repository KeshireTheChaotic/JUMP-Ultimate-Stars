02150a1c  stmdb sp!,{r4,lr}
02150a20  mov r2,#0x0
02150a24  mov r4,r0
02150a28  bl 0x02014604
02150a2c  ldr r1,[0x2150a3c]
02150a30  mov r0,r4
02150a34  str r1,[r4,#0x0]
02150a38  ldmia sp!,{r4,pc}
