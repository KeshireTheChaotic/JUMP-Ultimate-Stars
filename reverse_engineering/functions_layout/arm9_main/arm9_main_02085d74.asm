02085d74  stmdb sp!,{r3,r4,r5,r6,lr}
02085d78  sub sp,sp,#0x4
02085d7c  mov r5,r1
02085d80  mov r6,r0
02085d84  ldr r1,[0x2085ec0]
02085d88  ldr r2,[0x2085ec4]
02085d8c  ldr r3,[0x2085ec8]
02085d90  mov r0,#0x38
02085d94  bl 0x0201a21c
02085d98  mov r1,#0x0
02085d9c  mov r2,#0x38
02085da0  mov r4,r0
02085da4  bl 0x020517fc
02085da8  ldrsh r0,[r5,#0x4]
02085dac  mov r3,#0x0
02085db0  add r1,r5,#0x24
02085db4  mov r0,r0, lsl #0x8
02085db8  str r0,[r4,#0xc]
02085dbc  ldrsh r12,[r5,#0x6]
02085dc0  ldr r2,[0x2085ecc]
02085dc4  mov r0,r4
02085dc8  mov r12,r12, lsl #0x8
02085dcc  str r12,[r4,#0x10]
02085dd0  ldrb r12,[r5,#0x1c]
02085dd4  strb r12,[r4,#0x19]
02085dd8  strb r3,[r4,#0x16]
02085ddc  ldrb r3,[r5,#0x1d]
02085de0  strb r3,[r4,#0x17]
02085de4  ldrb r3,[r5,#0x1e]
02085de8  strb r3,[r4,#0x18]
02085dec  ldrsb r3,[r5,#0x2]
02085df0  mov r3,r3, lsl #0x8
02085df4  strh r3,[r4,#0x1c]
02085df8  ldrsb r3,[r5,#0x3]
02085dfc  mov r3,r3, lsl #0x8
02085e00  strh r3,[r4,#0x1e]
02085e04  ldrb r3,[r5,#0x20]
02085e08  strb r3,[r4,#0x34]
02085e0c  ldrb r3,[r5,#0x1d]
02085e10  add r3,r1,r3, lsl #0x3
02085e14  str r3,[r4,#0x8]
02085e18  ldrb r3,[r5,#0x20]
02085e1c  ldr r2,[r2,r3,lsl #0x2]
02085e20  blx r2
02085e24  bl 0x0203b3e4
02085e28  mov r1,#0xa3
02085e2c  str r1,[sp,#0x0]
02085e30  ldr r2,[r0,#0x88]
02085e34  ldr r1,[0x2085ed0]
02085e38  mov r0,r6
02085e3c  mov r3,#0x400
02085e40  bl 0x02085aac
02085e44  ldr r1,[0x2085ed4]
02085e48  mov r0,r6
02085e4c  mov r2,#0x0
02085e50  bl 0x02083b74
02085e54  ldr r1,[0x2085ed8]
02085e58  mov r0,#0x0
02085e5c  str r1,[r6,#0x28]
02085e60  ldr r1,[r6,#0x8]
02085e64  ldr r2,[r4,#0x10]
02085e68  ldr r1,[r1,#0x4]
02085e6c  mov r2,r2, lsl #0x4
02085e70  ldr r5,[r1,#0x50]
02085e74  ldr r1,[r4,#0xc]
02085e78  mov r1,r1, lsl #0x4
02085e7c  str r1,[r5,#0xc]
02085e80  str r2,[r5,#0x10]
02085e84  str r0,[r5,#0x14]
02085e88  ldrb r0,[r5,#0x24]
02085e8c  orr r1,r0,#0x1
02085e90  cmp r0,r1
02085e94  beq 0x02085ea8
02085e98  mov r0,r5
02085e9c  ldr r2,[r0,#0x0]
02085ea0  ldr r2,[r2,#0x18]
02085ea4  blx r2
02085ea8  ldrb r1,[r5,#0x24]
02085eac  mov r0,r4
02085eb0  orr r1,r1,#0x31
02085eb4  strb r1,[r5,#0x24]
02085eb8  add sp,sp,#0x4
02085ebc  ldmia sp!,{r3,r4,r5,r6,pc}
