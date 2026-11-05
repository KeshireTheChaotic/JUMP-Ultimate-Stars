02049f84  ldr r0,[0x2049fa8]
02049f88  ldr r12,[0x2049fac]
02049f8c  ldrh r0,[r0,#0x0]
02049f90  and r0,r0,#0x8000
02049f94  mov r0,r0, asr #0xf
02049f98  cmp r0,#0x1
02049f9c  moveq r0,#0x0
02049fa0  movne r0,#0x1
02049fa4  bx r12
