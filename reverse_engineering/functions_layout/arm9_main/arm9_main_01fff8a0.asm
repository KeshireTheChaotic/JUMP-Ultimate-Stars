01fff8a0  stmdb sp!,{r0,lr}
01fff8a4  ldr r0,[r2],#0x4
01fff8a8  ldr lr,[r2],#0x4
01fff8ac  add r5,r5,r0
01fff8b0  add r6,r6,lr
01fff8b4  ldr r0,[r2],#0x4
01fff8b8  ldr lr,[r2],#0x4
01fff8bc  add r7,r7,r0
01fff8c0  add r8,r8,lr
01fff8c4  ldr r0,[r2],#0x4
01fff8c8  ldr lr,[r2],#0x4
01fff8cc  add r9,r9,r0
01fff8d0  add r10,r10,lr
01fff8d4  ldr r0,[r2],#0x4
01fff8d8  ldr lr,[r2],#0x4
01fff8dc  add r11,r11,r0
01fff8e0  add r12,r12,lr
01fff8e4  mov r5,r5, asr #0x1
01fff8e8  mov r6,r6, asr #0x1
01fff8ec  mov r7,r7, asr #0x1
01fff8f0  mov r8,r8, asr #0x1
01fff8f4  mov r9,r9, asr #0x1
01fff8f8  mov r10,r10, asr #0x1
01fff8fc  mov r11,r11, asr #0x1
01fff900  mov r12,r12, asr #0x1
01fff904  ldmia sp!,{r0,pc}
