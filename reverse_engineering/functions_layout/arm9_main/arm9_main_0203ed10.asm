0203ed10  stmdb sp!,{r3,lr}
0203ed14  ldr r2,[r1,#0x0]
0203ed18  mov r2,r2, lsr #0xc
0203ed1c  str r2,[r0,#0x96c]
0203ed20  ldr r0,[r0,#0x8c4]
0203ed24  cmp r0,#0x3
0203ed28  addls pc,pc,r0, lsl #0x2
0203ed2c  ldmia sp!,{r3,pc}
0203ed30  b 0x0203ed40
0203ed34  b 0x0203ed58
0203ed38  b 0x0203ed70
0203ed3c  b 0x0203ed88
0203ed40  ldr r1,[r1,#0x0]
0203ed44  mov r0,r1, asr #0xb
0203ed48  add r0,r1,r0, lsr #0x14
0203ed4c  mov r0,r0, asr #0xc
0203ed50  bl 0x0203eda0
0203ed54  ldmia sp!,{r3,pc}
0203ed58  ldr r1,[r1,#0x0]
0203ed5c  mov r0,r1, asr #0xb
0203ed60  add r0,r1,r0, lsr #0x14
0203ed64  mov r0,r0, asr #0xc
0203ed68  bl 0x0203edbc
0203ed6c  ldmia sp!,{r3,pc}
0203ed70  ldr r1,[r1,#0x0]
0203ed74  mov r0,r1, asr #0xb
0203ed78  add r0,r1,r0, lsr #0x14
0203ed7c  mov r0,r0, asr #0xc
0203ed80  bl 0x0203edd8
0203ed84  ldmia sp!,{r3,pc}
0203ed88  ldr r1,[r1,#0x0]
0203ed8c  mov r0,r1, asr #0xb
0203ed90  add r0,r1,r0, lsr #0x14
0203ed94  mov r0,r0, asr #0xc
0203ed98  bl 0x0203edf4
0203ed9c  ldmia sp!,{r3,pc}
