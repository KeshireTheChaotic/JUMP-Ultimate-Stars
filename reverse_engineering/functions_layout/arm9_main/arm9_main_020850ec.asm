020850ec  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
020850f0  sub sp,sp,#0x28
020850f4  ldr r1,[r0,#0x4]
020850f8  add r0,sp,#0x24
020850fc  ldr r6,[r1,#0x10]
02085100  ldr r1,[r6,#0x4]
02085104  ldr r8,[r6,#0xc]
02085108  ldr r2,[r1,#0x40]
0208510c  ldr r1,[r6,#0x8]
02085110  ldr r2,[r2,#0x4]
02085114  ldr r7,[r6,#0x10]
02085118  ldr r2,[r2,#0x50]
0208511c  ldrsh r9,[r8,#0x0]
02085120  ldr r5,[r2,#0xc]
02085124  ldr r4,[r2,#0x10]
02085128  bl 0x02084e7c
0208512c  add r1,sp,#0x24
02085130  sub r0,r5,#0x80000
02085134  ldr r1,[r1,#0x0]
02085138  rsb r5,r0,#0x0
0208513c  add r0,r1,r9, lsl #0xc
02085140  cmp r5,r0
02085144  ldrshlt r0,[r8,#0x8]
02085148  movlt r0,r0, lsl #0xc
0208514c  strlt r0,[r7,#0x4]
02085150  blt 0x020851f4
02085154  ldr r1,[r6,#0x8]
02085158  add r0,sp,#0x20
0208515c  ldrsh r9,[r8,#0x4]
02085160  bl 0x02084e7c
02085164  add r0,sp,#0x20
02085168  ldr r0,[r0,#0x0]
0208516c  add r0,r0,r9, lsl #0xc
02085170  cmp r0,r5
02085174  ldrshlt r0,[r8,#0xc]
02085178  movlt r0,r0, lsl #0xc
0208517c  strlt r0,[r7,#0x4]
02085180  blt 0x020851f4
02085184  ldr r1,[r6,#0x8]
02085188  add r0,sp,#0x14
0208518c  ldrsh r9,[r8,#0x0]
02085190  bl 0x02084e7c
02085194  add r1,sp,#0x14
02085198  ldr r1,[r1,#0x0]
0208519c  add r0,sp,#0x1c
020851a0  add r1,r1,r9, lsl #0xc
020851a4  sub r1,r5,r1
020851a8  str r1,[sp,#0x18]
020851ac  ldrsh r3,[r8,#0xc]
020851b0  ldrsh r1,[r8,#0x8]
020851b4  add r2,sp,#0x18
020851b8  sub r1,r3,r1
020851bc  bl 0x020852f4
020851c0  add r0,sp,#0x1c
020851c4  ldr r3,[r0,#0x0]
020851c8  ldrsh r2,[r8,#0x4]
020851cc  ldrsh r1,[r8,#0x0]
020851d0  mov r0,r3, asr #0xb
020851d4  add r0,r3,r0, lsr #0x14
020851d8  mov r0,r0, asr #0xc
020851dc  sub r1,r2,r1
020851e0  bl 0x0200d12c
020851e4  ldrsh r1,[r8,#0x8]
020851e8  add r0,r1,r0
020851ec  mov r0,r0, lsl #0xc
020851f0  str r0,[r7,#0x4]
020851f4  ldr r1,[r6,#0x8]
020851f8  add r0,sp,#0x10
020851fc  ldrsh r5,[r8,#0x2]
02085200  bl 0x02084e90
02085204  add r1,sp,#0x10
02085208  sub r0,r4,#0x60000
0208520c  ldr r1,[r1,#0x0]
02085210  rsb r4,r0,#0x0
02085214  add r0,r1,r5, lsl #0xc
02085218  cmp r4,r0
0208521c  bge 0x02085238
02085220  ldrsh r1,[r8,#0xa]
02085224  ldr r0,[r7,#0x0]
02085228  add r0,r1,r0
0208522c  mov r0,r0, lsl #0xc
02085230  str r0,[r7,#0x8]
02085234  b 0x020852ec
02085238  ldr r1,[r6,#0x8]
0208523c  add r0,sp,#0xc
02085240  ldrsh r5,[r8,#0x6]
02085244  bl 0x02084e90
02085248  add r0,sp,#0xc
0208524c  ldr r0,[r0,#0x0]
02085250  add r0,r0,r5, lsl #0xc
02085254  cmp r0,r4
02085258  bge 0x02085274
0208525c  ldrsh r1,[r8,#0xe]
02085260  ldr r0,[r7,#0x0]
02085264  add r0,r1,r0
02085268  mov r0,r0, lsl #0xc
0208526c  str r0,[r7,#0x8]
02085270  b 0x020852ec
02085274  ldr r1,[r6,#0x8]
02085278  add r0,sp,#0x0
0208527c  ldrsh r5,[r8,#0x2]
02085280  bl 0x02084e90
02085284  add r1,sp,#0x0
02085288  ldr r1,[r1,#0x0]
0208528c  add r0,sp,#0x8
02085290  add r1,r1,r5, lsl #0xc
02085294  sub r1,r4,r1
02085298  str r1,[sp,#0x4]
0208529c  ldrsh r3,[r8,#0xe]
020852a0  ldrsh r1,[r8,#0xa]
020852a4  add r2,sp,#0x4
020852a8  sub r1,r3,r1
020852ac  bl 0x020852f4
020852b0  add r0,sp,#0x8
020852b4  ldr r3,[r0,#0x0]
020852b8  ldrsh r2,[r8,#0x6]
020852bc  ldrsh r1,[r8,#0x2]
020852c0  mov r0,r3, asr #0xb
020852c4  add r0,r3,r0, lsr #0x14
020852c8  mov r0,r0, asr #0xc
020852cc  sub r1,r2,r1
020852d0  bl 0x0200d12c
020852d4  ldrsh r2,[r8,#0xa]
020852d8  ldr r1,[r7,#0x0]
020852dc  add r1,r2,r1
020852e0  add r0,r0,r1
020852e4  mov r0,r0, lsl #0xc
020852e8  str r0,[r7,#0x8]
020852ec  add sp,sp,#0x28
020852f0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
