0205babc  stmdb sp!,{r4,r5,r6,lr}
0205bac0  mov r4,r0
0205bac4  ldr r0,[r4,#0x24]
0205bac8  mov r0,r0, lsl #0x1e
0205bacc  movs r0,r0, asr #0x1f
0205bad0  ldmiaeq sp!,{r4,r5,r6,pc}
0205bad4  ldr r0,[r4,#0x38]
0205bad8  cmp r0,#0x0
0205badc  beq 0x0205bb0c
0205bae0  mov r5,#0x1
0205bae4  bl 0x02055238
0205bae8  mov r6,r0
0205baec  mov r0,r4
0205baf0  mov r1,r5
0205baf4  bl 0x0205bb78
0205baf8  mov r0,r6
0205bafc  bl 0x0205524c
0205bb00  ldr r0,[r4,#0x38]
0205bb04  cmp r0,#0x0
0205bb08  bne 0x0205bae4
0205bb0c  ldr r0,[r4,#0x40]
0205bb10  mov r2,#0x1
0205bb14  mov r1,#0x0
0205bb18  mov r2,r2, lsl r0
0205bb1c  ldr r0,[r4,#0x44]
0205bb20  mov r3,r1
0205bb24  bl 0x02056954
0205bb28  ldmia sp!,{r4,r5,r6,pc}
