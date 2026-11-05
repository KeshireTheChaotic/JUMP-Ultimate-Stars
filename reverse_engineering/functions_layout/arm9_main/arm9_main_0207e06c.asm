0207e06c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0207e070  sub sp,sp,#0x10
0207e074  mov r6,r0
0207e078  mov r3,r2, asr #0x8
0207e07c  mov r12,r1, asr #0x8
0207e080  ldr r0,[r6,#0x98]
0207e084  mvn r5,#0x80000000
0207e088  mov r4,#0x0
0207e08c  b 0x0207e0f4
0207e090  ldr r11,[r0,#0x8]
0207e094  ldr r7,[r11,#0x70]
0207e098  ldr lr,[r11,#0x5c]
0207e09c  ldrsh r10,[r7,#0x2]
0207e0a0  ldrsh r9,[r7,#0x6]
0207e0a4  ldrsh r8,[r7,#0x4]
0207e0a8  ldrsh r7,[r7,#0x0]
0207e0ac  sub r9,r10,r9
0207e0b0  ldr r10,[lr,#0x10]
0207e0b4  ldr lr,[lr,#0xc]
0207e0b8  add r10,r10,r9, lsl #0x8
0207e0bc  sub r9,r7,r8
0207e0c0  add r7,r7,r8
0207e0c4  cmp r3,r10, asr #0x8
0207e0c8  add r8,lr,r9, lsl #0x8
0207e0cc  add r7,lr,r7, lsl #0x8
0207e0d0  bgt 0x0207e0f0
0207e0d4  cmp r12,r8, asr #0x8
0207e0d8  blt 0x0207e0f0
0207e0dc  cmp r12,r7, asr #0x8
0207e0e0  bgt 0x0207e0f0
0207e0e4  cmp r5,r10
0207e0e8  movgt r5,r10
0207e0ec  movgt r4,r11
0207e0f0  ldr r0,[r0,#0x0]
0207e0f4  cmp r0,#0x0
0207e0f8  bne 0x0207e090
0207e0fc  ldr r0,[r6,#0xf8]
0207e100  bl 0x02162a80
0207e104  mov r7,r0
0207e108  mvn r0,#0x0
0207e10c  cmp r7,r0
0207e110  beq 0x0207e140
0207e114  ldr r0,[r6,#0xf8]
0207e118  add r2,sp,#0x0
0207e11c  mov r1,r7
0207e120  bl 0x0216293c
0207e124  cmp r4,#0x0
0207e128  beq 0x0207e13c
0207e12c  ldr r0,[sp,#0x4]
0207e130  cmp r5,r0
0207e134  ldrshlt r0,[r4,#0xa0]
0207e138  blt 0x0207e140
0207e13c  mov r0,r7
0207e140  add sp,sp,#0x10
0207e144  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
