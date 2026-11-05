020506ec  stmdb sp!,{lr}
020506f0  sub sp,sp,#0x4
020506f4  ldr r12,[r0,#0x0]
020506f8  smull lr,r12,r2,r12
020506fc  mov lr,lr, lsr #0xc
02050700  orr lr,lr,r12, lsl #0x14
02050704  str lr,[r1,#0x0]
02050708  ldr r12,[r0,#0x4]
0205070c  smull lr,r12,r2,r12
02050710  mov r2,lr, lsr #0xc
02050714  orr r2,r2,r12, lsl #0x14
02050718  str r2,[r1,#0x4]
0205071c  ldr r2,[r0,#0x8]
02050720  smull r12,r2,r3,r2
02050724  mov r12,r12, lsr #0xc
02050728  orr r12,r12,r2, lsl #0x14
0205072c  str r12,[r1,#0x8]
02050730  ldr r0,[r0,#0xc]
02050734  smull r2,r0,r3,r0
02050738  mov r2,r2, lsr #0xc
0205073c  orr r2,r2,r0, lsl #0x14
02050740  str r2,[r1,#0xc]
02050744  add sp,sp,#0x4
02050748  ldmia sp!,{lr}
0205074c  bx lr
