0205bce8  stmdb sp!,{r4,lr}
0205bcec  ldr r3,[r0,#0x48]
0205bcf0  mov r4,r1
0205bcf4  sub r1,r3,#0x1
0205bcf8  cmp r4,r1
0205bcfc  ldmiagt sp!,{r4,pc}
0205bd00  add r1,r0,r4
0205bd04  ldrb r4,[r1,#0x4c]
0205bd08  ldr r3,[0x205bd3c]
0205bd0c  str r2,[r3,r4,lsl #0x3]
0205bd10  ldr r1,[r0,#0x3c]
0205bd14  ldr r0,[r3,r4,lsl #0x3]
0205bd18  add r0,r1,r0
0205bd1c  bl 0x02057530
0205bd20  mov r2,r0
0205bd24  mov r0,#0x1
0205bd28  mov r0,r0, lsl r4
0205bd2c  and r1,r2,#0xff
0205bd30  mov r2,r2, asr #0x8
0205bd34  bl 0x020567e8
0205bd38  ldmia sp!,{r4,pc}
