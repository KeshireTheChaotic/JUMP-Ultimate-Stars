02154098  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0215409c  sub sp,sp,#0x28
021540a0  mov r7,r0
021540a4  ldr r0,[r7,#0x4]
021540a8  mov r2,#0x48
021540ac  ldr r4,[r0,#0x10]
021540b0  ldr r1,[r0,#0x124]
021540b4  ldr r3,[r4,#0x330]
021540b8  mov r0,r4
021540bc  ldr r5,[r3,#0x38]
021540c0  ldr r3,[r3,#0x34]
021540c4  add r5,r5,r1, lsl #0x6
021540c8  ldrb r1,[r5,#0x2c]
021540cc  mla r6,r1,r2,r3
021540d0  bl 0x02153808
021540d4  mov r1,#0x28
021540d8  mla r1,r0,r1,r4
021540dc  ldr r0,[r1,#0xd8]
021540e0  mov r1,#0x1
021540e4  ldr r0,[r0,#0x4]
021540e8  blx 0x021b6214
021540ec  ldrb r0,[r5,#0x2c]
021540f0  strb r0,[r4,#0x35c]
021540f4  ldr r0,[r7,#0x4]
021540f8  ldr r0,[r0,#0x124]
021540fc  strb r0,[r4,#0x35e]
02154100  ldr r0,[r4,#0x20]
02154104  bl 0x02154354
02154108  ldr r0,[r4,#0x20]
0215410c  mov r1,r5
02154110  ldr r0,[r0,#0x4]
02154114  ldr r0,[r0,#0x64]
02154118  ldr r2,[r0,#0x0]
0215411c  ldr r2,[r2,#0x68]
02154120  blx r2
02154124  mov r0,#0x18000
02154128  str r0,[sp,#0x14]
0215412c  ldr r0,[r4,#0x20]
02154130  add r1,sp,#0x14
02154134  bl 0x0214ef60
02154138  ldr r0,[r4,#0x4c]
0215413c  mov r1,#0x1
02154140  ldr r0,[r0,#0x4]
02154144  ldr r2,[r0,#0x0]
02154148  ldr r2,[r2,#0xd8]
0215414c  blx r2
02154150  mov r0,r5
02154154  bl 0x0214dfa8
02154158  mov r1,r0
0215415c  ldr r0,[r4,#0x4c]
02154160  mov r2,#0x0
02154164  ldr r0,[r0,#0x4]
02154168  bl 0x02023894
0215416c  ldr r0,[r4,#0x4c]
02154170  ldr r0,[r0,#0x4]
02154174  ldr r0,[r0,#0x68]
02154178  ldr r1,[r0,#0x0]
0215417c  ldr r1,[r1,#0x6c]
02154180  blx r1
02154184  ldrh r0,[r6,#0x2c]
02154188  mov r2,#0x0
0215418c  strh r0,[sp,#0x18]
02154190  ldrh r0,[r6,#0x2e]
02154194  strh r0,[sp,#0x1a]
02154198  ldrb r3,[r6,#0x44]
0215419c  b 0x02154224
021541a0  add r1,r6,r2
021541a4  ldr r0,[r7,#0x4]
021541a8  ldrb r1,[r1,#0x38]
021541ac  ldr r0,[r0,#0x124]
021541b0  cmp r1,r0
021541b4  bne 0x02154220
021541b8  ldrb r3,[r6,#0x44]
021541bc  mov r1,#0xc
021541c0  ldr r0,[0x215434c]
021541c4  sub r5,r3,#0x1
021541c8  mov r3,#0x30
021541cc  mul r1,r2,r1
021541d0  mla r2,r5,r3,r0
021541d4  ldrsh r7,[sp,#0x18]
021541d8  ldr r2,[r1,r2]
021541dc  ldrsh r5,[sp,#0x1a]
021541e0  add r7,r2,r7, lsl #0xc
021541e4  mov r2,r7, asr #0xb
021541e8  add r2,r7,r2, lsr #0x14
021541ec  mov r2,r2, asr #0xc
021541f0  strh r2,[sp,#0x18]
021541f4  ldrb r2,[r6,#0x44]
021541f8  sub r2,r2,#0x1
021541fc  mla r0,r2,r3,r0
02154200  add r0,r1,r0
02154204  ldr r0,[r0,#0x4]
02154208  add r1,r0,r5, lsl #0xc
0215420c  mov r0,r1, asr #0xb
02154210  add r0,r1,r0, lsr #0x14
02154214  mov r0,r0, asr #0xc
02154218  strh r0,[sp,#0x1a]
0215421c  b 0x0215422c
02154220  add r2,r2,#0x1
02154224  cmp r2,r3
02154228  blt 0x021541a0
0215422c  ldr r0,[r4,#0x8]
02154230  bl 0x02154380
02154234  mov r1,r0
02154238  add r0,sp,#0x1c
0215423c  bl 0x0214fa00
02154240  ldr r1,[r4,#0x344]
02154244  add r0,r4,#0x300
02154248  rsb r1,r1,#0x0
0215424c  str r1,[sp,#0xc]
02154250  ldrsh r1,[r0,#0x54]
02154254  ldrsh r2,[sp,#0x18]
02154258  ldr r3,[sp,#0x1c]
0215425c  add r0,sp,#0x10
02154260  sub r1,r2,r1
02154264  add r2,r3,r1, lsl #0xc
02154268  add r1,sp,#0xc
0215426c  str r2,[sp,#0x10]
02154270  bl 0x02153260
02154274  ldr r0,[sp,#0x10]
02154278  ldrsh r3,[sp,#0x1a]
0215427c  str r0,[sp,#0x1c]
02154280  ldr r0,[r4,#0x344]
02154284  ldr r5,[sp,#0x20]
02154288  rsb r0,r0,#0x0
0215428c  str r0,[sp,#0x4]
02154290  add r0,r4,#0x300
02154294  ldrsh r2,[r0,#0x56]
02154298  add r0,sp,#0x8
0215429c  add r1,sp,#0x4
021542a0  sub r2,r3,r2
021542a4  add r2,r5,r2, lsl #0xc
021542a8  str r2,[sp,#0x8]
021542ac  bl 0x02153260
021542b0  ldr r1,[sp,#0x8]
021542b4  add r0,r4,#0x348
021542b8  str r1,[sp,#0x20]
021542bc  add r1,sp,#0x1c
021542c0  bl 0x02154390
021542c4  ldr r0,[r4,#0x8]
021542c8  ldr r1,[0x2154350]
021542cc  mov r2,#0x0
021542d0  bl 0x02151454
021542d4  ldr r0,[r0,#0x4]
021542d8  add r1,sp,#0x1c
021542dc  mov r2,#0x0
021542e0  bl 0x02013c48
021542e4  add r2,r4,#0x300
021542e8  ldrsh r1,[r2,#0x58]
021542ec  ldr r0,[sp,#0x1c]
021542f0  mov r3,#0x1000
021542f4  rsb r1,r0,r1, lsl #0xc
021542f8  mov r0,r1, asr #0xb
021542fc  add r0,r1,r0, lsr #0x14
02154300  mov r0,r0, asr #0xc
02154304  strh r0,[r2,#0x58]
02154308  ldrsh r5,[r2,#0x5a]
0215430c  ldr r1,[sp,#0x20]
02154310  mov r0,r4
02154314  rsb r5,r1,r5, lsl #0xc
02154318  mov r1,r5, asr #0xb
0215431c  add r1,r5,r1, lsr #0x14
02154320  mov r1,r1, asr #0xc
02154324  strh r1,[r2,#0x5a]
02154328  str r3,[sp,#0x0]
0215432c  ldrb r1,[r4,#0x35c]
02154330  add r2,sp,#0x0
02154334  add r3,sp,#0x18
02154338  bl 0x021539d4
0215433c  mov r0,r4
02154340  bl 0x0215384c
02154344  add sp,sp,#0x28
02154348  ldmia sp!,{r3,r4,r5,r6,r7,pc}
