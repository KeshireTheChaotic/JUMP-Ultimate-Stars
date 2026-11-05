0203d658  stmdb sp!,{r4,r5,r6,lr}
0203d65c  mov r6,r0
0203d660  ldr r0,[r6,#0x918]
0203d664  mov r5,r1
0203d668  mov r4,r2
0203d66c  bl 0x0203d6d0
0203d670  cmp r0,#0x0
0203d674  bne 0x0203d68c
0203d678  ldr r0,[r6,#0x91c]
0203d67c  mov r1,r4
0203d680  bl 0x0203d6d0
0203d684  cmp r0,#0x0
0203d688  ldmiaeq sp!,{r4,r5,r6,pc}
0203d68c  ldr r2,[r5,#0x0]
0203d690  mov r1,#0x1
0203d694  mov r0,r2, asr #0xb
0203d698  add r0,r2,r0, lsr #0x14
0203d69c  mov r0,r0, asr #0xc
0203d6a0  str r0,[r6,#0x918]
0203d6a4  ldr r2,[r4,#0x0]
0203d6a8  mov r0,r2, asr #0xb
0203d6ac  add r0,r2,r0, lsr #0x14
0203d6b0  mov r0,r0, asr #0xc
0203d6b4  str r0,[r6,#0x91c]
0203d6b8  ldr r0,[r5,#0x0]
0203d6bc  str r0,[r6,#0x928]
0203d6c0  ldr r0,[r4,#0x0]
0203d6c4  str r0,[r6,#0x92c]
0203d6c8  strb r1,[r6,#0x98c]
0203d6cc  ldmia sp!,{r4,r5,r6,pc}
