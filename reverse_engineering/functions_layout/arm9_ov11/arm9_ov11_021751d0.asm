021751d0  sub sp,sp,#0x30
021751d4  mov r9,r1
021751d8  mov r1,r9, lsl #0x18
021751dc  mov r10,r0
021751e0  mov r0,r1, asr #0x18
021751e4  str r2,[sp,#0x0]
021751e8  bl 0x021733b4
021751ec  ldr r2,[r10,#0xc]
021751f0  mov r9,r0
021751f4  cmp r2,#0x0
021751f8  moveq r0,#0x0
021751fc  beq 0x0217560c
