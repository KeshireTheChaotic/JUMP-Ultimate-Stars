02050d80  stmdb sp!,{lr}
02050d84  sub sp,sp,#0x4
02050d88  mov r3,r0, asr #0x1f
02050d8c  umull lr,r12,r1,r0
02050d90  mla r12,r1,r3,r12
02050d94  mov r1,#0x80000000
02050d98  mla r12,r2,r0,r12
02050d9c  adds r0,lr,r1
02050da0  adc r0,r12,#0x0
02050da4  add sp,sp,#0x4
02050da8  ldmia sp!,{lr}
02050dac  bx lr
