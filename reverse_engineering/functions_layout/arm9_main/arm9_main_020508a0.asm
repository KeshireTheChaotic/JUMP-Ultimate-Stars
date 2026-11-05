020508a0  ldr r1,[0x20508d4]
020508a4  ldrh r0,[r1,#0x0]
020508a8  ands r0,r0,#0x8000
020508ac  bne 0x020508a4
020508b0  ldr r1,[0x20508d8]
020508b4  mov r0,#0x80000
020508b8  ldr r2,[r1,#0x0]
020508bc  ldr r1,[r1,#0x4]
020508c0  adds r0,r2,r0
020508c4  adc r1,r1,#0x0
020508c8  mov r0,r0, lsr #0x14
020508cc  orr r0,r0,r1, lsl #0xc
020508d0  bx lr
