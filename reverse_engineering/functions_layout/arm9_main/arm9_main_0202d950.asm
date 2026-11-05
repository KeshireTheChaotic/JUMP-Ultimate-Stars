0202d950  stmdb sp!,{r3,r4,r5,lr}
0202d954  sub sp,sp,#0x18
0202d958  mov r4,r1
0202d95c  mov r5,r0
0202d960  mov r0,r2
0202d964  add r1,sp,#0xc
0202d968  mov r2,#0xc
0202d96c  bl 0x02051730
0202d970  ldr r1,[sp,#0xc]
0202d974  add r0,sp,#0x8
0202d978  mov r1,r1, lsl #0xc
0202d97c  str r1,[sp,#0x8]
0202d980  add r1,r5,#0x18
0202d984  bl 0x02018ac8
0202d988  ldr r2,[sp,#0x8]
0202d98c  ldr r1,[sp,#0x10]
0202d990  mov r0,r2, asr #0xb
0202d994  add r0,r2,r0, lsr #0x14
0202d998  mov r2,r0, asr #0xc
0202d99c  mov r1,r1, lsl #0xc
0202d9a0  str r1,[sp,#0x4]
0202d9a4  add r0,sp,#0x4
0202d9a8  add r1,r5,#0x18
0202d9ac  str r2,[sp,#0xc]
0202d9b0  bl 0x02018ac8
0202d9b4  ldr r2,[sp,#0x4]
0202d9b8  ldr r1,[sp,#0x14]
0202d9bc  mov r0,r2, asr #0xb
0202d9c0  add r0,r2,r0, lsr #0x14
0202d9c4  mov r0,r0, asr #0xc
0202d9c8  str r0,[sp,#0x10]
0202d9cc  mov r0,r1, lsl #0xc
0202d9d0  str r0,[sp,#0x0]
0202d9d4  add r0,sp,#0x0
0202d9d8  add r1,r5,#0x18
0202d9dc  bl 0x02018ac8
0202d9e0  ldr r3,[sp,#0x0]
0202d9e4  mov r1,r4
0202d9e8  mov r0,r3, asr #0xb
0202d9ec  add r0,r3,r0, lsr #0x14
0202d9f0  mov r0,r0, asr #0xc
0202d9f4  str r0,[sp,#0x14]
0202d9f8  ldr r0,[r5,#0x14]
0202d9fc  add r2,sp,#0xc
0202da00  ldr r3,[r0,#0x0]
0202da04  ldr r3,[r3,#0x24]
0202da08  blx r3
0202da0c  add sp,sp,#0x18
0202da10  ldmia sp!,{r3,r4,r5,pc}
