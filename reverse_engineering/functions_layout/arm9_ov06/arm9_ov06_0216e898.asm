0216e898  stmdb sp!,{r3,r4,r5,r6,lr}
0216e89c  sub sp,sp,#0xc
0216e8a0  mov r6,r2
0216e8a4  mov r5,r3
0216e8a8  cmp r1,#0x0
0216e8ac  mov r4,r0, lsl #0x8
0216e8b0  beq 0x0216e8cc
0216e8b4  add r0,sp,#0x8
0216e8b8  mov r1,r4
0216e8bc  bl 0x0216e934
0216e8c0  ldr r0,[sp,#0x8]
0216e8c4  rsb r1,r0,#0x0
0216e8c8  b 0x0216e8dc
0216e8cc  add r0,sp,#0x4
0216e8d0  mov r1,r4
0216e8d4  bl 0x0216e934
0216e8d8  ldr r1,[sp,#0x4]
0216e8dc  mov r2,r1, asr #0x4
0216e8e0  add r0,sp,#0x0
0216e8e4  mov r1,r4
0216e8e8  strh r2,[r6,#0x0]
0216e8ec  bl 0x0216e988
0216e8f0  add r0,sp,#0x0
0216e8f4  ldr r0,[r0,#0x0]
0216e8f8  bl 0x0200c954
0216e8fc  ldr r1,[0x216e930]
0216e900  bl 0x0200c5ac
0216e904  bl 0x0200c85c
0216e908  blx 0x02009c54
0216e90c  bl 0x0200b6c4
0216e910  mov r1,r0
0216e914  ldr r0,[0x216e930]
0216e918  bl 0x0200c9e4
0216e91c  bl 0x0200c8e0
0216e920  mov r0,r0, asr #0x4
0216e924  strh r0,[r5,#0x0]
0216e928  add sp,sp,#0xc
0216e92c  ldmia sp!,{r3,r4,r5,r6,pc}
