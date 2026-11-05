021595e0  ldr r1,[r0,#0x4]
021595e4  cmp r1,#0x0
021595e8  bxeq lr
021595ec  ldr r1,[r1,#0x4]
021595f0  ldrb r1,[r1,#0x29]
021595f4  mov r1,r1, lsl #0x18
021595f8  movs r1,r1, lsr #0x1f
021595fc  movne r1,#0x0
02159600  strne r1,[r0,#0x4]
02159604  bx lr
