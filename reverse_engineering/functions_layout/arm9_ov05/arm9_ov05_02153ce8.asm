02153ce8  str r0,[sp,#0x24]
02153cec  add r0,r6,r7, lsl #0x2
02153cf0  ldr r0,[r0,#0xd0]
02153cf4  add r2,sp,#0x20
02153cf8  bl 0x0214ce68
02153cfc  add r7,r7,#0x1
02153d00  cmp r7,#0xb
02153d04  blt 0x02153bc8
02153d08  add r0,r11,#0x400
02153d0c  ldrsb r0,[r0,#0x6e]
02153d10  sub r1,r0,#0x1
02153d14  cmp r8,r1
02153d18  movle r8,r1
02153d1c  cmp r0,#0x0
02153d20  strne r5,[sp,#0x8]
02153d24  add r5,r5,#0x1
02153d28  strne r1,[sp,#0xc]
02153d2c  cmp r5,#0x4
02153d30  blt 0x02153ba8
02153d34  ldr r0,[sp,#0x4]
02153d38  cmp r0,#0x0
02153d3c  beq 0x02153e0c
02153d40  cmp r9,#0x3
02153d44  add r0,r10,r9, lsl #0x2
02153d48  beq 0x02153da4
02153d4c  ldr r3,[r0,#0x454]
02153d50  add r2,r10,#0xd0
02153d54  mov r0,r3, lsr #0x10
02153d58  mov r0,r0, lsl #0x10
02153d5c  mov r1,r0, lsr #0x10
02153d60  mov r0,#0x2c
02153d64  mla r5,r1,r0,r2
02153d68  mov r0,r3, lsl #0x10
02153d6c  mov r6,r0, lsr #0x10
02153d70  ldr r0,[r5,r6,lsl #0x2]
02153d74  bl 0x02152d80
02153d78  cmp r0,#0x0
02153d7c  mov r1,#0x1
02153d80  bne 0x02153d94
02153d84  ldr r0,[r5,r6,lsl #0x2]
02153d88  ldr r0,[r0,#0x4]
02153d8c  blx 0x021b6214
02153d90  b 0x02153e0c
02153d94  ldr r0,[r10,#0x180]
02153d98  ldr r0,[r0,#0x4]
02153d9c  blx 0x021b6214
02153da0  b 0x02153e0c
02153da4  ldr r0,[r0,#0x454]
02153da8  mov r1,#0xa
02153dac  mov r0,r0, lsl #0x10
02153db0  mov r6,r0, lsr #0x10
02153db4  mov r0,r6
02153db8  bl 0x0200d12c
02153dbc  mov r5,r1
02153dc0  mov r0,r6
02153dc4  mov r1,#0xa
02153dc8  bl 0x0200d12c
02153dcc  add r1,r0,#0x1
02153dd0  add r2,r10,#0xd0
02153dd4  mov r0,#0x2c
02153dd8  mla r6,r1,r0,r2
02153ddc  ldr r0,[r6,r5,lsl #0x2]
02153de0  bl 0x02152d80
02153de4  cmp r0,#0x0
02153de8  mov r1,#0x1
02153dec  bne 0x02153e00
02153df0  ldr r0,[r6,r5,lsl #0x2]
02153df4  ldr r0,[r0,#0x4]
02153df8  blx 0x021b6214
02153dfc  b 0x02153e0c
02153e00  ldr r0,[r10,#0x180]
02153e04  ldr r0,[r0,#0x4]
02153e08  blx 0x021b6214
02153e0c  add r1,r8,r8, lsr #0x1f
02153e10  ldr r0,[sp,#0xc]
02153e14  mov r8,r1, asr #0x1
02153e18  cmp r0,r1, asr #0x1
02153e1c  movlt r8,r0
02153e20  ldr r0,[sp,#0x8]
02153e24  mov r1,#0x2c
02153e28  mla r1,r0,r1,r10
02153e2c  ldr r0,[r10,#0x180]
02153e30  add r1,r1,r8, lsl #0x2
02153e34  ldr r0,[r0,#0x4]
02153e38  ldr r1,[r1,#0xd0]
02153e3c  ldr r3,[r0,#0x0]
02153e40  ldr r2,[r1,#0x4]
02153e44  ldr r3,[r3,#0x160]
02153e48  mov r1,#0x1
02153e4c  blx r3
02153e50  ldrb r0,[r4,#0xb]
02153e54  ldrb r2,[r10,#0x46d]
02153e58  ldrb r1,[r4,#0xe]
02153e5c  sub r0,r0,#0x10
02153e60  sub r2,r2,#0x8
02153e64  add r1,r2,r1
02153e68  add r0,r0,r0, lsr #0x1f
02153e6c  mov r0,r0, asr #0x1
02153e70  mov r1,r1, lsl #0xc
02153e74  mov r0,r0, lsl #0xc
02153e78  str r1,[sp,#0x18]
02153e7c  str r0,[sp,#0x1c]
02153e80  ldr r0,[r10,#0x180]
02153e84  add r1,sp,#0x1c
02153e88  add r2,sp,#0x18
02153e8c  bl 0x0214ce68
02153e90  add sp,sp,#0x38
02153e94  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
