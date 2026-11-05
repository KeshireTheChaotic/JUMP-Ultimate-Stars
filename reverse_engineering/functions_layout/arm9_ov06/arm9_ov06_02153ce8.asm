02153ce8  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
02153cec  sub sp,sp,#0x4
02153cf0  mov r4,r1
02153cf4  mvn r12,#0x0
02153cf8  mov r8,r0
02153cfc  mov r7,r2
02153d00  mov r6,r3
02153d04  cmp r4,r12
02153d08  ldr r5,[sp,#0x20]
02153d0c  beq 0x02153de4
02153d10  cmp r4,#0x40
02153d14  bge 0x02153d8c
02153d18  ldr r0,[0x2153ea0]
02153d1c  ldr r1,[r0,r4,lsl #0x2]
02153d20  cmp r1,r12
02153d24  beq 0x02153d30
02153d28  mov r0,#0x7a
02153d2c  bl 0x0207342c
02153d30  ldr r2,[sp,#0x30]
02153d34  mov r3,#0x0
02153d38  cmp r2,#0x2
02153d3c  bne 0x02153d58
02153d40  ldr r0,[0x2153ea4]
02153d44  mov r1,r6
02153d48  ldr r0,[r0,r4,lsl #0x3]
02153d4c  mov r2,r5
02153d50  bl 0x0206c7fc
02153d54  b 0x02153d70
02153d58  ldr r0,[0x2153ea4]
02153d5c  mov r1,r6
02153d60  add r0,r0,r4, lsl #0x3
02153d64  ldr r0,[r0,r2,lsl #0x2]
02153d68  mov r2,r5
02153d6c  bl 0x0206c7fc
02153d70  ldr r0,[r0,#0x4]
02153d74  ldrb r1,[sp,#0x24]
02153d78  ldr r0,[r0,#0x64]
02153d7c  ldr r2,[r0,#0x0]
02153d80  ldr r2,[r2,#0x5c]
02153d84  blx r2
02153d88  b 0x02153de4
02153d8c  ldr r12,[r8,#0x14]
02153d90  sub r4,r4,#0x40
02153d94  ldr r0,[r12,r4,lsl #0x3]
02153d98  mov r1,r6
02153d9c  mov r2,r5
02153da0  mov r3,#0x1
02153da4  add r4,r12,r4, lsl #0x3
02153da8  bl 0x0206c7fc
02153dac  ldr r0,[r0,#0x4]
02153db0  ldrb r1,[sp,#0x24]
02153db4  ldr r0,[r0,#0x64]
02153db8  ldr r2,[r0,#0x0]
02153dbc  ldr r2,[r2,#0x5c]
02153dc0  blx r2
02153dc4  ldrh r0,[r4,#0x4]
02153dc8  mvn r1,#0x0
02153dcc  add r0,r8,r0, lsl #0x1
02153dd0  ldrsh r0,[r0,#0x18]
02153dd4  cmp r0,r1
02153dd8  beq 0x02153de4
02153ddc  ldrh r1,[r4,#0x6]
02153de0  bl 0x0207342c
02153de4  mvn r0,#0x0
02153de8  cmp r7,r0
02153dec  beq 0x02153e98
02153df0  cmp r7,#0x40
02153df4  bge 0x02153e58
02153df8  mov r1,r6
02153dfc  orr r0,r7,#0x240000
02153e00  sub r2,r5,#0x20
02153e04  mov r3,#0x0
02153e08  bl 0x0206c7fc
02153e0c  mov r4,r0
02153e10  ldr r0,[r4,#0x4]
02153e14  ldr r3,[sp,#0x2c]
02153e18  ldr r2,[r0,#0x0]
02153e1c  ldr r1,[0x2153ea8]
02153e20  mov r3,r3, lsl #0x1
02153e24  ldrh r1,[r1,r3]
02153e28  ldr r2,[r2,#0x104]
02153e2c  blx r2
02153e30  ldr r1,[sp,#0x28]
02153e34  ldr r0,[0x2153eac]
02153e38  ldr r0,[r0,r1,lsl #0x2]
02153e3c  cmp r0,#0x1000
02153e40  beq 0x02153e98
02153e44  str r0,[sp,#0x0]
02153e48  ldr r0,[r4,#0x4]
02153e4c  add r1,sp,#0x0
02153e50  bl 0x020235dc
02153e54  b 0x02153e98
02153e58  ldr r4,[r8,#0x14]
02153e5c  sub r3,r7,#0x40
02153e60  ldr r0,[r4,r3,lsl #0x3]
02153e64  mov r1,r6
02153e68  mov r2,r5
02153e6c  add r4,r4,r3, lsl #0x3
02153e70  mov r3,#0x1
02153e74  bl 0x0206c7fc
02153e78  ldrh r0,[r4,#0x4]
02153e7c  mvn r1,#0x0
02153e80  add r0,r8,r0, lsl #0x1
02153e84  ldrsh r0,[r0,#0x18]
02153e88  cmp r0,r1
02153e8c  beq 0x02153e98
02153e90  ldrh r1,[r4,#0x6]
02153e94  bl 0x0207342c
02153e98  add sp,sp,#0x4
02153e9c  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
