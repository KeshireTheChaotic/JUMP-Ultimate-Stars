02047d5c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02047d60  sub sp,sp,#0x28
02047d64  ldr r3,[r0,#0x34]
02047d68  ldr r4,[r0,#0xac]
02047d6c  str r0,[sp,#0x4]
02047d70  add r0,r4,#0x2
02047d74  add r2,r3,#0x800
02047d78  str r0,[sp,#0x1c]
02047d7c  ldrh r0,[r2,#0xca]
02047d80  str r1,[sp,#0x8]
02047d84  ldr r5,[r3,#0x8e0]
02047d88  str r0,[sp,#0x24]
02047d8c  ldrh r0,[r2,#0xc8]
02047d90  str r0,[sp,#0x20]
02047d94  mov r0,#0x0
02047d98  str r0,[sp,#0x18]
02047d9c  b 0x020480a8
02047da0  ldr r0,[sp,#0x8]
02047da4  ldr r1,[sp,#0x18]
02047da8  blx 0x0203be48
02047dac  str r0,[sp,#0x14]
02047db0  ldrsh r0,[r0,#0x2]
02047db4  str r0,[sp,#0x10]
02047db8  b 0x02048088
02047dbc  ldr r0,[sp,#0x10]
02047dc0  ldr r2,[sp,#0x10]
02047dc4  mov r1,r0, lsl #0x1
02047dc8  ldr r0,[sp,#0x1c]
02047dcc  ldr r3,[sp,#0x20]
02047dd0  ldrh r6,[r0,r1]
02047dd4  ldr r1,[sp,#0x24]
02047dd8  ldr r0,[sp,#0x4]
02047ddc  str r1,[sp,#0x0]
02047de0  ldr r1,[sp,#0x14]
02047de4  ldr r8,[r0,#0x0]
02047de8  ldrsh r1,[r1,#0x0]
02047dec  ldr r8,[r8,#0xd8]
02047df0  mov r7,#0x0
02047df4  blx r8
02047df8  mov r9,r0
02047dfc  ldr r0,[sp,#0x14]
02047e00  ldrsh r1,[r0,#0x0]
02047e04  b 0x02047e1c
02047e08  add r7,r7,r2
02047e0c  ldrb r0,[r3,#0x0]
02047e10  and r0,r0,#0x3f
02047e14  add r0,r0,#0x2
02047e18  add r6,r6,r0, lsl #0x1
02047e1c  add r3,r4,r6
02047e20  ldrb r2,[r3,#0x1]
02047e24  add r0,r7,r2
02047e28  cmp r0,r1
02047e2c  bls 0x02047e08
02047e30  b 0x0204806c
02047e34  sub r10,r0,r7
02047e38  add r0,r4,r6
02047e3c  ldrb r2,[r0,#0x1]
02047e40  str r0,[sp,#0xc]
02047e44  ldr r0,[sp,#0xc]
02047e48  sub r8,r1,r7
02047e4c  ldrb r1,[r0,#0x0]
02047e50  cmp r2,r10
02047e54  movlt r10,r2
02047e58  add r0,r1,#0x1
02047e5c  cmp r0,r2
02047e60  bne 0x02047ebc
02047e64  cmp r5,#0x0
02047e68  bne 0x02047e90
02047e6c  sub r10,r10,r8
02047e70  add r0,r6,#0x2
02047e74  add r0,r0,r8, lsl #0x1
02047e78  add r0,r4,r0
02047e7c  mov r1,r9
02047e80  mov r2,r10, lsl #0x1
02047e84  bl 0x02051730
02047e88  add r9,r9,r10, lsl #0x1
02047e8c  b 0x0204804c
02047e90  add r0,r6,#0x2
02047e94  add r0,r0,r8, lsl #0x1
02047e98  add r1,r4,r0
02047e9c  b 0x02047eb0
02047ea0  ldrh r0,[r1],#0x2
02047ea4  add r8,r8,#0x1
02047ea8  add r0,r5,r0
02047eac  strh r0,[r9],#0x2
02047eb0  cmp r8,r10
02047eb4  bcc 0x02047ea0
02047eb8  b 0x0204804c
02047ebc  cmp r1,#0x40
02047ec0  bne 0x02047f00
02047ec4  add r0,r6,#0x2
02047ec8  ldrh r0,[r4,r0]
02047ecc  add r0,r8,r0
02047ed0  add r0,r5,r0
02047ed4  mov r0,r0, lsl #0x10
02047ed8  mov r0,r0, lsr #0x10
02047edc  b 0x02047ef4
02047ee0  strh r0,[r9],#0x2
02047ee4  add r0,r0,#0x1
02047ee8  mov r0,r0, lsl #0x10
02047eec  mov r0,r0, lsr #0x10
02047ef0  add r8,r8,#0x1
02047ef4  cmp r8,r10
02047ef8  bcc 0x02047ee0
02047efc  b 0x0204804c
02047f00  cmp r1,#0xc0
02047f04  bne 0x02047f44
02047f08  add r0,r6,#0x2
02047f0c  ldrh r0,[r4,r0]
02047f10  sub r0,r0,r8
02047f14  add r0,r5,r0
02047f18  mov r0,r0, lsl #0x10
02047f1c  mov r0,r0, lsr #0x10
02047f20  b 0x02047f38
02047f24  strh r0,[r9],#0x2
02047f28  sub r0,r0,#0x1
02047f2c  mov r0,r0, lsl #0x10
02047f30  mov r0,r0, lsr #0x10
02047f34  add r8,r8,#0x1
02047f38  cmp r8,r10
02047f3c  bcc 0x02047f24
02047f40  b 0x0204804c
02047f44  ands r0,r1,#0x3f
02047f48  bne 0x02047f78
02047f4c  sub r8,r10,r8
02047f50  add r0,r6,#0x2
02047f54  ldrh r0,[r4,r0]
02047f58  mov r1,r9
02047f5c  mov r2,r8, lsl #0x1
02047f60  add r0,r5,r0
02047f64  mov r0,r0, lsl #0x10
02047f68  mov r0,r0, lsr #0x10
02047f6c  bl 0x02051718
02047f70  add r9,r9,r8, lsl #0x1
02047f74  b 0x0204804c
02047f78  cmp r0,#0x1
02047f7c  bne 0x02047fc8
02047f80  add r0,r6,#0x2
02047f84  ldrh r2,[r4,r0]
02047f88  add r0,r6,#0x4
02047f8c  ldrh r1,[r4,r0]
02047f90  add r0,r5,r2
02047f94  mov r0,r0, lsl #0x10
02047f98  mov r2,r0, lsr #0x10
02047f9c  add r0,r5,r1
02047fa0  mov r0,r0, lsl #0x10
02047fa4  mov r0,r0, lsr #0x10
02047fa8  b 0x02047fbc
02047fac  tst r8,#0x1
02047fb0  strheq r2,[r9],#0x2
02047fb4  strhne r0,[r9],#0x2
02047fb8  add r8,r8,#0x1
02047fbc  cmp r8,r10
02047fc0  bcc 0x02047fac
02047fc4  b 0x0204804c
02047fc8  add r11,r0,#0x1
02047fcc  cmp r8,#0x0
02047fd0  mov r1,#0x0
02047fd4  beq 0x02048014
02047fd8  cmp r11,#0x4
02047fdc  andeq r1,r8,#0x3
02047fe0  beq 0x02048014
02047fe4  cmp r11,#0x8
02047fe8  andeq r1,r8,#0x7
02047fec  beq 0x02048014
02047ff0  cmp r11,#0x0
02047ff4  beq 0x02048008
02047ff8  sub r0,r11,#0x1
02047ffc  tst r11,r0
02048000  andeq r1,r8,r0
02048004  beq 0x02048014
02048008  mov r0,r8
0204800c  mov r1,r11
02048010  bl 0x0200d338
02048014  add r2,r6,#0x2
02048018  b 0x02048044
0204801c  add r0,r2,r1, lsl #0x1
02048020  ldrh r0,[r4,r0]
02048024  add r1,r1,#0x1
02048028  cmp r1,r11
0204802c  add r0,r5,r0
02048030  mov r0,r0, lsl #0x10
02048034  mov r0,r0, lsr #0x10
02048038  moveq r1,#0x0
0204803c  strh r0,[r9],#0x2
02048040  add r8,r8,#0x1
02048044  cmp r8,r10
02048048  bcc 0x0204801c
0204804c  ldr r0,[sp,#0xc]
02048050  ldrb r1,[r0,#0x1]
02048054  ldrb r0,[r0,#0x0]
02048058  add r7,r7,r1
0204805c  and r0,r0,#0x3f
02048060  add r0,r0,#0x2
02048064  add r6,r6,r0, lsl #0x1
02048068  mov r1,r7
0204806c  ldr r0,[sp,#0x14]
02048070  ldrsh r0,[r0,#0x4]
02048074  cmp r1,r0
02048078  bcc 0x02047e34
0204807c  ldr r0,[sp,#0x10]
02048080  add r0,r0,#0x1
02048084  str r0,[sp,#0x10]
02048088  ldr r0,[sp,#0x14]
0204808c  ldrsh r1,[r0,#0x6]
02048090  ldr r0,[sp,#0x10]
02048094  cmp r0,r1
02048098  bcc 0x02047dbc
0204809c  ldr r0,[sp,#0x18]
020480a0  add r0,r0,#0x1
020480a4  str r0,[sp,#0x18]
020480a8  ldr r0,[sp,#0x8]
020480ac  ldr r0,[r0,#0x8]
020480b0  ldrh r1,[r0,#0x14]
020480b4  ldr r0,[sp,#0x18]
020480b8  cmp r0,r1
020480bc  bcc 0x02047da0
020480c0  add sp,sp,#0x28
020480c4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
