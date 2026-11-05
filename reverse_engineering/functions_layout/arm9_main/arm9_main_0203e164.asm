0203e164  stmdb sp!,{r3,lr}
0203e168  ldr r2,[r1,#0x0]
0203e16c  mov r2,r2, lsr #0xc
0203e170  str r2,[r0,#0x96c]
0203e174  ldr r0,[r0,#0x8c4]
0203e178  cmp r0,#0x3
0203e17c  addls pc,pc,r0, lsl #0x2
0203e180  ldmia sp!,{r3,pc}
0203e184  b 0x0203e194
0203e188  b 0x0203e1ac
0203e18c  b 0x0203e1c4
0203e190  b 0x0203e1dc
0203e194  ldr r1,[r1,#0x0]
0203e198  mov r0,r1, asr #0xb
0203e19c  add r0,r1,r0, lsr #0x14
0203e1a0  mov r0,r0, asr #0xc
0203e1a4  bl 0x0203e1f4
0203e1a8  ldmia sp!,{r3,pc}
0203e1ac  ldr r1,[r1,#0x0]
0203e1b0  mov r0,r1, asr #0xb
0203e1b4  add r0,r1,r0, lsr #0x14
0203e1b8  mov r0,r0, asr #0xc
0203e1bc  bl 0x0203e210
0203e1c0  ldmia sp!,{r3,pc}
0203e1c4  ldr r1,[r1,#0x0]
0203e1c8  mov r0,r1, asr #0xb
0203e1cc  add r0,r1,r0, lsr #0x14
0203e1d0  mov r0,r0, asr #0xc
0203e1d4  bl 0x0203e22c
0203e1d8  ldmia sp!,{r3,pc}
0203e1dc  ldr r1,[r1,#0x0]
0203e1e0  mov r0,r1, asr #0xb
0203e1e4  add r0,r1,r0, lsr #0x14
0203e1e8  mov r0,r0, asr #0xc
0203e1ec  bl 0x0203e248
0203e1f0  ldmia sp!,{r3,pc}
