01fff208  stmdb sp!,{r1,r3,r4}
01fff20c  add r3,r3,#0x200
01fff210  rsb r12,r6,#0x7f
01fff214  add r4,r4,r12, lsl #0x2
01fff218  ldr r2,[r4],#0x4
01fff21c  mov r1,#0x2
01fff220  mov r2,r2, asr #0x4
01fff224  str r2,[r3],#0x4
01fff228  ldr r2,[r4],#0x4
01fff22c  ldr r7,[r4],#0x4
01fff230  ldr r8,[r4],#0x4
01fff234  ldr r9,[r4],#0x4
01fff238  ldr r10,[r4],#0x4
01fff23c  ldr r11,[r4],#0x4
01fff240  mul r12,r2,r1
01fff244  add r1,r1,#0x1
01fff248  mov r12,r12, asr #0x4
01fff24c  str r12,[r3],#0x4
01fff250  mul r12,r7,r1
01fff254  add r1,r1,#0x1
01fff258  mov r12,r12, asr #0x4
01fff25c  str r12,[r3],#0x4
01fff260  mul r12,r8,r1
01fff264  add r1,r1,#0x1
01fff268  mov r12,r12, asr #0x4
01fff26c  str r12,[r3],#0x4
01fff270  mul r12,r9,r1
01fff274  add r1,r1,#0x1
01fff278  mov r12,r12, asr #0x4
01fff27c  str r12,[r3],#0x4
01fff280  mul r12,r10,r1
01fff284  add r1,r1,#0x1
01fff288  mov r12,r12, asr #0x4
01fff28c  str r12,[r3],#0x4
01fff290  mul r12,r11,r1
01fff294  mov r12,r12, asr #0x4
01fff298  str r12,[r3],#0x4
01fff29c  mov r12,#0x72
01fff2a0  ldmia r4!,{r6,r7,r8,r9,r10,r11}
01fff2a4  mov r6,r6, asr #0x1
01fff2a8  mov r7,r7, asr #0x1
01fff2ac  mov r8,r8, asr #0x1
01fff2b0  mov r9,r9, asr #0x1
01fff2b4  mov r10,r10, asr #0x1
01fff2b8  mov r11,r11, asr #0x1
01fff2bc  stmia r3!,{r6,r7,r8,r9,r10,r11}
01fff2c0  subs r12,r12,#0x6
01fff2c4  bne 0x01fff2a0
01fff2c8  ldr r2,[r4],#0x4
01fff2cc  ldr r7,[r4],#0x4
01fff2d0  ldr r8,[r4],#0x4
01fff2d4  ldr r9,[r4],#0x4
01fff2d8  ldr r10,[r4],#0x4
01fff2dc  ldr r11,[r4],#0x4
01fff2e0  mul r12,r2,r1
01fff2e4  sub r1,r1,#0x1
01fff2e8  mov r12,r12, asr #0x4
01fff2ec  str r12,[r3],#0x4
01fff2f0  mul r12,r7,r1
01fff2f4  sub r1,r1,#0x1
01fff2f8  mov r12,r12, asr #0x4
01fff2fc  str r12,[r3],#0x4
01fff300  mul r12,r8,r1
01fff304  sub r1,r1,#0x1
01fff308  mov r12,r12, asr #0x4
01fff30c  str r12,[r3],#0x4
01fff310  mul r12,r9,r1
01fff314  sub r1,r1,#0x1
01fff318  mov r12,r12, asr #0x4
01fff31c  str r12,[r3],#0x4
01fff320  mul r12,r10,r1
01fff324  sub r1,r1,#0x1
01fff328  mov r12,r12, asr #0x4
01fff32c  str r12,[r3],#0x4
01fff330  mul r12,r11,r1
01fff334  ldr r2,[r4],#0x4
01fff338  mov r12,r12, asr #0x4
01fff33c  str r12,[r3],#0x4
01fff340  mov r2,r2, asr #0x4
01fff344  str r2,[r3],#0x4
01fff348  ldmia sp!,{r1,r3,r4}
01fff34c  mov pc,lr
