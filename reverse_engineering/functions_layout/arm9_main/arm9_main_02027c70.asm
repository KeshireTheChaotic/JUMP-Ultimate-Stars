02027c70  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
02027c74  sub sp,sp,#0x4
02027c78  mov r7,r0
02027c7c  ldr r4,[r7,#0x30]
02027c80  mov r6,r1
02027c84  ldr r1,[r4,#0x8]
02027c88  mov r5,r2
02027c8c  mov r1,r1, lsl #0x16
02027c90  mov r4,r3
02027c94  movs r1,r1, lsr #0x1f
02027c98  beq 0x02027cd8
02027c9c  bl 0x0201b45c
02027ca0  mov r8,r0
02027ca4  mov r0,r6
02027ca8  bl 0x02020ee4
02027cac  mov r6,r0
02027cb0  mov r0,r5
02027cb4  bl 0x02020ee4
02027cb8  str r4,[sp,#0x0]
02027cbc  mov r1,r8
02027cc0  mov r2,r6
02027cc4  mov r3,r0
02027cc8  ldr r0,[r7,#0x30]
02027ccc  ldr r4,[r0,#0x0]
02027cd0  ldr r4,[r4,#0x48]
02027cd4  blx r4
02027cd8  add sp,sp,#0x4
02027cdc  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
