02038484  ldr r0,[0x20384a8]
02038488  ldr r1,[0x20384ac]
0203848c  ldr r2,[r0,#0x3e0]
02038490  add r2,r2,#0x1
02038494  and r3,r2,#0x7
02038498  str r3,[r0,#0x3e0]
0203849c  mov r3,r2, lsl #0x1d
020384a0  add r0,r1,r3, lsr #0x19
020384a4  bx lr
