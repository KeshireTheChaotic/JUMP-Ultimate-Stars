037ffb54  ldrh r2,[r0,#0x6]
037ffb58  ldrh r1,[r0,#0x4]
037ffb5c  cmp r2,r1
037ffb60  addcc r1,r2,#0x1
037ffb64  strhcc r1,[r0,#0x6]
037ffb68  bxcc lr
037ffb6c  ldrh r2,[r0,#0x8]
037ffb70  ldrb r1,[r0,#0x1]
037ffb74  mov r3,r1, lsl #0x6
037ffb78  add r1,r2,r1, lsl #0x6
037ffb7c  mov r2,r1, lsr #0x8
037ffb80  b 0x037ffb88
037ffb84  sub r2,r2,#0x80
037ffb88  cmp r2,#0x80
037ffb8c  bcs 0x037ffb84
037ffb90  ldrh r1,[r0,#0x8]
037ffb94  add r1,r1,r3
037ffb98  strh r1,[r0,#0x8]
037ffb9c  ldrh r1,[r0,#0x8]
037ffba0  and r1,r1,#0xff
037ffba4  strh r1,[r0,#0x8]
037ffba8  ldrh r1,[r0,#0x8]
037ffbac  orr r1,r1,r2, lsl #0x8
037ffbb0  strh r1,[r0,#0x8]
037ffbb4  bx lr
