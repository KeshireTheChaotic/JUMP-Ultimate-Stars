0205f034  stmdb sp!,{lr}
0205f038  sub sp,sp,#0x4
0205f03c  ldrh r3,[r0,#0x4]
0205f040  ldr r2,[0x205f104]
0205f044  cmp r3,#0x0
0205f048  beq 0x0205f060
0205f04c  cmp r3,#0x1
0205f050  beq 0x0205f07c
0205f054  cmp r3,#0x2
0205f058  beq 0x0205f090
0205f05c  b 0x0205f0f8
0205f060  ldrh r2,[r0,#0x0]
0205f064  ldrh r3,[r0,#0xc]
0205f068  sub r0,r1,r2
0205f06c  add r0,r3,r0
0205f070  mov r0,r0, lsl #0x10
0205f074  mov r2,r0, lsr #0x10
0205f078  b 0x0205f0f8
0205f07c  ldrh r2,[r0,#0x0]
0205f080  sub r1,r1,r2
0205f084  add r0,r0,r1, lsl #0x1
0205f088  ldrh r2,[r0,#0xc]
0205f08c  b 0x0205f0f8
0205f090  ldrh r3,[r0,#0xc]
0205f094  add r0,r0,#0xc
0205f098  add r0,r0,#0x2
0205f09c  sub r3,r3,#0x1
0205f0a0  add lr,r0,r3, lsl #0x2
0205f0a4  cmp r0,lr
0205f0a8  bhi 0x0205f0f8
0205f0ac  sub r12,lr,r0
0205f0b0  mov r3,r12, asr #0x1
0205f0b4  add r3,r12,r3, lsr #0x1e
0205f0b8  mov r3,r3, asr #0x2
0205f0bc  add r3,r3,r3, lsr #0x1f
0205f0c0  mov r12,r3, asr #0x1
0205f0c4  mov r3,r12, lsl #0x2
0205f0c8  ldrh r3,[r0,r3]
0205f0cc  add r12,r0,r12, lsl #0x2
0205f0d0  cmp r3,r1
0205f0d4  addcc r0,r12,#0x4
0205f0d8  bcc 0x0205f0f0
0205f0dc  cmp r1,r3
0205f0e0  subcc lr,r12,#0x4
0205f0e4  bcc 0x0205f0f0
0205f0e8  ldrh r2,[r12,#0x2]
0205f0ec  b 0x0205f0f8
0205f0f0  cmp r0,lr
0205f0f4  bls 0x0205f0ac
0205f0f8  mov r0,r2
0205f0fc  add sp,sp,#0x4
0205f100  ldmia sp!,{pc}
