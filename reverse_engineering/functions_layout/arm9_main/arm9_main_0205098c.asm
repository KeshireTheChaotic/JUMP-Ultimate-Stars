0205098c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02050990  ldr r3,[r0,#0x4]
02050994  ldr r4,[r0,#0x0]
02050998  smull r2,r7,r3,r3
0205099c  smlal r2,r7,r4,r4
020509a0  ldr r4,[r0,#0x8]
020509a4  ldr r3,[0x2050ab0]
020509a8  smlal r2,r7,r4,r4
020509ac  mov r6,#0x2
020509b0  mov r4,r7, lsl #0x2
020509b4  ldr r5,[0x2050ab4]
020509b8  strh r6,[r3,#0x0]
020509bc  mov r3,#0x0
020509c0  str r3,[r5,#0x0]
020509c4  mov r6,#0x1000000
020509c8  ldr r3,[0x2050ab8]
020509cc  str r6,[r5,#0x4]
020509d0  str r2,[r3,#0x0]
020509d4  ldr r6,[0x2050abc]
020509d8  str r7,[r3,#0x4]
020509dc  mov r5,#0x1
020509e0  ldr r3,[0x2050ac0]
020509e4  strh r5,[r6,#0x0]
020509e8  mov r5,r2, lsl #0x2
020509ec  str r5,[r3,#0x0]
020509f0  orr r4,r4,r2, lsr #0x1e
020509f4  str r4,[r3,#0x4]
020509f8  ldrh r2,[r6,#0x0]
020509fc  ands r2,r2,#0x8000
02050a00  bne 0x020509f8
02050a04  ldr r2,[0x2050ac4]
02050a08  ldr r12,[r2,#0x0]
02050a0c  ldr r3,[0x2050ab0]
02050a10  ldrh r2,[r3,#0x0]
02050a14  ands r2,r2,#0x8000
02050a18  bne 0x02050a10
02050a1c  ldr r7,[0x2050ac8]
02050a20  ldr r5,[r0,#0x0]
02050a24  ldr r6,[r7,#0x0]
02050a28  mov r4,r12, asr #0x1f
02050a2c  umull r3,r2,r6,r12
02050a30  mla r2,r6,r4,r2
02050a34  ldr r8,[r7,#0x4]
02050a38  mov r4,r5, asr #0x1f
02050a3c  umull r7,r6,r3,r5
02050a40  mov lr,#0x0
02050a44  mla r2,r8,r12,r2
02050a48  mla r6,r3,r4,r6
02050a4c  mla r6,r2,r5,r6
02050a50  adds r4,r7,lr
02050a54  adc r4,r6,#0x1000
02050a58  mov r4,r4, asr #0xd
02050a5c  str r4,[r1,#0x0]
02050a60  ldr r5,[r0,#0x4]
02050a64  umull r6,r12,r3,r5
02050a68  mov r4,r5, asr #0x1f
02050a6c  mla r12,r3,r4,r12
02050a70  mla r12,r2,r5,r12
02050a74  adds r4,r6,lr
02050a78  adc r4,r12,#0x1000
02050a7c  mov r4,r4, asr #0xd
02050a80  str r4,[r1,#0x4]
02050a84  ldr r12,[r0,#0x8]
02050a88  umull r5,r4,r3,r12
02050a8c  mov r0,r12, asr #0x1f
02050a90  adds r5,r5,lr
02050a94  mla r4,r3,r0,r4
02050a98  mla r4,r2,r12,r4
02050a9c  adc r0,r4,#0x1000
02050aa0  mov r0,r0, asr #0xd
02050aa4  str r0,[r1,#0x8]
02050aa8  ldmia sp!,{r4,r5,r6,r7,r8,lr}
02050aac  bx lr
