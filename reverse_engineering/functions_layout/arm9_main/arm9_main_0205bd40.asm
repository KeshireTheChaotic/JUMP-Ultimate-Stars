0205bd40  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0205bd44  mov r7,r0
0205bd48  str r1,[r7,#0x3c]
0205bd4c  ldr r0,[r7,#0x48]
0205bd50  mov r5,#0x0
0205bd54  cmp r0,#0x0
0205bd58  ldmiale sp!,{r4,r5,r6,r7,r8,pc}
0205bd5c  ldr r4,[0x205bda8]
0205bd60  mov r8,#0x1
0205bd64  add r0,r7,r5
0205bd68  ldrb r6,[r0,#0x4c]
0205bd6c  ldr r1,[r7,#0x3c]
0205bd70  add r0,r4,r6, lsl #0x3
0205bd74  ldr r0,[r0,#0x4]
0205bd78  add r0,r1,r0
0205bd7c  bl 0x02057530
0205bd80  mov r2,r0
0205bd84  mov r0,r8, lsl r6
0205bd88  and r1,r2,#0xff
0205bd8c  mov r2,r2, asr #0x8
0205bd90  bl 0x020567e8
0205bd94  ldr r0,[r7,#0x48]
0205bd98  add r5,r5,#0x1
0205bd9c  cmp r5,r0
0205bda0  blt 0x0205bd64
0205bda4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
