02174234  ldr r1,[r0,#0x78]
02174238  ldr r3,[r0,#0xe4]
0217423c  ldr r2,[r0,#0xe8]
02174240  add r1,r0,r1, lsl #0x2
02174244  orr r2,r3,r2
02174248  str r2,[r1,#0x18]
0217424c  ldr r1,[r0,#0x130]
02174250  ldr r3,[r0,#0xe4]
02174254  ldr r2,[r0,#0xe8]
02174258  mov r1,r1, lsl #0x1c
0217425c  orr r2,r3,r2
02174260  add r1,r0,r1, lsr #0x1a
02174264  str r2,[r1,#0xec]
02174268  ldr r1,[r0,#0x130]
0217426c  mov r3,#0x0
02174270  add r1,r1,#0x1
02174274  str r1,[r0,#0x130]
02174278  str r3,[r0,#0x12c]
0217427c  str r3,[r0,#0xe8]
02174280  add r1,r0,r3, lsl #0x2
02174284  ldr r2,[r0,#0x12c]
02174288  ldr r1,[r1,#0xec]
0217428c  add r3,r3,#0x1
02174290  orr r1,r2,r1
02174294  str r1,[r0,#0x12c]
02174298  cmp r3,#0x10
0217429c  blt 0x02174280
021742a0  bx lr
