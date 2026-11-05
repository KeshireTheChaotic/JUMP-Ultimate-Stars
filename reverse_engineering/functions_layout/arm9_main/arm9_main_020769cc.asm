020769cc  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
020769d0  sub sp,sp,#0xc
020769d4  mov r10,r0
020769d8  mov r9,r1
020769dc  bl 0x02076c18
020769e0  mov r7,#0x0
020769e4  mov r5,r7
020769e8  mov r4,r7
020769ec  mov r6,#0x1
020769f0  mov r0,r5, lsl #0x2
020769f4  ldrsh r1,[r9,r0]
020769f8  mov r0,r10
020769fc  bl 0x02076c98
02076a00  cmp r0,#0x0
02076a04  beq 0x02076a50
02076a08  ldrb r0,[r0,#0x6]
02076a0c  cmp r0,#0x0
02076a10  bne 0x02076a50
02076a14  add r0,r9,r5, lsl #0x2
02076a18  ldrb r3,[r0,#0x3]
02076a1c  mov r1,r5, lsl #0x2
02076a20  tst r3,#0x10
02076a24  beq 0x02076a50
02076a28  ldrb r2,[r0,#0x2]
02076a2c  mov r0,r10
02076a30  stmia sp,{r3,r4}
02076a34  and r3,r2,#0xf0
02076a38  mov r3,r3, asr #0x4
02076a3c  ldrsh r1,[r9,r1]
02076a40  and r2,r2,#0xf
02076a44  and r3,r3,#0xff
02076a48  bl 0x02076e38
02076a4c  orr r7,r7,r6, lsl r5
02076a50  add r5,r5,#0x1
02076a54  cmp r5,#0x10
02076a58  blt 0x020769f0
02076a5c  mov r6,#0x0
02076a60  mov r4,#0x0
02076a64  mov r5,#0x4
02076a68  mov r11,r4, lsl #0x1c
02076a6c  and r0,r5,#0xf
02076a70  orr r0,r0,r11, lsr #0x18
02076a74  and r0,r0,#0xff
02076a78  mov r8,#0x0
02076a7c  str r0,[sp,#0x8]
02076a80  mov r0,#0x1
02076a84  tst r7,r0, lsl r8
02076a88  bne 0x02076af8
02076a8c  mov r0,r8, lsl #0x2
02076a90  ldrsh r1,[r9,r0]
02076a94  mov r0,r10
02076a98  bl 0x02076c98
02076a9c  cmp r0,#0x0
02076aa0  beq 0x02076af8
02076aa4  ldrb r0,[r0,#0x6]
02076aa8  cmp r0,r6
02076aac  addeq r2,r9,r8, lsl #0x2
02076ab0  ldrbeq r1,[r2,#0x2]
02076ab4  ldreq r0,[sp,#0x8]
02076ab8  moveq r12,r8, lsl #0x2
02076abc  cmpeq r1,r0
02076ac0  bne 0x02076af8
02076ac4  ldrb r3,[r2,#0x3]
02076ac8  and r2,r1,#0xf
02076acc  and r1,r1,#0xf0
02076ad0  mov r1,r1, asr #0x4
02076ad4  str r3,[sp,#0x0]
02076ad8  and r3,r1,#0xff
02076adc  mov r1,#0x0
02076ae0  str r1,[sp,#0x4]
02076ae4  ldrsh r1,[r9,r12]
02076ae8  mov r0,r10
02076aec  bl 0x02076e38
02076af0  mov r0,#0x1
02076af4  orr r7,r7,r0, lsl r8
02076af8  add r8,r8,#0x1
02076afc  cmp r8,#0x10
02076b00  blt 0x02076a80
02076b04  subs r5,r5,#0x1
02076b08  bpl 0x02076a6c
02076b0c  add r4,r4,#0x1
02076b10  cmp r4,#0x4
02076b14  blt 0x02076a64
02076b18  add r6,r6,#0x1
02076b1c  cmp r6,#0x3
02076b20  blt 0x02076a60
02076b24  ldr r1,[r10,#0x558]
02076b28  cmp r1,#0x0
02076b2c  beq 0x02076b58
02076b30  b 0x02076b50
02076b34  ldrb r0,[r1,#0x40]
02076b38  cmp r0,#0x0
02076b3c  bne 0x02076b4c
02076b40  mov r0,r10
02076b44  bl 0x02077e70
02076b48  b 0x02076b58
02076b4c  ldr r1,[r1,#0x0]
02076b50  cmp r1,#0x0
02076b54  bne 0x02076b34
02076b58  mov r0,r10
02076b5c  bl 0x02077aa8
02076b60  mov r0,r10
02076b64  bl 0x02077610
02076b68  mov r0,r10
02076b6c  bl 0x020772e4
02076b70  mov r0,r10
02076b74  bl 0x02077768
02076b78  add r1,r10,#0xfe
02076b7c  add r0,r9,#0x40
02076b80  add r1,r1,#0x500
02076b84  mov r2,#0x1a
02076b88  bl 0x02051890
02076b8c  ldrb r2,[r10,#0x5f2]
02076b90  mov r1,#0x10
02076b94  add r0,r10,#0x500
02076b98  orr r2,r2,#0x10
02076b9c  strb r2,[r10,#0x5f2]
02076ba0  strb r1,[r10,#0x5cd]
02076ba4  ldrsb r1,[r0,#0xcc]
02076ba8  ldrsb r0,[r0,#0xcd]
02076bac  cmp r0,r1
02076bb0  strbgt r1,[r10,#0x5cd]
02076bb4  add sp,sp,#0xc
02076bb8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
