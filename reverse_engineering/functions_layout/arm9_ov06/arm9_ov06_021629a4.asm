021629a4  mov r2,r2, asr #0xc
021629a8  mov r2,r2, lsl #0x6
021629ac  ldr r12,[r0,#0x14]
021629b0  add r1,r2,r1, asr #0xc
021629b4  add r2,r12,r1, lsl #0x3
021629b8  ldrb r1,[r2,#0x2]
021629bc  cmp r1,#0x6
021629c0  bne 0x021629d0
021629c4  ldr r1,[r0,#0x3c]
021629c8  tst r1,#0x8
021629cc  beq 0x021629d8
021629d0  mov r0,#0x0
021629d4  bx lr
021629d8  ldrsh r2,[r2,#0x0]
021629dc  ldr r12,[r0,#0x18]
021629e0  mov r1,#0x18
021629e4  smlabb r1,r2,r1,r12
021629e8  ldrsh r1,[r1,#0x16]
021629ec  ldr r2,[r0,#0x20]
021629f0  ldr r0,[sp,#0x0]
021629f4  add r2,r2,r1, lsl #0x3
021629f8  ldrb r1,[r2,#0x3]
021629fc  strb r1,[r3,#0x0]
02162a00  ldrb r1,[r2,#0x2]
02162a04  strb r1,[r0,#0x0]
02162a08  ldrb r0,[r2,#0x6]
02162a0c  cmp r0,#0x0
02162a10  movne r0,#0x1
02162a14  moveq r0,#0x0
02162a18  bx lr
