02057aa8  stmdb sp!,{r4,lr}
02057aac  bl 0x02055238
02057ab0  ldr r1,[0x2057ad8]
02057ab4  ldr r1,[r1,#0x0]
02057ab8  cmp r1,#0x0
02057abc  ldrne r4,[r1,#0x14c]
02057ac0  moveq r4,#0x0
02057ac4  bl 0x0205524c
02057ac8  mov r0,r4, lsl #0x10
02057acc  mov r0,r0, lsr #0x10
02057ad0  ldmia sp!,{r4,lr}
02057ad4  bx lr
