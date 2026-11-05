0206d710  ldr r2,[r1,#0x0]
0206d714  ldr r1,[r1,#0x4]
0206d718  and r2,r2,#0x1f
0206d71c  mov r1,r1, lsl #0x1b
0206d720  orr r1,r2,r1, lsr #0x16
0206d724  orr r0,r1,r0, lsl #0xa
0206d728  mov r0,r0, lsl #0x10
0206d72c  mov r0,r0, lsr #0x10
0206d730  bx lr
