02153ee0  stmdb sp!,{r3,r4,r5,lr}
02153ee4  ldr r4,[r1,#0x0]
02153ee8  ldr r1,[r0,#0x0]
02153eec  ldr r0,[r2,#0x0]
02153ef0  rsb r2,r1,r1, lsl #0x5
02153ef4  rsb lr,r4,r4, lsl #0x5
02153ef8  rsb r4,r0,r0, lsl #0x5
02153efc  mov r0,r2, asr #0xb
02153f00  mov r12,lr, asr #0xb
02153f04  ldr r5,[r3,#0x0]
02153f08  mov r1,r4, asr #0xb
02153f0c  add r2,r2,r0, lsr #0x14
02153f10  add r3,lr,r12, lsr #0x14
02153f14  mov r0,r5, asr #0xb
02153f18  add r1,r4,r1, lsr #0x14
02153f1c  mov r2,r2, lsl #0x4
02153f20  mov r3,r3, lsl #0x4
02153f24  add r0,r5,r0, lsr #0x14
02153f28  mov r1,r1, lsl #0x4
02153f2c  mov r12,r2, lsr #0x10
02153f30  mov r2,r3, lsr #0x10
02153f34  mov r0,r0, lsl #0x4
02153f38  mov r3,r1, lsr #0x10
02153f3c  mov r4,r0, lsr #0x10
02153f40  and r1,r12,#0x1f
02153f44  mov r0,r2, lsl #0x1b
02153f48  mov r2,r3, lsl #0x1b
02153f4c  orr r0,r1,r0, lsr #0x16
02153f50  mov r1,r4, lsl #0x1f
02153f54  orr r0,r0,r2, lsr #0x11
02153f58  orr r0,r0,r1, lsr #0x10
02153f5c  mov r0,r0, lsl #0x10
02153f60  mov r0,r0, lsr #0x10
02153f64  ldmia sp!,{r3,r4,r5,pc}
