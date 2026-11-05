021a1b98  ldr r2,[0x21a1bf4]
021a1b9c  ldr r3,[r0,#0x0]
021a1ba0  and r1,r1,r2
021a1ba4  cmp r3,r1
021a1ba8  addgt r1,r1,#0x8000
021a1bac  sub r2,r1,r3
021a1bb0  cmp r2,#0x0
021a1bb4  blt 0x021a1bc0
021a1bb8  cmp r2,#0x40
021a1bbc  blt 0x021a1bc8
021a1bc0  mov r0,#0x0
021a1bc4  bx lr
021a1bc8  ldrb r1,[r0,#0x8]
021a1bcc  add r1,r1,r2
021a1bd0  mov r2,r1, lsr #0x1f
021a1bd4  rsb r1,r2,r1, lsl #0x1a
021a1bd8  add r1,r2,r1, ror #0x1a
021a1bdc  add r0,r0,r1, lsl #0x3
021a1be0  ldrsh r0,[r0,#0xc]
021a1be4  cmp r0,#0x0
021a1be8  movge r0,#0x1
021a1bec  movlt r0,#0x0
021a1bf0  bx lr
