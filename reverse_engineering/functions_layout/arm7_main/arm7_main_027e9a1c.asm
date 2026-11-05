027e9a1c  mov r12,#0x0
027e9a20  ldr r2,[0x27e9a50]
027e9a24  mov r3,r12, lsl #0x2
027e9a28  add r0,r2,r12, lsl #0x2
027e9a2c  ldrh r1,[r0,#0x2]
027e9a30  ldrh r0,[r2,r3]
027e9a34  add r0,r0,#0x4800000
027e9a38  add r0,r0,#0x8000
027e9a3c  strh r1,[r0,#0x0]
027e9a40  add r12,r12,#0x1
027e9a44  cmp r12,#0x19
027e9a48  bcc 0x027e9a24
027e9a4c  bx lr
