020179c4  and r3,r1,#0x1
020179c8  cmp r3,#0x1
020179cc  ldr r3,[r0,#0xc]
020179d0  ldrh r0,[r0,#0x8]
020179d4  mulne r0,r2,r0
020179d8  movne r0,r0, lsr #0x1
020179dc  addne r0,r0,r1, lsr #0x1
020179e0  ldrbne r0,[r3,r0]
020179e4  movne r0,r0, asr #0x4
020179e8  bxne lr
020179ec  mul r0,r2,r0
020179f0  mov r0,r0, lsr #0x1
020179f4  add r0,r0,r1, lsr #0x1
020179f8  ldrb r0,[r3,r0]
020179fc  and r0,r0,#0xf
02017a00  bx lr
