020279d0  stmdb sp!,{r4,lr}
020279d4  ldr r1,[r0,#0x0]
020279d8  mov r4,r0
020279dc  ldr r1,[r1,#0x5c]
020279e0  blx r1
020279e4  ldr r0,[r4,#0x30]
020279e8  ldr r0,[r0,#0x8]
020279ec  mov r0,r0, lsl #0x1e
020279f0  movs r0,r0, lsr #0x1f
020279f4  ldmiaeq sp!,{r4,pc}
020279f8  mov r0,r4
020279fc  bl 0x0201b45c
02027a00  mov r1,r0
02027a04  ldr r0,[r4,#0x30]
02027a08  ldr r2,[r0,#0x0]
02027a0c  ldr r2,[r2,#0x20]
02027a10  blx r2
02027a14  ldmia sp!,{r4,pc}
