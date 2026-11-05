02024a68  stmdb sp!,{r3,r4,r5,lr}
02024a6c  mov r5,r0
02024a70  ldr r0,[r5,#0x4]
02024a74  ldr r1,[r0,#0x0]
02024a78  ldr r1,[r1,#0xec]
02024a7c  blx r1
02024a80  cmp r0,#0x0
02024a84  moveq r0,#0x0
02024a88  beq 0x02024a90
02024a8c  bl 0x02011b38
02024a90  ldr r4,[r0,#0x4]
02024a94  ldr r1,[r5,#0x4]
02024a98  mov r0,r4
02024a9c  bl 0x02024770
02024aa0  ldrb r0,[r4,#0x29]
02024aa4  mov r0,r0, lsl #0x19
02024aa8  movs r0,r0, lsr #0x1f
02024aac  ldmiane sp!,{r3,r4,r5,pc}
02024ab0  mov r0,r4
02024ab4  ldr r1,[r0,#0x0]
02024ab8  ldr r1,[r1,#0xac]
02024abc  blx r1
02024ac0  cmp r0,#0x1
02024ac4  ldmiane sp!,{r3,r4,r5,pc}
02024ac8  mov r0,r4
02024acc  bl 0x02028868
02024ad0  ldmia sp!,{r3,r4,r5,pc}
