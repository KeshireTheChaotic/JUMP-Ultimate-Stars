02160908  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0216090c  sub sp,sp,#0xc
02160910  mov r9,r0
02160914  ldr r0,[r9,#0x20]
02160918  mov r7,#0x0
0216091c  ldr r0,[r0,#0xc]
02160920  mov r8,r1
02160924  ldr r6,[r0,#0x24]
02160928  mov r10,r7
0216092c  ldr r0,[r6,#0x14]
02160930  mov r11,#0x0
02160934  cmp r0,#0x0
02160938  ldrh r0,[r8,#0x4]
0216093c  cmp r0,#0x6
02160940  addcc sp,sp,#0xc
02160944  movcc r0,r11
02160948  ldmiacc sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0216094c  ldr r0,[r8,#0x0]
02160950  add r1,sp,#0x0
02160954  mov r2,#0x6
02160958  bl 0x02051890
0216095c  ldrh r0,[sp,#0x0]
02160960  mov r1,r0, lsl #0x1f
02160964  movs r1,r1, lsr #0x1f
02160968  beq 0x021609c8
0216096c  ldr r0,[r8,#0x0]
02160970  add r1,sp,#0x6
02160974  mov r2,#0x4
02160978  bl 0x02051890
0216097c  ldrh r2,[sp,#0x6]
02160980  ldrh r3,[sp,#0x8]
02160984  ldr r1,[0x2160ce8]
02160988  mov r2,r2, lsl #0x10
0216098c  mov r5,r2, lsr #0x11
02160990  mov r0,r3, lsl #0x1f
02160994  mov r2,r3, lsl #0x10
02160998  mov r4,r2, lsr #0x11
0216099c  cmp r5,r1
021609a0  mov r0,r0, lsr #0x1f
021609a4  mov r2,r11
021609a8  bne 0x021609b4
021609ac  cmp r4,r1
021609b0  moveq r2,#0x1
021609b4  cmp r2,#0x0
021609b8  movne r1,#0x4
021609bc  moveq r1,#0x3
021609c0  str r1,[r6,#0x18]
021609c4  b 0x021609f4
021609c8  mov r0,r0, lsl #0x18
021609cc  mov r0,r0, lsr #0x1b
021609d0  str r0,[r6,#0x18]
021609d4  ldrh r0,[sp,#0x0]
021609d8  ldrh r5,[sp,#0x2]
021609dc  ldrh r4,[sp,#0x4]
021609e0  mov r1,r0, lsl #0x1e
021609e4  mov r0,r0, lsl #0x1d
021609e8  ldrb r11,[sp,#0x1]
021609ec  mov r10,r1, lsr #0x1f
021609f0  mov r0,r0, lsr #0x1f
021609f4  ldr r1,[r6,#0x14]
021609f8  cmp r0,r1
021609fc  beq 0x02160a10
02160a00  ldr r0,[r6,#0x10]
02160a04  cmp r0,#0x4
02160a08  moveq r7,#0x1
02160a0c  b 0x02160cb8
02160a10  ldr r0,[r6,#0x18]
02160a14  cmp r0,#0x4
02160a18  addls pc,pc,r0, lsl #0x2
02160a1c  b 0x02160cb8
02160a20  b 0x02160cb8
02160a24  b 0x02160ca4
02160a28  b 0x02160a34
02160a2c  b 0x02160a80
02160a30  b 0x02160c64
02160a34  ldr r0,[r6,#0x10]
02160a38  cmp r0,#0x2
02160a3c  bne 0x02160cb8
02160a40  str r5,[r9,#0x8]
02160a44  strh r11,[r9,#0x1c]
02160a48  str r4,[r9,#0x14]
02160a4c  ldr r1,[r9,#0x4]
02160a50  ldr r0,[r9,#0x8]
02160a54  cmp r1,r0
02160a58  bhi 0x02160a6c
02160a5c  ldr r1,[r9,#0x14]
02160a60  ldr r0,[r9,#0x18]
02160a64  cmp r1,r0
02160a68  bls 0x02160a78
02160a6c  mov r0,#0x1
02160a70  str r0,[r6,#0x10]
02160a74  b 0x02160a80
02160a78  cmp r10,#0x0
02160a7c  beq 0x02160cb8
02160a80  ldr r0,[r6,#0x10]
02160a84  cmp r0,#0x2
02160a88  bne 0x02160b0c
02160a8c  mov r0,#0x3
02160a90  str r0,[r6,#0x10]
02160a94  ldrh r1,[r8,#0x4]
02160a98  ldr r0,[r6,#0x8]
02160a9c  cmp r1,r0
02160aa0  ldreq r0,[r6,#0x4]
02160aa4  streq r0,[r6,#0x1c]
02160aa8  ldreq r0,[r6,#0x8]
02160aac  streq r0,[r6,#0x20]
02160ab0  strne r0,[r6,#0x1c]
02160ab4  ldrne r0,[r6,#0x4]
02160ab8  strne r0,[r6,#0x20]
02160abc  ldr r1,[r6,#0x1c]
02160ac0  mov r0,#0x0
02160ac4  sub r1,r1,#0x4
02160ac8  str r1,[r6,#0x1c]
02160acc  ldr r1,[r6,#0x20]
02160ad0  sub r1,r1,#0x4
02160ad4  str r1,[r6,#0x20]
02160ad8  str r0,[r6,#0x24]
02160adc  str r0,[r6,#0x28]
02160ae0  str r0,[r6,#0x2c]
02160ae4  ldr r0,[r9,#0x14]
02160ae8  ldr r1,[r6,#0x20]
02160aec  add r0,r0,r1
02160af0  sub r0,r0,#0x1
02160af4  bl 0x0200d338
02160af8  str r0,[r6,#0x30]
02160afc  ldr r2,[0x2160cec]
02160b00  add r1,r6,#0x34
02160b04  mov r0,#0x0
02160b08  bl 0x0205174c
02160b0c  ldr r0,[r6,#0x18]
02160b10  cmp r0,#0x3
02160b14  bne 0x02160cb8
02160b18  ldr r0,[r6,#0x10]
02160b1c  cmp r0,#0x3
02160b20  bne 0x02160cb8
02160b24  ldr r0,[0x2160ce8]
02160b28  str r5,[r6,#0x28]
02160b2c  cmp r4,r0
02160b30  beq 0x02160ba0
02160b34  mov r10,r4, lsr #0x5
02160b38  add r0,r6,r10, lsl #0x2
02160b3c  and r5,r4,#0x1f
02160b40  mov r1,#0x1
02160b44  mov r1,r1, lsl r5
02160b48  ldr r0,[r0,#0x34]
02160b4c  ands r0,r1,r0
02160b50  bne 0x02160ba0
02160b54  ldr r2,[r6,#0x20]
02160b58  ldr r0,[r8,#0x0]
02160b5c  mul r3,r2,r4
02160b60  ldr r1,[r9,#0x14]
02160b64  add r0,r0,#0x4
02160b68  sub r1,r1,r3
02160b6c  cmp r2,r1
02160b70  movhi r2,r1
02160b74  ldr r1,[r9,#0x10]
02160b78  add r1,r1,r3
02160b7c  bl 0x02051890
02160b80  add r2,r6,#0x34
02160b84  ldr r1,[r2,r10,lsl #0x2]
02160b88  mov r0,#0x1
02160b8c  orr r0,r1,r0, lsl r5
02160b90  str r0,[r2,r10,lsl #0x2]
02160b94  ldr r0,[r6,#0x2c]
02160b98  add r0,r0,#0x1
02160b9c  str r0,[r6,#0x2c]
02160ba0  ldr r1,[r6,#0x2c]
02160ba4  ldr r0,[r6,#0x30]
02160ba8  cmp r1,r0
02160bac  bcs 0x02160c48
02160bb0  ldr r0,[r6,#0x24]
02160bb4  mov r1,r0, lsr #0x5
02160bb8  and r8,r0,#0x1f
02160bbc  mov r0,#0x0
02160bc0  mov r4,#0x1
02160bc4  mvn r2,#0x0
02160bc8  add r8,r8,#0x1
02160bcc  cmp r8,#0x20
02160bd0  bcc 0x02160c14
02160bd4  add r1,r1,#0x1
02160bd8  b 0x02160be0
02160bdc  add r1,r1,#0x1
02160be0  add r3,r6,r1, lsl #0x2
02160be4  ldr r3,[r3,#0x34]
02160be8  cmp r3,r2
02160bec  beq 0x02160bdc
02160bf0  mov r3,r1, lsl #0x2
02160bf4  add r3,r6,r3
02160bf8  ldr r3,[r3,#0x34]
02160bfc  mvn r3,r3
02160c00  mvn r5,r3
02160c04  sub r3,r3,#0x1
02160c08  and r3,r5,r3
02160c0c  clz r3,r3
02160c10  rsb r8,r3,#0x20
02160c14  ldr r3,[r6,#0x30]
02160c18  add r5,r8,r1, lsl #0x5
02160c1c  cmp r5,r3
02160c20  movcs r1,r0
02160c24  movcs r8,r0
02160c28  add r3,r6,r1, lsl #0x2
02160c2c  mov r5,r4, lsl r8
02160c30  ldr r3,[r3,#0x34]
02160c34  ands r3,r5,r3
02160c38  bne 0x02160bc8
02160c3c  add r0,r8,r1, lsl #0x5
02160c40  str r0,[r6,#0x24]
02160c44  b 0x02160cb8
02160c48  ldr r1,[0x2160ce8]
02160c4c  str r1,[r6,#0x24]
02160c50  ldr r0,[r6,#0x28]
02160c54  cmp r0,r1
02160c58  moveq r0,#0x4
02160c5c  streq r0,[r6,#0x10]
02160c60  b 0x02160cb8
02160c64  ldr r0,[r6,#0x10]
02160c68  cmp r0,#0x3
02160c6c  bne 0x02160c94
02160c70  str r5,[r6,#0x28]
02160c74  ldr r1,[r6,#0x28]
02160c78  ldr r0,[0x2160ce8]
02160c7c  cmp r1,r0
02160c80  bne 0x02160c94
02160c84  ldr r1,[r6,#0x24]
02160c88  cmp r1,r0
02160c8c  moveq r0,#0x4
02160c90  streq r0,[r6,#0x10]
02160c94  ldr r0,[r6,#0x10]
02160c98  cmp r0,#0x4
02160c9c  moveq r7,#0x1
02160ca0  b 0x02160cb8
02160ca4  mov r0,#0x1
02160ca8  str r0,[r6,#0x10]
02160cac  cmp r10,#0x0
02160cb0  movne r0,#0x0
02160cb4  strne r0,[r6,#0xc]
02160cb8  cmp r7,#0x0
02160cbc  beq 0x02160cdc
02160cc0  ldr r0,[r6,#0x14]
02160cc4  cmp r0,#0x0
02160cc8  moveq r0,#0x1
02160ccc  movne r0,#0x0
02160cd0  str r0,[r6,#0x14]
02160cd4  mov r0,#0x1
02160cd8  str r0,[r6,#0x10]
02160cdc  mov r0,r7
02160ce0  add sp,sp,#0xc
02160ce4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
