02159db4  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02159db8  mov r6,r0
02159dbc  ldrh r1,[r1,#0x0]
02159dc0  ldrh r0,[r6,#0x0]
02159dc4  mov r5,r2
02159dc8  mov r4,r3
02159dcc  sub r0,r1,r0
02159dd0  mov r0,r0, lsl #0x10
02159dd4  mov r8,r0, asr #0x10
02159dd8  cmp r8,#0x0
02159ddc  ble 0x02159df8
02159de0  ldrsh r7,[r5,#0x0]
02159de4  mov r0,r8
02159de8  mov r1,r7
02159dec  bl 0x0200d12c
02159df0  cmp r1,r7, asr #0x1
02159df4  bgt 0x02159e1c
02159df8  cmp r8,#0x0
02159dfc  bgt 0x02159e44
02159e00  ldrsh r7,[r5,#0x0]
02159e04  mov r0,r8
02159e08  mov r1,r7
02159e0c  bl 0x0200d12c
02159e10  rsb r0,r1,#0x0
02159e14  cmp r0,r7, asr #0x1
02159e18  ble 0x02159e44
02159e1c  cmp r8,#0x0
02159e20  movgt r9,#0x1
02159e24  mvnle r9,#0x0
02159e28  mov r0,r8
02159e2c  mov r1,r7
02159e30  bl 0x0200d12c
02159e34  add r0,r0,r9
02159e38  mov r0,r0, lsl #0x10
02159e3c  mov r1,r0, asr #0x10
02159e40  b 0x02159e58
02159e44  ldrsh r1,[r5,#0x0]
02159e48  mov r0,r8
02159e4c  bl 0x0200d12c
02159e50  mov r0,r0, lsl #0x10
02159e54  mov r1,r0, asr #0x10
02159e58  ldrh r0,[r6,#0x0]
02159e5c  add r0,r0,r1
02159e60  strh r0,[r6,#0x0]
02159e64  ldrh r0,[r6,#0x0]
02159e68  bl 0x0200c99c
02159e6c  ldr r1,[0x2159ea4]
02159e70  bl 0x0200c5ac
02159e74  mov r1,r0
02159e78  ldr r0,[0x2159ea8]
02159e7c  bl 0x0200c9e4
02159e80  bl 0x0200c8e0
02159e84  str r0,[sp,#0x0]
02159e88  add r1,sp,#0x0
02159e8c  mov r0,r4
02159e90  bl 0x02151858
02159e94  ldrsh r0,[r5,#0x0]
02159e98  sub r0,r0,#0x1
02159e9c  strh r0,[r5,#0x0]
02159ea0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
