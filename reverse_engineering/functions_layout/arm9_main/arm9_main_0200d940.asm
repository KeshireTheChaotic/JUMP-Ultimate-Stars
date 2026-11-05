0200d940  stmdb sp!,{r4,lr}
0200d944  ldrsb r2,[r0,#0x0]
0200d948  tst r2,#0x1
0200d94c  bne 0x0200d960
0200d950  mov r2,r2, asr #0x1
0200d954  str r2,[r1,#0x0]
0200d958  add r0,r0,#0x1
0200d95c  ldmia sp!,{r4,pc}
0200d960  tst r2,#0x2
0200d964  ldrb r4,[r0,#0x1]
0200d968  bne 0x0200d980
0200d96c  mov r2,r2, asr #0x2
0200d970  orr r2,r4,r2, lsl #0x8
0200d974  str r2,[r1,#0x0]
0200d978  add r0,r0,#0x2
0200d97c  ldmia sp!,{r4,pc}
0200d980  tst r2,#0x4
0200d984  ldrb lr,[r0,#0x2]
0200d988  bne 0x0200d9a8
0200d98c  mov r3,r2, asr #0x3
0200d990  mov r2,r4, lsl #0x8
0200d994  orr r2,r2,r3, lsl #0x10
0200d998  orr r2,lr,r2
0200d99c  str r2,[r1,#0x0]
0200d9a0  add r0,r0,#0x3
0200d9a4  ldmia sp!,{r4,pc}
0200d9a8  ldrb r12,[r0,#0x3]
0200d9ac  mov r3,r2, asr #0x3
0200d9b0  mov r2,r4, lsl #0x10
0200d9b4  orr r2,r2,r3, lsl #0x18
0200d9b8  orr r2,r2,lr, lsl #0x8
0200d9bc  orr r2,r12,r2
0200d9c0  str r2,[r1,#0x0]
0200d9c4  add r0,r0,#0x4
0200d9c8  ldmia sp!,{r4,pc}
