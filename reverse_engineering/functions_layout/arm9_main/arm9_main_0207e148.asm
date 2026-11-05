0207e148  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0207e14c  sub sp,sp,#0x1c
0207e150  mov r6,r3
0207e154  mov r3,r2, asr #0x8
0207e158  str r3,[sp,#0x0]
0207e15c  mov r10,r1, asr #0x8
0207e160  ldr r9,[r0,#0x98]
0207e164  mvn r5,#0x80000000
0207e168  mov r4,#0x0
0207e16c  b 0x0207e20c
0207e170  ldr r3,[r9,#0x8]
0207e174  str r3,[sp,#0x4]
0207e178  ldr r3,[r3,#0x70]
0207e17c  ldr r7,[sp,#0x4]
0207e180  ldrsh r8,[r3,#0x2]
0207e184  ldr r12,[r7,#0x5c]
0207e188  ldrsh r7,[r3,#0x6]
0207e18c  str r8,[sp,#0x8]
0207e190  ldrsh r8,[r3,#0x4]
0207e194  ldrsh r3,[r3,#0x0]
0207e198  ldr r11,[r12,#0xc]
0207e19c  ldr lr,[r12,#0x10]
0207e1a0  sub r12,r3,r8
0207e1a4  add r3,r3,r8
0207e1a8  add r8,r11,r12, lsl #0x8
0207e1ac  add r12,r11,r3, lsl #0x8
0207e1b0  ldr r3,[sp,#0x8]
0207e1b4  sub r11,r3,r7
0207e1b8  add r3,r3,r7
0207e1bc  add r7,lr,r11, lsl #0x8
0207e1c0  ldr r11,[sp,#0x0]
0207e1c4  add r3,lr,r3, lsl #0x8
0207e1c8  cmp r11,r7, asr #0x8
0207e1cc  bgt 0x0207e208
0207e1d0  cmp r10,r8, asr #0x8
0207e1d4  ble 0x0207e208
0207e1d8  cmp r10,r12, asr #0x8
0207e1dc  bge 0x0207e208
0207e1e0  cmp r5,r7
0207e1e4  ble 0x0207e208
0207e1e8  str r8,[r6,#0x0]
0207e1ec  str r7,[r6,#0x4]
0207e1f0  sub r4,r12,r8
0207e1f4  str r4,[r6,#0x8]
0207e1f8  sub r3,r3,r7
0207e1fc  ldr r4,[sp,#0x4]
0207e200  mov r5,r7
0207e204  str r3,[r6,#0xc]
0207e208  ldr r9,[r9,#0x0]
0207e20c  cmp r9,#0x0
0207e210  bne 0x0207e170
0207e214  ldr r0,[r0,#0xf8]
0207e218  add r3,sp,#0xc
0207e21c  bl 0x02162ad4
0207e220  mov r1,r0, lsl #0x10
0207e224  mov r2,r1, asr #0x10
0207e228  mvn r1,#0x0
0207e22c  cmp r2,r1
0207e230  beq 0x0207e274
0207e234  cmp r4,#0x0
0207e238  beq 0x0207e250
0207e23c  ldr r1,[sp,#0x10]
0207e240  cmp r5,r1
0207e244  ldrhlt r0,[r4,#0xa0]
0207e248  orrlt r0,r0,#0xc0000
0207e24c  blt 0x0207e278
0207e250  ldr r1,[sp,#0xc]
0207e254  str r1,[r6,#0x0]
0207e258  ldr r1,[sp,#0x10]
0207e25c  str r1,[r6,#0x4]
0207e260  ldr r1,[sp,#0x14]
0207e264  str r1,[r6,#0x8]
0207e268  ldr r1,[sp,#0x18]
0207e26c  str r1,[r6,#0xc]
0207e270  b 0x0207e278
0207e274  mov r0,r1
0207e278  add sp,sp,#0x1c
0207e27c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
