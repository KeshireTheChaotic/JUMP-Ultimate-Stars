021bbd28  stmdb sp!,{r4,lr}
021bbd2c  sub sp,sp,#0x8
021bbd30  ldr r0,[r0,#0x4]
021bbd34  add r1,sp,#0x4
021bbd38  ldr r4,[r0,#0x10]
021bbd3c  add r2,sp,#0x0
021bbd40  ldrsb r0,[r4,#0x9d]
021bbd44  add r0,r0,#0x1
021bbd48  strb r0,[r4,#0x9d]
021bbd4c  ldrsb r0,[r4,#0x9d]
021bbd50  ldrsh r3,[r4,#0x56]
021bbd54  ldrsh lr,[r4,#0x54]
021bbd58  mov r12,r0, lsl #0x8
021bbd5c  mov r0,r12, asr #0x2
021bbd60  add r0,r12,r0, lsr #0x1d
021bbd64  sub r0,lr,r0, asr #0x3
021bbd68  mov r3,r3, lsl #0xc
021bbd6c  mov r0,r0, lsl #0xc
021bbd70  str r3,[sp,#0x0]
021bbd74  str r0,[sp,#0x4]
021bbd78  ldr r0,[r4,#0x1c]
021bbd7c  bl 0x021bb970
021bbd80  ldrsb r0,[r4,#0x9d]
021bbd84  cmp r0,#0x8
021bbd88  bge 0x021bbd98
021bbd8c  ldrb r0,[r4,#0xa2]
021bbd90  cmp r0,#0x0
021bbd94  bne 0x021bbdc4
021bbd98  mov r1,#0x0
021bbd9c  strb r1,[r4,#0xa4]
021bbda0  mov r2,#0x1
021bbda4  mov r0,r4
021bbda8  strb r2,[r4,#0xa7]
021bbdac  bl 0x021bc0bc
021bbdb0  blx 0x021b65cc
021bbdb4  ldr r0,[r4,#0x10]
021bbdb8  ldr r1,[0x21bbddc]
021bbdbc  ldr r0,[r0,#0x4]
021bbdc0  bl 0x02028384
021bbdc4  ldrb r0,[r4,#0xa5]
021bbdc8  cmp r0,#0x0
021bbdcc  beq 0x021bbdd4
021bbdd0  bl 0x02073840
021bbdd4  add sp,sp,#0x8
021bbdd8  ldmia sp!,{r4,pc}
