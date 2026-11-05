020519c8  stmdb sp!,{r4,r5,r6,lr}
020519cc  ldr r5,[r0],#0x4
020519d0  mov r2,r5, lsr #0x8
020519d4  cmp r2,#0x0
020519d8  ble 0x02051a54
020519dc  ldrb lr,[r0],#0x1
020519e0  mov r4,#0x8
020519e4  subs r4,r4,#0x1
020519e8  blt 0x020519d4
020519ec  tst lr,#0x80
020519f0  bne 0x02051a08
020519f4  ldrb r6,[r0],#0x1
020519f8  swpb r6,r6,r1
020519fc  add r1,r1,#0x1
02051a00  sub r2,r2,#0x1
02051a04  b 0x02051a44
02051a08  ldrb r5,[r0,#0x0]
02051a0c  mov r6,#0x3
02051a10  add r3,r6,r5, asr #0x4
02051a14  ldrb r6,[r0],#0x1
02051a18  and r5,r6,#0xf
02051a1c  mov r12,r5, lsl #0x8
02051a20  ldrb r6,[r0],#0x1
02051a24  orr r5,r6,r12
02051a28  add r12,r5,#0x1
02051a2c  sub r2,r2,r3
02051a30  ldrb r5,[r1,-r12]
02051a34  swpb r5,r5,r1
02051a38  add r1,r1,#0x1
02051a3c  subs r3,r3,#0x1
02051a40  bgt 0x02051a30
02051a44  cmp r2,#0x0
02051a48  movgt lr,lr, lsl #0x1
02051a4c  bgt 0x020519e4
02051a50  b 0x020519d4
02051a54  ldmia sp!,{r4,r5,r6,lr}
02051a58  bx lr
