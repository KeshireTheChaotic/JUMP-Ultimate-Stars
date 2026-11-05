02079f08  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02079f0c  mov r8,r1
02079f10  ldrsb r1,[r8,#0xe]
02079f14  mov r9,r0
02079f18  mov r5,#0x8000
02079f1c  mov r0,r1, lsl #0x1a
02079f20  mov r3,r0, asr #0x1a
02079f24  mov r0,#0xc
02079f28  mul r1,r3,r0
02079f2c  add r3,r9,#0x70
02079f30  add r4,r3,r1
02079f34  ldrh r0,[r4,#0x6]
02079f38  rsb r5,r5,#0x0
02079f3c  mov r7,r5, lsr #0x11
02079f40  mov r6,r0, lsl #0x11
02079f44  mov r6,r6, lsr #0x11
02079f48  add r6,r6,#0xff
02079f4c  add r6,r6,#0xff00
02079f50  mov r6,r6, lsl #0x10
02079f54  and r5,r0,r5
02079f58  and r0,r7,r6, lsr #0x10
02079f5c  orr r0,r5,r0
02079f60  strh r0,[r4,#0x6]
02079f64  ldrh r5,[r4,#0x6]
02079f68  ldr r0,[r3,r1]
02079f6c  mov r7,r2
02079f70  mov r1,r5, lsl #0x11
02079f74  mov r1,r1, lsr #0x11
02079f78  bl 0x0207b25c
02079f7c  ldrh r1,[r4,#0x6]
02079f80  ldrsb r0,[r8,#0xf]
02079f84  mov r2,r1, lsl #0x11
02079f88  mov r2,r2, lsr #0x11
02079f8c  mov r0,r0, lsl #0x1a
02079f90  cmp r2,r0, asr #0x1a
02079f94  beq 0x0207a038
02079f98  mov r10,#0x8000
02079f9c  rsb r10,r10,#0x0
02079fa0  and r0,r1,r10
02079fa4  mov r5,r9
02079fa8  strh r0,[r4,#0x6]
02079fac  mov r6,#0x7
02079fb0  ldrsh r1,[r5,#0xc]
02079fb4  ldrsh r0,[r8,#0xc]
02079fb8  cmp r1,r0
02079fbc  bne 0x0207a028
02079fc0  ldrb r0,[r5,#0xe]
02079fc4  mov r0,r0, lsl #0x18
02079fc8  movs r0,r0, lsr #0x1f
02079fcc  beq 0x0207a028
02079fd0  ldrh r1,[r4,#0x6]
02079fd4  mov r0,r9
02079fd8  mov r3,r1
02079fdc  mov r1,r1, lsl #0x11
02079fe0  mov r1,r1, lsr #0x11
02079fe4  add r2,r1,#0x1
02079fe8  mov r2,r2, lsl #0x10
02079fec  mov r2,r2, lsr #0x10
02079ff0  and r3,r3,r10
02079ff4  and r2,r2,r10, lsr #0x11
02079ff8  orr r2,r3,r2
02079ffc  strh r2,[r4,#0x6]
0207a000  ldrsb r2,[r5,#0xf]
0207a004  mov r1,r1, lsl #0x18
0207a008  mov r1,r1, asr #0x18
0207a00c  bic r2,r2,#0x3f
0207a010  and r1,r1,#0x3f
0207a014  orr r3,r2,r1
0207a018  mov r1,r5
0207a01c  mov r2,r7
0207a020  strb r3,[r5,#0xf]
0207a024  bl 0x02079e40
0207a028  sub r6,r6,#0x1
0207a02c  cmp r6,#0x0
0207a030  add r5,r5,#0x10
0207a034  bgt 0x02079fb0
0207a038  ldrsb r0,[r8,#0xf]
0207a03c  bic r0,r0,#0x3f
0207a040  orr r0,r0,#0x3f
0207a044  strb r0,[r8,#0xf]
0207a048  ldrh r0,[r4,#0x6]
0207a04c  mov r0,r0, lsl #0x11
0207a050  movs r0,r0, lsr #0x11
0207a054  ldmiane sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0207a058  ldr r0,[r4,#0x0]
0207a05c  mov r1,#0x0
0207a060  bl 0x0207b2d0
0207a064  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
