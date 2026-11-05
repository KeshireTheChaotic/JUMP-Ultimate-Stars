02011910  stmdb sp!,{r3,lr}
02011914  mov r1,r1, lsl #0xc
02011918  str r1,[sp,#0x0]
0201191c  ldr r0,[r0,#0x4]
02011920  add r1,sp,#0x0
02011924  ldr r2,[r0,#0x0]
02011928  ldr r2,[r2,#0x10]
0201192c  blx r2
02011930  ldmia sp!,{r3,pc}
