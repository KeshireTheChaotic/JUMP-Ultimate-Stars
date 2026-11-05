02152ebc  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02152ec0  ldr r0,[r0,#0x4]
02152ec4  ldr r5,[r0,#0x124]
02152ec8  ldr r4,[r0,#0x10]
02152ecc  mov r2,r5, asr #0x10
02152ed0  mov r1,r5, lsl #0x10
02152ed4  mov r2,r2, lsl #0x10
02152ed8  mov r6,r1, lsr #0x10
02152edc  mov r7,r2, lsr #0x10
02152ee0  blx 0x021b7170
02152ee4  add r0,r4,#0x400
02152ee8  ldrsb r2,[r0,#0x39]
02152eec  cmp r2,#0x3
02152ef0  addne r0,r4,r2, lsl #0x2
02152ef4  strne r5,[r0,#0x454]
02152ef8  bne 0x02152f44
02152efc  cmp r7,#0x0
02152f00  bne 0x02152f1c
02152f04  mov r0,r4
02152f08  mov r2,r6
02152f0c  mov r1,#0x1
02152f10  bl 0x02154108
02152f14  blx 0x021b65cc
02152f18  ldmia sp!,{r3,r4,r5,r6,r7,pc}
02152f1c  sub r1,r7,#0x1
02152f20  mov r0,#0xa
02152f24  mla r6,r1,r0,r6
02152f28  add r0,r4,#0x500
02152f2c  ldrsb r7,[r0,#0x42]
02152f30  mov r0,r6, lsl #0x10
02152f34  add r1,r4,r2, lsl #0x2
02152f38  mov r2,r7, lsl #0x10
02152f3c  orr r0,r2,r0, lsr #0x10
02152f40  str r0,[r1,#0x454]
02152f44  add r0,r4,#0x400
02152f48  ldrsb r0,[r0,#0x39]
02152f4c  cmp r0,#0x5
02152f50  addls pc,pc,r0, lsl #0x2
02152f54  b 0x02153058
02152f58  b 0x02152f70
02152f5c  b 0x02152fa4
02152f60  b 0x02152fcc
02152f64  b 0x02152ffc
02152f68  b 0x0215303c
02152f6c  b 0x0215303c
02152f70  mov r1,#0xb
02152f74  mla r1,r7,r1,r4
02152f78  add r1,r1,r6
02152f7c  add r1,r1,#0x400
02152f80  add r2,r4,r0, lsl #0x2
02152f84  ldrsb r1,[r1,#0x72]
02152f88  ldr r0,[r2,#0x43c]
02152f8c  cmp r0,r1
02152f90  strne r1,[r2,#0x43c]
02152f94  movne r0,#0x1
02152f98  strbne r0,[r4,#0x544]
02152f9c  strbne r0,[r4,#0x545]
02152fa0  b 0x02153058
02152fa4  add r1,r4,r0, lsl #0x2
02152fa8  add r2,r7,r7, lsl #0x2
02152fac  ldr r0,[r1,#0x43c]
02152fb0  add r2,r6,r2
02152fb4  cmp r2,r0
02152fb8  strne r2,[r1,#0x43c]
02152fbc  movne r0,#0x1
02152fc0  strbne r0,[r4,#0x544]
02152fc4  strbne r0,[r4,#0x545]
02152fc8  b 0x02153058
02152fcc  add r1,r4,r7, lsl #0x2
02152fd0  add r1,r1,r6
02152fd4  add r1,r1,#0x400
02152fd8  add r2,r4,r0, lsl #0x2
02152fdc  ldrsb r1,[r1,#0x9f]
02152fe0  ldr r0,[r2,#0x43c]
02152fe4  cmp r0,r1
02152fe8  strne r1,[r2,#0x43c]
02152fec  movne r0,#0x1
02152ff0  strbne r0,[r4,#0x544]
02152ff4  strbne r0,[r4,#0x545]
02152ff8  b 0x02153058
02152ffc  mov r1,#0x13
02153000  mla r1,r7,r1,r4
02153004  add r2,r1,r6
02153008  add r1,r1,#0x400
0215300c  add r2,r2,#0x400
02153010  ldrsb r5,[r1,#0xb9]
02153014  ldrsb r1,[r2,#0xa8]
02153018  add r3,r4,r0, lsl #0x2
0215301c  ldr r0,[r3,#0x43c]
02153020  orr r1,r1,r5, lsl #0x8
02153024  cmp r1,r0
02153028  strne r1,[r3,#0x43c]
0215302c  movne r0,#0x1
02153030  strbne r0,[r4,#0x544]
02153034  strbne r0,[r4,#0x545]
02153038  b 0x02153058
0215303c  add r1,r4,r0, lsl #0x2
02153040  ldr r0,[r1,#0x43c]
02153044  cmp r6,r0
02153048  strne r6,[r1,#0x43c]
0215304c  movne r0,#0x1
02153050  strbne r0,[r4,#0x544]
02153054  strbne r0,[r4,#0x545]
02153058  mov r0,r4
0215305c  bl 0x02153174
02153060  mov r0,#0x78
02153064  mov r1,#0x0
02153068  bl 0x0207342c
0215306c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
