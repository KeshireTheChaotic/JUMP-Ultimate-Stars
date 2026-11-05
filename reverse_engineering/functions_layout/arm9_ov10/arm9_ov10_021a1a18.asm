021a1a18  mov r3,#0x0
021a1a1c  mov r12,r3
021a1a20  b 0x021a1a50
021a1a24  ldrb r1,[r0,#0x8]
021a1a28  add r1,r1,r12
021a1a2c  mov r2,r1, lsr #0x1f
021a1a30  rsb r1,r2,r1, lsl #0x1a
021a1a34  add r1,r2,r1, ror #0x1a
021a1a38  add r1,r0,r1, lsl #0x3
021a1a3c  ldrsh r1,[r1,#0xc]
021a1a40  cmp r1,#0x0
021a1a44  blt 0x021a1a58
021a1a48  add r3,r3,#0x1
021a1a4c  add r12,r12,#0x1
021a1a50  cmp r12,#0x40
021a1a54  blt 0x021a1a24
021a1a58  mov r0,r3
021a1a5c  bx lr
