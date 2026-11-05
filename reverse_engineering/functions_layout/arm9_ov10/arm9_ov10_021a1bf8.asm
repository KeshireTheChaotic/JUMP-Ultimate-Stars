021a1bf8  ldr r2,[0x21a1c58]
021a1bfc  ldr r3,[r0,#0x0]
021a1c00  and r1,r1,r2
021a1c04  cmp r3,r1
021a1c08  addgt r1,r1,#0x8000
021a1c0c  sub r3,r1,r3
021a1c10  cmp r3,#0x0
021a1c14  blt 0x021a1c20
021a1c18  cmp r3,#0x40
021a1c1c  blt 0x021a1c28
021a1c20  mov r0,#0x0
021a1c24  bx lr
021a1c28  ldrb r1,[r0,#0x8]
021a1c2c  add r2,r0,#0xc
021a1c30  add r0,r1,r3
021a1c34  mov r1,r0, lsr #0x1f
021a1c38  rsb r0,r1,r0, lsl #0x1a
021a1c3c  add r0,r1,r0, ror #0x1a
021a1c40  mov r1,r0, lsl #0x3
021a1c44  ldrsh r1,[r2,r1]
021a1c48  add r0,r2,r0, lsl #0x3
021a1c4c  cmp r1,#0x0
021a1c50  movlt r0,#0x0
021a1c54  bx lr
