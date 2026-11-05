027e7cc4  stmdb sp!,{r4,lr}
027e7cc8  ldr r0,[0x27e7d78]
027e7ccc  ldr r4,[r0,#0x550]
027e7cd0  ldr r0,[0x27e7d7c]
027e7cd4  add r0,r4,r0
027e7cd8  bl 0x037fce24
027e7cdc  mov r0,#0x0
027e7ce0  add r1,r4,#0x2f8
027e7ce4  mov r2,#0x400
027e7ce8  bl 0x037fe648
027e7cec  mov r2,#0x0
027e7cf0  add r0,r2,#0x1
027e7cf4  mov r0,r0, lsl #0x10
027e7cf8  mov r1,r0, lsr #0x10
027e7cfc  add r0,r4,r2, lsl #0x5
027e7d00  add r0,r0,#0x200
027e7d04  strh r1,[r0,#0xf8]
027e7d08  mov r2,r1
027e7d0c  cmp r1,#0x1f
027e7d10  bcc 0x027e7cf0
027e7d14  ldr r2,[0x27e7d80]
027e7d18  add r0,r4,r1, lsl #0x5
027e7d1c  add r0,r0,#0x200
027e7d20  strh r2,[r0,#0xf8]
027e7d24  mov r3,#0x0
027e7d28  add r0,r4,#0x600
027e7d2c  strh r3,[r0,#0xf8]
027e7d30  strh r1,[r0,#0xfa]
027e7d34  add r1,r4,r3, lsl #0x2
027e7d38  add r0,r1,#0x700
027e7d3c  strh r2,[r0,#0xc]
027e7d40  strh r2,[r0,#0xe]
027e7d44  add r0,r1,#0x600
027e7d48  strh r2,[r0,#0xfc]
027e7d4c  strh r2,[r0,#0xfe]
027e7d50  add r0,r3,#0x1
027e7d54  mov r0,r0, lsl #0x10
027e7d58  mov r3,r0, lsr #0x10
027e7d5c  cmp r3,#0x4
027e7d60  bcc 0x027e7d34
027e7d64  ldr r0,[0x27e7d7c]
027e7d68  add r0,r4,r0
027e7d6c  bl 0x037fcdb4
027e7d70  ldmia sp!,{r4,lr}
027e7d74  bx lr
