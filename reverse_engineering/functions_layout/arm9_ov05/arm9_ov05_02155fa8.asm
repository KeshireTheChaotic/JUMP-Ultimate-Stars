02155fa8  ldrsh r2,[r1,#0x0]
02155fac  mov r2,r2, lsl #0xc
02155fb0  str r2,[r0,#0x0]
02155fb4  ldrsh r2,[r1,#0x2]
02155fb8  mov r2,r2, lsl #0xc
02155fbc  str r2,[r0,#0x4]
02155fc0  ldrsh r2,[r1,#0x4]
02155fc4  mov r2,r2, lsl #0xc
02155fc8  str r2,[r0,#0x8]
02155fcc  ldrsh r1,[r1,#0x6]
02155fd0  mov r1,r1, lsl #0xc
02155fd4  str r1,[r0,#0xc]
02155fd8  bx lr
