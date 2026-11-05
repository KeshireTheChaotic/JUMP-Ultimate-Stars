021c9d84  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
021c9d88  sub sp,sp,#0x24
021c9d8c  mov r10,r0
021c9d90  ldr r0,[r10,#0x20]
021c9d94  mov r1,#0x0
021c9d98  ldr r2,[r0,#0x0]
021c9d9c  ldr r2,[r2,#0x34]
021c9da0  blx r2
021c9da4  ldr r0,[r10,#0x38]
021c9da8  ldr r0,[r0,#0x50]
021c9dac  ldr r1,[r0,#0x0]
021c9db0  ldr r1,[r1,#0x4c]
021c9db4  blx r1
021c9db8  ldr r4,[r10,#0x34]
021c9dbc  str r0,[sp,#0x8]
021c9dc0  mov r0,r4
021c9dc4  ldr r2,[r0,#0x0]
021c9dc8  add r1,r4,#0xa4
021c9dcc  ldr r2,[r2,#0x80]
021c9dd0  str r1,[sp,#0x1c]
021c9dd4  blx r2
021c9dd8  str r0,[sp,#0x14]
021c9ddc  mov r0,r4
021c9de0  ldr r1,[r0,#0x0]
021c9de4  ldr r1,[r1,#0x84]
021c9de8  blx r1
021c9dec  ldr r1,[r10,#0x54]
021c9df0  str r0,[sp,#0x10]
021c9df4  ldr r0,[r1,#0x30]
021c9df8  ldr r1,[r0,#0x0]
021c9dfc  ldr r1,[r1,#0x64]
021c9e00  blx r1
021c9e04  ldr r7,[r0,#0x10]
021c9e08  ldrb r0,[r10,#0x175]
021c9e0c  ldr r1,[r10,#0x54]
021c9e10  ldrh r4,[r10,#0x24]
021c9e14  cmp r0,#0x0
021c9e18  movne r9,#0x10
021c9e1c  moveq r9,#0x8
021c9e20  cmp r0,#0x0
021c9e24  movne r0,#0x80
021c9e28  strne r0,[sp,#0x4]
021c9e2c  moveq r0,#0x40
021c9e30  streq r0,[sp,#0x4]
021c9e34  ldr r0,[r10,#0x5c]
021c9e38  str r0,[sp,#0xc]
021c9e3c  ldr r0,[r1,#0x30]
021c9e40  ldr r1,[r0,#0x0]
021c9e44  ldr r1,[r1,#0x64]
021c9e48  blx r1
021c9e4c  ldrh r0,[r0,#0x8]
021c9e50  mov r8,#0x0
021c9e54  cmp r0,#0x10
021c9e58  movne r8,#0x10
021c9e5c  tst r4,#0x1
021c9e60  beq 0x021c9ea4
021c9e64  ldr r0,[r10,#0x54]
021c9e68  ldr r0,[r0,#0x30]
021c9e6c  ldr r1,[r0,#0x0]
021c9e70  ldr r1,[r1,#0x64]
021c9e74  blx r1
021c9e78  ldrb r1,[r10,#0x173]
021c9e7c  mov r3,r0
021c9e80  ldr r0,[sp,#0x10]
021c9e84  add r1,r1,r8
021c9e88  str r1,[sp,#0x0]
021c9e8c  ldrb r1,[r10,#0x173]
021c9e90  mov r2,#0x20
021c9e94  add r1,r8,r1, lsl #0x4
021c9e98  add r1,r7,r1, lsl #0x1
021c9e9c  bl 0x0204572c
021c9ea0  b 0x021c9f78
021c9ea4  mov r1,r4, asr #0x5
021c9ea8  and r2,r1,#0x1f
021c9eac  mov r0,r4, asr #0xa
021c9eb0  and r1,r4,#0x1f
021c9eb4  and r0,r0,#0x1f
021c9eb8  orr r2,r2,r2, lsl #0x5
021c9ebc  orr r1,r1,r1, lsl #0x5
021c9ec0  orr r0,r0,r0, lsl #0x5
021c9ec4  mov r11,r2, lsr #0x5
021c9ec8  mov r5,r1, lsr #0x5
021c9ecc  mov r6,r0, lsr #0x5
021c9ed0  mov r4,#0x0
021c9ed4  add r7,r7,r8, lsl #0x1
021c9ed8  ldrb r0,[r10,#0x173]
021c9edc  mov r1,#0xff
021c9ee0  add r0,r4,r0, lsl #0x4
021c9ee4  mov r0,r0, lsl #0x1
021c9ee8  ldrh r8,[r0,r7]
021c9eec  mov r0,r8, asr #0xa
021c9ef0  and r2,r0,#0x1f
021c9ef4  mul r0,r2,r6
021c9ef8  bl 0x0200d338
021c9efc  and r1,r8,#0x1f
021c9f00  str r0,[sp,#0x18]
021c9f04  mul r0,r1,r5
021c9f08  mov r1,#0xff
021c9f0c  bl 0x0200d338
021c9f10  mov r1,r8, asr #0x5
021c9f14  and r1,r1,#0x1f
021c9f18  mov r8,r0
021c9f1c  mul r0,r1,r11
021c9f20  mov r1,#0xff
021c9f24  bl 0x0200d338
021c9f28  ldr r1,[sp,#0x18]
021c9f2c  mov r0,r0, lsl #0x1b
021c9f30  mov r2,r1, lsl #0x1b
021c9f34  and r1,r8,#0x1f
021c9f38  orr r0,r1,r0, lsr #0x16
021c9f3c  orr r0,r0,r2, lsr #0x11
021c9f40  orr r2,r0,#0x8000
021c9f44  mov r1,r4, lsl #0x1
021c9f48  ldr r0,[0x21ca0f8]
021c9f4c  add r4,r4,#0x1
021c9f50  strh r2,[r0,r1]
021c9f54  cmp r4,#0x10
021c9f58  bcc 0x021c9ed8
021c9f5c  ldr r1,[0x21ca0f8]
021c9f60  ldr r0,[sp,#0x10]
021c9f64  mov r4,#0x0
021c9f68  mov r3,r1
021c9f6c  mov r2,#0x20
021c9f70  str r4,[sp,#0x0]
021c9f74  bl 0x0204572c
021c9f78  mov r0,r0, lsr #0x5
021c9f7c  mov r5,r0, lsl #0x1c
021c9f80  ldr r0,[0x21ca0fc]
021c9f84  mov r4,#0x400
021c9f88  mov r8,#0x0
021c9f8c  sub r11,r0,#0xfe00
021c9f90  rsb r4,r4,#0x0
021c9f94  b 0x021ca0dc
021c9f98  ldr r6,[r10,#0x58]
021c9f9c  mov r2,r8, lsl #0x3
021c9fa0  ldrh r1,[r6,r2]
021c9fa4  ldr r0,[0x21ca0fc]
021c9fa8  cmp r1,r0
021c9fac  bne 0x021c9fd0
021c9fb0  add r0,r6,r2
021c9fb4  ldrh r1,[r0,#0x2]
021c9fb8  ldr r0,[r10,#0x54]
021c9fbc  ldr r2,[r0,#0x0]
021c9fc0  ldr r2,[r2,#0x1c]
021c9fc4  blx r2
021c9fc8  mov r1,r8, lsl #0x3
021c9fcc  strh r0,[r6,r1]
021c9fd0  ldr r0,[sp,#0x8]
021c9fd4  ldr r2,[r10,#0x58]
021c9fd8  ldr r1,[r0,#0x10]
021c9fdc  add r2,r2,r8, lsl #0x3
021c9fe0  mov r0,r1, asr #0xb
021c9fe4  add r1,r1,r0, lsr #0x14
021c9fe8  ldr r0,[sp,#0x8]
021c9fec  ldrh r6,[r2,#0x4]
021c9ff0  ldr r3,[r0,#0x14]
021c9ff4  ldrh r2,[r2,#0x6]
021c9ff8  mov r0,r3, asr #0xb
021c9ffc  add r0,r3,r0, lsr #0x14
021ca000  add r7,r2,r0, asr #0xc
021ca004  ldrb r0,[r10,#0x10]
021ca008  add r6,r6,r1, asr #0xc
021ca00c  mov r0,r0, lsl #0x19
021ca010  movs r0,r0, lsr #0x1f
021ca014  beq 0x021ca034
021ca018  cmp r6,#0x100
021ca01c  cmplt r7,#0xc0
021ca020  bge 0x021ca0d8
021ca024  adds r0,r6,r9
021ca028  beq 0x021ca0d8
021ca02c  adds r0,r7,r9
021ca030  beq 0x021ca0d8
021ca034  ldr r0,[sp,#0x1c]
021ca038  add r0,r0,#0x400
021ca03c  bl 0x02041204
021ca040  and r3,r6,r11
021ca044  mov r6,r0
021ca048  and r1,r7,#0xff
021ca04c  strh r1,[r6,#0x0]
021ca050  ldrb r2,[r10,#0x175]
021ca054  add r0,sp,#0x20
021ca058  mov r1,r10
021ca05c  orr r2,r3,r2, lsl #0xe
021ca060  strh r2,[r6,#0x2]
021ca064  bl 0x021ae0ac
021ca068  add r0,sp,#0x20
021ca06c  ldr r1,[r0,#0x0]
021ca070  ldr r2,[r6,#0x4]
021ca074  mov r0,r1, asr #0xb
021ca078  add r0,r1,r0, lsr #0x14
021ca07c  mov r0,r0, asr #0x12
021ca080  bic r2,r2,#0xc00
021ca084  mov r0,r0, lsl #0x1e
021ca088  orr r0,r2,r0, lsr #0x14
021ca08c  bic r0,r0,#0xf000
021ca090  orr r0,r0,r5, lsr #0x10
021ca094  str r0,[r6,#0x4]
021ca098  ldr r1,[r10,#0x54]
021ca09c  ldr r3,[r10,#0x58]
021ca0a0  mov r2,r8, lsl #0x3
021ca0a4  ldrh r7,[r3,r2]
021ca0a8  ldr r2,[sp,#0x4]
021ca0ac  ldr r1,[r1,#0x74]
021ca0b0  mov r3,r2
021ca0b4  mla r1,r3,r7,r1
021ca0b8  ldr r0,[sp,#0x14]
021ca0bc  bl 0x02045570
021ca0c0  ldr r1,[r6,#0x4]
021ca0c4  mov r0,r0, lsr #0x6
021ca0c8  and r0,r0,r4, lsr #0x16
021ca0cc  and r1,r1,r4
021ca0d0  orr r0,r1,r0
021ca0d4  str r0,[r6,#0x4]
021ca0d8  add r8,r8,#0x1
021ca0dc  ldr r0,[sp,#0xc]
021ca0e0  cmp r8,r0
021ca0e4  bcc 0x021c9f98
021ca0e8  mov r0,r10
021ca0ec  bl 0x0201593c
021ca0f0  add sp,sp,#0x24
021ca0f4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
