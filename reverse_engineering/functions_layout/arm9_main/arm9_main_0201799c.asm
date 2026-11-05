0201799c  stmdb sp!,{r4,lr}
020179a0  ldr r3,[r0,#0x0]
020179a4  mov r4,r0
020179a8  ldr r3,[r3,#0x2c]
020179ac  blx r3
020179b0  ldr r1,[r4,#0x20]
020179b4  mov r0,r0, lsl #0x1
020179b8  ldr r1,[r1,#0x10]
020179bc  ldrh r0,[r1,r0]
020179c0  ldmia sp!,{r4,pc}
