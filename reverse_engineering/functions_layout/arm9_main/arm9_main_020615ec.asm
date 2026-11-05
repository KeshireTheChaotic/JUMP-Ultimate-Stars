020615ec  ldr r0,[0x020615fc]
020615ee  ldrh r1,[r0,#0x0]
020615f0  mov r0,#0x1
020615f2  and r1,r0
020615f4  cmp r1,#0x0
020615f6  bne 0x020615fa
020615f8  mov r0,#0x0
020615fa  bx lr
