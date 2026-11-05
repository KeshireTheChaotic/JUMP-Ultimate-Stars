02027a9c  stmdb sp!,{r4,lr}
02027aa0  mov r4,r0
02027aa4  ldr r1,[r4,#0x30]
02027aa8  ldr r1,[r1,#0x8]
02027aac  mov r1,r1, lsl #0x1b
02027ab0  movs r1,r1, lsr #0x1f
02027ab4  ldmiaeq sp!,{r4,pc}
02027ab8  bl 0x0201b45c
02027abc  mov r1,r0
02027ac0  ldr r0,[r4,#0x30]
02027ac4  ldr r2,[r0,#0x0]
02027ac8  ldr r2,[r2,#0x2c]
02027acc  blx r2
02027ad0  ldmia sp!,{r4,pc}
