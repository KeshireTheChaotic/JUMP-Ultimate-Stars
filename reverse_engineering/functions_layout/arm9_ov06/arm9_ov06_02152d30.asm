02152d30  ldr r0,[r0,#0x4]
02152d34  ldr r0,[r0,#0x64]
02152d38  ldrb r0,[r0,#0x10]
02152d3c  mov r1,r0, lsl #0x18
02152d40  movs r1,r1, lsr #0x1f
02152d44  beq 0x02152d58
02152d48  mov r0,r0, lsl #0x1e
02152d4c  movs r0,r0, lsr #0x1f
02152d50  movne r0,#0x1
02152d54  bxne lr
02152d58  mov r0,#0x0
02152d5c  bx lr
