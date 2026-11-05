020488c4  ldr r1,[r0,#0x1c]
020488c8  ldr r1,[r1,#0x34]
020488cc  ldr r1,[r1,#0x908]
020488d0  cmp r1,#0x0
020488d4  beq 0x020488f4
020488d8  ldr r1,[r0,#0xc]
020488dc  mov r1,r1, asr #0x4
020488e0  str r1,[r0,#0x28]
020488e4  ldr r1,[r0,#0x10]
020488e8  mov r1,r1, asr #0x4
020488ec  str r1,[r0,#0x2c]
020488f0  bx lr
020488f4  ldr r2,[r0,#0x10]
020488f8  ldr r1,[0x204891c]
020488fc  ldr r12,[r0,#0xc]
02048900  mov r3,r2, lsr #0xc
02048904  mov r2,r1, lsl #0x10
02048908  and r12,r1,r12, lsr #0xc
0204890c  and r1,r2,r3, lsl #0x10
02048910  orr r1,r12,r1
02048914  str r1,[r0,#0x20]
02048918  bx lr
