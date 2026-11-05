02032f88  stmdb sp!,{r4,r5,r6,lr}
02032f8c  mov r6,r1
02032f90  strb r6,[r0,#0x49]
02032f94  ldr r0,[r0,#0x38]
02032f98  ldr r4,[0x2032fe4]
02032f9c  ldr r5,[r0,#0x4c]
02032fa0  b 0x02032fd8
02032fa4  mov r0,r5
02032fa8  ldr r1,[r0,#0x0]
02032fac  ldr r1,[r1,#0x9c]
02032fb0  blx r1
02032fb4  mov r0,r0, lsl #0x10
02032fb8  cmp r4,r0, lsr #0x10
02032fbc  bne 0x02032fd4
02032fc0  ldr r0,[r5,#0x64]
02032fc4  mov r1,r6
02032fc8  ldr r2,[r0,#0x0]
02032fcc  ldr r2,[r2,#0x60]
02032fd0  blx r2
02032fd4  ldr r5,[r5,#0x4c]
02032fd8  cmp r5,#0x0
02032fdc  bne 0x02032fa4
02032fe0  ldmia sp!,{r4,r5,r6,pc}
