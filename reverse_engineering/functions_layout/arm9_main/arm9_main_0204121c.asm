0204121c  ldr r2,[r0,#0x4]
02041220  add r3,r0,#0x10
02041224  sub r12,r2,#0x1
02041228  str r12,[r0,#0x4]
0204122c  ldr r2,[r1,#0x0]
02041230  add r3,r3,r12, lsl #0x5
02041234  mov r2,r2, asr #0x4
02041238  strh r2,[r3,#0x6]
0204123c  ldr r2,[r1,#0x4]
02041240  mov r2,r2, asr #0x4
02041244  strh r2,[r3,#0xe]
02041248  ldr r2,[r1,#0x8]
0204124c  mov r2,r2, asr #0x4
02041250  strh r2,[r3,#0x16]
02041254  ldr r1,[r1,#0xc]
02041258  mov r1,r1, asr #0x4
0204125c  strh r1,[r3,#0x1e]
02041260  ldr r0,[r0,#0x4]
02041264  bx lr
