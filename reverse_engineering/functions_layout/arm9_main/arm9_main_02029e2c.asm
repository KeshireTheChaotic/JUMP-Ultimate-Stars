02029e2c  ldrb r1,[r0,#0xf]
02029e30  cmp r1,#0x0
02029e34  bne 0x02029e80
02029e38  ldrh r12,[r0,#0x8]
02029e3c  mov r3,#0x0
02029e40  b 0x02029e70
02029e44  ldr r2,[r0,#0x10]
02029e48  mov r1,r3, lsl #0x1
02029e4c  ldrh r1,[r2,r1]
02029e50  mov r1,r1, asr #0xf
02029e54  cmp r1,#0x8
02029e58  bls 0x02029e6c
02029e5c  cmp r1,#0xf7
02029e60  movcc r1,#0x1
02029e64  strbcc r1,[r0,#0xe]
02029e68  bcc 0x02029e78
02029e6c  add r3,r3,#0x1
02029e70  cmp r3,r12
02029e74  bcc 0x02029e44
02029e78  mov r1,#0x1
02029e7c  strb r1,[r0,#0xf]
02029e80  ldrb r0,[r0,#0xe]
02029e84  bx lr
