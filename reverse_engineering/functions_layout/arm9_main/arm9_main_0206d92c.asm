0206d92c  ldr r0,[sp,#0x0]
0206d930  add r2,r3,#0x6
0206d934  cmp r2,#0x1f
0206d938  movgt r2,#0x1f
0206d93c  add r0,r0,#0x6
0206d940  cmp r0,r2
0206d944  movgt r0,r2
0206d948  sub r1,r2,r0
0206d94c  add r0,r0,r1
0206d950  sub r0,r0,r1, asr #0x2
0206d954  orr r0,r0,r0, lsl #0x5
0206d958  orr r0,r0,r2, lsl #0xa
0206d95c  mov r0,r0, lsl #0x10
0206d960  mov r0,r0, lsr #0x10
0206d964  bx lr
