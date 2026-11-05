02027a58  stmdb sp!,{r3,r4,r5,lr}
02027a5c  mov r5,r0
02027a60  ldr r2,[r5,#0x30]
02027a64  mov r4,r1
02027a68  ldr r1,[r2,#0x8]
02027a6c  mov r1,r1, lsl #0x1c
02027a70  movs r1,r1, lsr #0x1f
02027a74  ldmiaeq sp!,{r3,r4,r5,pc}
02027a78  bl 0x0201b45c
02027a7c  mov r1,r0
02027a80  ldr r0,[r5,#0x30]
02027a84  mov r2,r4
02027a88  ldr r3,[r0,#0x0]
02027a8c  ldr r3,[r3,#0x28]
02027a90  blx r3
02027a94  ldmia sp!,{r3,r4,r5,pc}
