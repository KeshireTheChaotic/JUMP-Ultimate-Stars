03804c88  stmdb sp!,{lr}
03804c8c  sub sp,sp,#0x4
03804c90  ldr r0,[r0,#0x0]
03804c94  mov r2,r0, lsl #0x7
03804c98  movs r2,r2, lsr #0x1f
03804c9c  bne 0x03804cb8
03804ca0  mov r1,#0x0
03804ca4  ldr r0,[0x3804d70]
03804ca8  strb r1,[r0,#0x0]
03804cac  ldr r0,[0x3804d74]
03804cb0  strb r1,[r0,#0x0]
03804cb4  b 0x03804d64
03804cb8  mov r0,r0, lsl #0x5
03804cbc  movs r0,r0, lsr #0x1e
03804cc0  beq 0x03804d08
03804cc4  mov r2,#0x0
03804cc8  ldr r0,[0x3804d74]
03804ccc  strb r2,[r0,#0x0]
03804cd0  ldr r0,[0x3804d70]
03804cd4  ldrb r1,[r0,#0x0]
03804cd8  add r1,r1,#0x1
03804cdc  strb r1,[r0,#0x0]
03804ce0  ldrb r1,[r0,#0x0]
03804ce4  cmp r1,#0x4
03804ce8  bcc 0x03804d64
03804cec  strb r2,[r0,#0x0]
03804cf0  ldr r0,[0x3804d78]
03804cf4  ldr r1,[r0,#0x24]
03804cf8  cmp r1,#0x23
03804cfc  addlt r1,r1,#0x1
03804d00  strlt r1,[r0,#0x24]
03804d04  b 0x03804d64
03804d08  mov lr,#0x0
03804d0c  ldr r3,[0x3804d70]
03804d10  strb lr,[r3,#0x0]
03804d14  ldr r2,[0x3804d78]
03804d18  ldr r12,[r2,#0x24]
03804d1c  cmp r1,r12, asr #0x1
03804d20  ldrge r0,[0x3804d74]
03804d24  strbge lr,[r0,#0x0]
03804d28  bge 0x03804d64
03804d2c  ldr r0,[0x3804d74]
03804d30  ldrb r1,[r0,#0x0]
03804d34  add r1,r1,#0x1
03804d38  strb r1,[r0,#0x0]
03804d3c  ldrb r1,[r0,#0x0]
03804d40  cmp r1,#0x4
03804d44  bcc 0x03804d64
03804d48  strb lr,[r0,#0x0]
03804d4c  ldr r0,[r2,#0x28]
03804d50  cmp r12,r0
03804d54  subgt r0,r12,#0x1
03804d58  strgt r0,[r2,#0x24]
03804d5c  movgt r0,#0x3
03804d60  strbgt r0,[r3,#0x0]
03804d64  add sp,sp,#0x4
03804d68  ldmia sp!,{lr}
03804d6c  bx lr
