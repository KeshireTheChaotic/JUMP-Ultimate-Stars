0202d908  stmdb sp!,{r4,lr}
0202d90c  sub sp,sp,#0x8
0202d910  ldr r2,[0x202d94c]
0202d914  mov r3,r1, lsl #0xc
0202d918  mov r4,r0
0202d91c  add r0,sp,#0x4
0202d920  add r1,sp,#0x0
0202d924  str r3,[sp,#0x0]
0202d928  bl 0x020199f8
0202d92c  add r0,sp,#0x4
0202d930  ldr r1,[r0,#0x0]
0202d934  mov r0,r1, asr #0xf
0202d938  add r0,r1,r0, lsr #0x10
0202d93c  mov r0,r0, asr #0x10
0202d940  str r0,[r4,#0x0]
0202d944  add sp,sp,#0x8
0202d948  ldmia sp!,{r4,pc}
