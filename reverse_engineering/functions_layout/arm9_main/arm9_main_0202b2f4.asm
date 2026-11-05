0202b2f4  ldr r2,[r0,#0x64]
0202b2f8  mov r0,r1, lsl #0x1f
0202b2fc  ldr r1,[r2,#0x1c]
0202b300  bic r1,r1,#0x200
0202b304  orr r0,r1,r0, lsr #0x16
0202b308  str r0,[r2,#0x1c]
0202b30c  bx lr
