020500b0  stmdb sp!,{r0,r1,r2,r3}
020500b4  stmdb sp!,{r4,r5,r6,lr}
020500b8  ldr r0,[sp,#0x10]
020500bc  mov r6,r1
020500c0  ldr r3,[r0,#0x1c]
020500c4  add r5,r0,#0x20
020500c8  ands r1,r3,#0x3
020500cc  mov r0,r3, asr #0x2
020500d0  moveq r1,#0x0
020500d4  streq r1,[r5,r0,lsl #0x2]
020500d8  ldr r2,[sp,#0x10]
020500dc  mov r1,#0x80
020500e0  add r4,r2,#0x20
020500e4  strb r1,[r4,r3]
020500e8  add r3,r3,#0x1
020500ec  ands r1,r3,#0x3
020500f0  beq 0x02050108
020500f4  mov r2,#0x0
020500f8  strb r2,[r4,r3]
020500fc  add r3,r3,#0x1
02050100  ands r1,r3,#0x3
02050104  bne 0x020500f8
02050108  ldr r1,[sp,#0x10]
0205010c  add r0,r0,#0x1
02050110  ldr r1,[r1,#0x1c]
02050114  cmp r1,#0x38
02050118  blt 0x02050154
0205011c  cmp r0,#0x10
02050120  bge 0x02050138
02050124  mov r1,#0x0
02050128  str r1,[r5,r0,lsl #0x2]
0205012c  add r0,r0,#0x1
02050130  cmp r0,#0x10
02050134  blt 0x02050128
02050138  ldr r1,[0x20502a8]
0205013c  ldr r0,[sp,#0x10]
02050140  ldr r3,[r1,#0x0]
02050144  mov r1,r5
02050148  mov r2,#0x40
0205014c  blx r3
02050150  mov r0,#0x0
02050154  cmp r0,#0xe
02050158  bge 0x02050170
0205015c  mov r1,#0x0
02050160  str r1,[r5,r0,lsl #0x2]
02050164  add r0,r0,#0x1
02050168  cmp r0,#0xe
0205016c  blt 0x02050160
02050170  ldr r0,[sp,#0x10]
02050174  mov r1,r5
02050178  ldr r2,[r0,#0x14]
0205017c  ldr r3,[0x20502a8]
02050180  strb r2,[r4,#0x3f]
02050184  mov r0,r2, lsr #0x8
02050188  strb r0,[r4,#0x3e]
0205018c  mov r0,r2, lsr #0x10
02050190  strb r0,[r4,#0x3d]
02050194  mov r0,r2, lsr #0x18
02050198  strb r0,[r4,#0x3c]
0205019c  ldr r0,[sp,#0x10]
020501a0  mov r2,#0x40
020501a4  ldr r5,[r0,#0x18]
020501a8  strb r5,[r4,#0x3b]
020501ac  mov r0,r5, lsr #0x8
020501b0  strb r0,[r4,#0x3a]
020501b4  mov r0,r5, lsr #0x10
020501b8  strb r0,[r4,#0x39]
020501bc  mov r0,r5, lsr #0x18
020501c0  strb r0,[r4,#0x38]
020501c4  ldr r0,[sp,#0x10]
020501c8  ldr r3,[r3,#0x0]
020501cc  blx r3
020501d0  ldr r0,[sp,#0x10]
020501d4  add r1,sp,#0x10
020501d8  ldr r3,[r0,#0x0]
020501dc  mov r0,#0x0
020501e0  mov r2,r3, lsr #0x18
020501e4  strb r2,[r6,#0x0]
020501e8  mov r2,r3, lsr #0x10
020501ec  strb r2,[r6,#0x1]
020501f0  mov r2,r3, lsr #0x8
020501f4  strb r2,[r6,#0x2]
020501f8  strb r3,[r6,#0x3]
020501fc  ldr r3,[sp,#0x10]
02050200  mov r2,#0x4
02050204  ldr r4,[r3,#0x4]
02050208  mov r3,r4, lsr #0x18
0205020c  strb r3,[r6,#0x4]
02050210  mov r3,r4, lsr #0x10
02050214  strb r3,[r6,#0x5]
02050218  mov r3,r4, lsr #0x8
0205021c  strb r3,[r6,#0x6]
02050220  strb r4,[r6,#0x7]
02050224  ldr r3,[sp,#0x10]
02050228  ldr r4,[r3,#0x8]
0205022c  mov r3,r4, lsr #0x18
02050230  strb r3,[r6,#0x8]
02050234  mov r3,r4, lsr #0x10
02050238  strb r3,[r6,#0x9]
0205023c  mov r3,r4, lsr #0x8
02050240  strb r3,[r6,#0xa]
02050244  strb r4,[r6,#0xb]
02050248  ldr r3,[sp,#0x10]
0205024c  ldr r4,[r3,#0xc]
02050250  mov r3,r4, lsr #0x18
02050254  strb r3,[r6,#0xc]
02050258  mov r3,r4, lsr #0x10
0205025c  strb r3,[r6,#0xd]
02050260  mov r3,r4, lsr #0x8
02050264  strb r3,[r6,#0xe]
02050268  strb r4,[r6,#0xf]
0205026c  ldr r3,[sp,#0x10]
02050270  ldr r4,[r3,#0x10]
02050274  mov r3,r4, lsr #0x18
02050278  strb r3,[r6,#0x10]
0205027c  mov r3,r4, lsr #0x10
02050280  strb r3,[r6,#0x11]
02050284  mov r3,r4, lsr #0x8
02050288  strb r3,[r6,#0x12]
0205028c  strb r4,[r6,#0x13]
02050290  ldr r3,[sp,#0x10]
02050294  str r0,[r3,#0x1c]
02050298  bl 0x0205174c
0205029c  ldmia sp!,{r4,r5,r6,lr}
020502a0  add sp,sp,#0x10
020502a4  bx lr
