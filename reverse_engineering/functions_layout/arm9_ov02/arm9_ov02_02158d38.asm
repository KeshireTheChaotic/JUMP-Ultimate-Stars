02158d38  stmdb sp!,{r3,r4,r5,r6,lr}
02158d3c  sub sp,sp,#0xc
02158d40  mov r5,r0
02158d44  ldr r0,[0x2158e60]
02158d48  ldrb r3,[r5,#0x4]
02158d4c  smulbb r6,r2,r0
02158d50  add r0,r1,#0x20
02158d54  cmp r3,#0x4
02158d58  add r4,r0,r6
02158d5c  bcs 0x02158db4
02158d60  add r0,r1,r6
02158d64  add r0,r0,r3, lsl #0x2
02158d68  ldr r12,[r0,#0x1e0]
02158d6c  add r1,r4,#0x370
02158d70  mov r0,#0xc
02158d74  mla r0,r3,r0,r1
02158d78  add r1,r4,#0x18
02158d7c  add r2,r4,#0x34
02158d80  add r1,r1,#0x400
02158d84  add r2,r2,#0x400
02158d88  add r6,r4,#0x450
02158d8c  str r12,[sp,#0x0]
02158d90  mov r12,#0x0
02158d94  str r12,[sp,#0x4]
02158d98  ldrb r12,[r4,#0x4db]
02158d9c  add r1,r1,r3, lsl #0x1
02158da0  add r2,r2,r3, lsl #0x1
02158da4  add r3,r6,r3, lsl #0x1
02158da8  str r12,[sp,#0x8]
02158dac  bl 0x02158e64
02158db0  b 0x02158e08
02158db4  mov r2,#0x0
02158db8  add r1,r1,r6
02158dbc  sub r0,r3,#0x4
02158dc0  str r2,[sp,#0x0]
02158dc4  add r0,r1,r0, lsl #0x2
02158dc8  ldr r1,[r0,#0x1f0]
02158dcc  add r0,r4,#0x18
02158dd0  str r1,[sp,#0x4]
02158dd4  add r1,r4,#0x34
02158dd8  ldrb r12,[r4,#0x4db]
02158ddc  add r6,r0,#0x400
02158de0  add r2,r1,#0x400
02158de4  add lr,r4,#0x450
02158de8  add r1,r4,#0x370
02158dec  mov r0,#0xc
02158df0  mla r0,r3,r0,r1
02158df4  add r1,r6,r3, lsl #0x1
02158df8  add r2,r2,r3, lsl #0x1
02158dfc  add r3,lr,r3, lsl #0x1
02158e00  str r12,[sp,#0x8]
02158e04  bl 0x02158e64
02158e08  ldrb r3,[r5,#0x4]
02158e0c  add r0,r4,r3, lsl #0x1
02158e10  add r0,r0,#0x400
02158e14  ldrsh r1,[r0,#0x50]
02158e18  cmp r1,#0x0
02158e1c  movgt r0,#0x1
02158e20  bgt 0x02158e58
02158e24  mov r2,#0xc
02158e28  mla r1,r3,r2,r4
02158e2c  ldrsh r3,[r0,#0x18]
02158e30  mov r0,#0x0
02158e34  mov r3,r3, lsl #0xc
02158e38  str r3,[r1,#0x370]
02158e3c  ldrb r5,[r5,#0x4]
02158e40  add r1,r4,r5, lsl #0x1
02158e44  add r1,r1,#0x400
02158e48  ldrsh r3,[r1,#0x34]
02158e4c  mla r1,r5,r2,r4
02158e50  mov r2,r3, lsl #0xc
02158e54  str r2,[r1,#0x374]
02158e58  add sp,sp,#0xc
02158e5c  ldmia sp!,{r3,r4,r5,r6,pc}
