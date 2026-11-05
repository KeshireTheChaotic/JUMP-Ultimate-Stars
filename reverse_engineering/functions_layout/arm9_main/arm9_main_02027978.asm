02027978  stmdb sp!,{r4,lr}
0202797c  mov r4,r0
02027980  ldr r1,[r4,#0x30]
02027984  ldr r1,[r1,#0x8]
02027988  mov r1,r1, lsl #0x1f
0202798c  movs r1,r1, lsr #0x1f
02027990  beq 0x020279ac
02027994  bl 0x0201b45c
02027998  mov r1,r0
0202799c  ldr r0,[r4,#0x30]
020279a0  ldr r2,[r0,#0x0]
020279a4  ldr r2,[r2,#0x1c]
020279a8  blx r2
020279ac  ldr r0,[r4,#0x18]
020279b0  cmp r0,#0x0
020279b4  ldmiaeq sp!,{r4,pc}
020279b8  mov r0,r4
020279bc  bl 0x0201b45c
020279c0  ldr r1,[r0,#0x0]
020279c4  ldr r1,[r1,#0x28]
020279c8  blx r1
020279cc  ldmia sp!,{r4,pc}
