02027a1c  stmdb sp!,{r4,lr}
02027a20  mov r4,r0
02027a24  ldr r1,[r4,#0x30]
02027a28  ldr r1,[r1,#0x8]
02027a2c  mov r1,r1, lsl #0x1d
02027a30  movs r1,r1, lsr #0x1f
02027a34  ldmiaeq sp!,{r4,pc}
02027a38  bl 0x0201b45c
02027a3c  mov r1,r0
02027a40  ldr r0,[r4,#0x30]
02027a44  ldr r2,[r0,#0x0]
02027a48  ldr r2,[r2,#0x24]
02027a4c  blx r2
02027a50  ldmia sp!,{r4,pc}
