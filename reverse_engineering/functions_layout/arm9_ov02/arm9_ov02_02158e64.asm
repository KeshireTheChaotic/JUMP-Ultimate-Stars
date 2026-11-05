02158e64  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
02158e68  sub sp,sp,#0xc
02158e6c  mov r7,r0
02158e70  add r0,sp,#0x0
02158e74  mov r5,r1
02158e78  mov r4,r2
02158e7c  mov r6,r3
02158e80  bl 0x021518d4
02158e84  ldrb r0,[sp,#0x30]
02158e88  ldrsh r2,[r5,#0x0]
02158e8c  ldr r1,[r7,#0x0]
02158e90  cmp r0,#0x0
02158e94  rsb r3,r1,r2, lsl #0xc
02158e98  str r3,[sp,#0x0]
02158e9c  ldrsh r1,[r4,#0x0]
02158ea0  ldr r0,[r7,#0x4]
02158ea4  rsb r2,r0,r1, lsl #0xc
02158ea8  str r2,[sp,#0x4]
02158eac  beq 0x02158ec8
02158eb0  ldrsh r0,[r6,#0x0]
02158eb4  cmp r0,#0x0
02158eb8  movgt r1,r3, lsl #0x1
02158ebc  movgt r0,r2, lsl #0x1
02158ec0  strgt r1,[sp,#0x0]
02158ec4  strgt r0,[sp,#0x4]
02158ec8  ldr r0,[sp,#0x0]
02158ecc  mov r5,r0
02158ed0  cmp r0,#0x0
02158ed4  ble 0x02158ef8
02158ed8  ldrsh r4,[r6,#0x0]
02158edc  mov r0,r5, asr #0xb
02158ee0  add r0,r5,r0, lsr #0x14
02158ee4  mov r1,r4
02158ee8  mov r0,r0, asr #0xc
02158eec  bl 0x0200d12c
02158ef0  cmp r1,r4, asr #0x1
02158ef4  bgt 0x02158f24
02158ef8  cmp r5,#0x0
02158efc  bgt 0x02158f5c
02158f00  ldrsh r4,[r6,#0x0]
02158f04  mov r0,r5, asr #0xb
02158f08  add r0,r5,r0, lsr #0x14
02158f0c  mov r1,r4
02158f10  mov r0,r0, asr #0xc
02158f14  bl 0x0200d12c
02158f18  rsb r0,r1,#0x0
02158f1c  cmp r0,r4, asr #0x1
02158f20  ble 0x02158f5c
02158f24  cmp r5,#0x0
02158f28  movgt r8,#0x1
02158f2c  mvnle r8,#0x0
02158f30  mov r0,r5
02158f34  mov r1,r4
02158f38  bl 0x0200d12c
02158f3c  add r1,r0,r8, lsl #0xc
02158f40  mov r0,r1, asr #0xb
02158f44  add r0,r1,r0, lsr #0x14
02158f48  mov r0,r0, asr #0xc
02158f4c  mov r0,r0, lsl #0x10
02158f50  mov r0,r0, asr #0x4
02158f54  str r0,[sp,#0x0]
02158f58  b 0x02158f6c
02158f5c  ldrsh r1,[r6,#0x0]
02158f60  mov r0,r5
02158f64  bl 0x0200d12c
02158f68  str r0,[sp,#0x0]
02158f6c  ldr r5,[sp,#0x4]
02158f70  cmp r5,#0x0
02158f74  ble 0x02158f98
02158f78  ldrsh r4,[r6,#0x0]
02158f7c  mov r0,r5, asr #0xb
02158f80  add r0,r5,r0, lsr #0x14
02158f84  mov r1,r4
02158f88  mov r0,r0, asr #0xc
02158f8c  bl 0x0200d12c
02158f90  cmp r1,r4, asr #0x1
02158f94  bgt 0x02158fc4
02158f98  cmp r5,#0x0
02158f9c  bgt 0x02158ffc
02158fa0  ldrsh r4,[r6,#0x0]
02158fa4  mov r0,r5, asr #0xb
02158fa8  add r0,r5,r0, lsr #0x14
02158fac  mov r1,r4
02158fb0  mov r0,r0, asr #0xc
02158fb4  bl 0x0200d12c
02158fb8  rsb r0,r1,#0x0
02158fbc  cmp r0,r4, asr #0x1
02158fc0  ble 0x02158ffc
02158fc4  cmp r5,#0x0
02158fc8  movgt r8,#0x1
02158fcc  mvnle r8,#0x0
02158fd0  mov r0,r5
02158fd4  mov r1,r4
02158fd8  bl 0x0200d12c
02158fdc  add r1,r0,r8, lsl #0xc
02158fe0  mov r0,r1, asr #0xb
02158fe4  add r0,r1,r0, lsr #0x14
02158fe8  mov r0,r0, asr #0xc
02158fec  mov r0,r0, lsl #0x10
02158ff0  mov r0,r0, asr #0x4
02158ff4  str r0,[sp,#0x4]
02158ff8  b 0x0215900c
02158ffc  ldrsh r1,[r6,#0x0]
02159000  mov r0,r5
02159004  bl 0x0200d12c
02159008  str r0,[sp,#0x4]
0215900c  ldr r2,[r7,#0x0]
02159010  ldr r1,[sp,#0x0]
02159014  ldr r0,[sp,#0x28]
02159018  add r1,r2,r1
0215901c  str r1,[r7,#0x0]
02159020  ldr r2,[r7,#0x4]
02159024  ldr r1,[sp,#0x4]
02159028  cmp r0,#0x0
0215902c  add r1,r2,r1
02159030  str r1,[r7,#0x4]
02159034  beq 0x02159044
02159038  mov r1,r7
0215903c  bl 0x0214f960
02159040  b 0x02159058
02159044  ldr r0,[sp,#0x2c]
02159048  cmp r0,#0x0
0215904c  beq 0x02159058
02159050  mov r1,r7
02159054  bl 0x0214f960
02159058  ldrsh r0,[r6,#0x0]
0215905c  sub r0,r0,#0x1
02159060  strh r0,[r6,#0x0]
02159064  add sp,sp,#0xc
02159068  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
