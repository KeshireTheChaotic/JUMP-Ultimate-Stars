021640c0  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
021640c4  sub sp,sp,#0xc
021640c8  mov r8,r1
021640cc  mov r7,r3
021640d0  bl 0x02163f64
021640d4  mov r5,r0
021640d8  ldr r1,[sp,#0x28]
021640dc  add r0,sp,#0x0
021640e0  bl 0x021634b4
021640e4  ldrb r4,[sp,#0x2c]
021640e8  sub r0,r5,#0x1
021640ec  ldr r2,[sp,#0x0]
021640f0  mul r1,r0,r4
021640f4  add r0,r1,r1, lsr #0x1f
021640f8  mov r0,r0, asr #0x1
021640fc  add r0,r2,r0, lsl #0xc
02164100  sub r6,r7,#0x1
02164104  sub r7,r7,r5
02164108  str r0,[sp,#0x0]
0216410c  add r5,sp,#0x0
02164110  b 0x02164130
02164114  ldr r0,[r8,r6,lsl #0x2]
02164118  mov r1,r5
0216411c  bl 0x021639a8
02164120  ldr r0,[sp,#0x0]
02164124  sub r6,r6,#0x1
02164128  sub r0,r0,r4, lsl #0xc
0216412c  str r0,[sp,#0x0]
02164130  cmp r6,r7
02164134  bge 0x02164114
02164138  add sp,sp,#0xc
0216413c  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
