021619f0  stmdb sp!,{r4,r5,r6,lr}
021619f4  ldr r0,[r0,#0x4]
021619f8  ldr r6,[r0,#0x10]
021619fc  ldrb r0,[r6,#0xb2]
02161a00  ldrb r1,[r6,#0xb2]
02161a04  mov r0,r0, lsl #0x1e
02161a08  movs r0,r0, lsr #0x1f
02161a0c  moveq r0,#0x1
02161a10  movne r0,#0x0
02161a14  mov r0,r0, lsl #0x1f
02161a18  bic r1,r1,#0x2
02161a1c  orr r1,r1,r0, lsr #0x1e
02161a20  and r0,r1,#0xff
02161a24  mov r0,r0, lsl #0x1e
02161a28  movs r0,r0, lsr #0x1f
02161a2c  strb r1,[r6,#0xb2]
02161a30  ldrne r4,[0x2161adc]
02161a34  ldr r0,[r6,#0x68]
02161a38  ldreq r4,[0x2161ae0]
02161a3c  ldr r0,[r0,#0x4]
02161a40  mov r1,r4
02161a44  add r5,r4,#0x1
02161a48  blx 0x021b3f78
02161a4c  ldr r0,[r6,#0x68]
02161a50  mov r1,r4
02161a54  ldr r0,[r0,#0x4]
02161a58  blx 0x021b3fb0
02161a5c  ldr r0,[r6,#0x68]
02161a60  mov r1,r5
02161a64  ldr r0,[r0,#0x4]
02161a68  blx 0x021b3fc4
02161a6c  ldr r0,[r6,#0x5c]
02161a70  mov r1,r4
02161a74  ldr r0,[r0,#0x4]
02161a78  blx 0x021b3f78
02161a7c  ldr r0,[r6,#0x5c]
02161a80  mov r1,r4
02161a84  ldr r0,[r0,#0x4]
02161a88  blx 0x021b3fb0
02161a8c  ldr r0,[r6,#0x5c]
02161a90  mov r1,r5
02161a94  ldr r0,[r0,#0x4]
02161a98  blx 0x021b3fc4
02161a9c  ldrb r0,[r6,#0xb2]
02161aa0  mov r0,r0, lsl #0x1e
02161aa4  movs r0,r0, lsr #0x1f
02161aa8  movne r1,#0x1
02161aac  ldr r0,[r6,#0x30]
02161ab0  moveq r1,#0x0
02161ab4  blx 0x021c3508
02161ab8  blx 0x021b65cc
02161abc  ldr r0,[r6,#0x74]
02161ac0  mov r1,#0x1
02161ac4  ldr r0,[r0,#0x4]
02161ac8  blx 0x021b6214
02161acc  mov r0,#0x78
02161ad0  mov r1,#0x0
02161ad4  bl 0x0207342c
02161ad8  ldmia sp!,{r4,r5,r6,pc}
