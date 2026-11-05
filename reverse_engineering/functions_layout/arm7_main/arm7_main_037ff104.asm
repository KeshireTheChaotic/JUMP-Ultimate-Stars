037ff104  mov r3,r0, lsl #0x4
037ff108  ldr r2,[0x37ff12c]
037ff10c  add r12,r2,r0, lsl #0x4
037ff110  add r0,r3,#0x4000000
037ff114  ldr r0,[r0,#0x400]
037ff118  bic r2,r0,#0x80000000
037ff11c  ands r0,r1,#0x1
037ff120  orrne r2,r2,#0x8000
037ff124  str r2,[r12,#0x0]
037ff128  bx lr
