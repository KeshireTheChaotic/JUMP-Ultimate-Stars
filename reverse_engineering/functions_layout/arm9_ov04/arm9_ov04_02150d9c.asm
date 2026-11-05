02150d9c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02150da0  movs r9,r0
02150da4  mov r8,r1
02150da8  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
02150dac  strh r8,[r9,#0x2e]
02150db0  strh r2,[r9,#0x30]
02150db4  ldrsh r2,[r9,#0x28]
02150db8  mov r0,#0x6
02150dbc  ldrsh r1,[r9,#0x2a]
02150dc0  smulbb r0,r2,r0
02150dc4  ldrsh r4,[r9,#0x2e]
02150dc8  ldrsh r3,[r9,#0x2c]
02150dcc  ldrsh r2,[r9,#0x30]
02150dd0  sub r4,r4,r0
02150dd4  add r0,r1,r1, lsr #0x1f
02150dd8  sub r1,r2,r0, asr #0x1
02150ddc  sub r3,r4,r3, lsl #0x1
02150de0  mov r0,r3, lsl #0x10
02150de4  mov r1,r1, lsl #0x10
02150de8  mov r8,r0, asr #0x10
02150dec  mov r7,r1, asr #0x4
02150df0  mov r5,#0x0
02150df4  add r0,r9,r5, lsl #0x2
02150df8  cmp r5,#0x2
02150dfc  ldr r1,[r0,#0x8]
02150e00  cmpne r5,#0x5
02150e04  ldrsheq r0,[r9,#0x2c]
02150e08  ldr r1,[r1,#0x4]
02150e0c  addeq r0,r0,r0, lsr #0x1f
02150e10  moveq r0,r0, lsl #0xf
02150e14  moveq r4,r0, asr #0x10
02150e18  ldrshne r0,[r9,#0x28]
02150e1c  ldr r6,[r1,#0x50]
02150e20  addne r0,r0,r0, lsr #0x1f
02150e24  movne r0,r0, lsl #0xf
02150e28  movne r4,r0, asr #0x10
02150e2c  add r0,r8,r4
02150e30  mov r0,r0, lsl #0x10
02150e34  mov r8,r0, asr #0x10
02150e38  mov r0,r8, lsl #0xc
02150e3c  str r0,[r6,#0xc]
02150e40  str r7,[r6,#0x10]
02150e44  ldrb r0,[r6,#0x24]
02150e48  orr r1,r0,#0x1
02150e4c  cmp r0,r1
02150e50  beq 0x02150e64
02150e54  mov r0,r6
02150e58  ldr r2,[r0,#0x0]
02150e5c  ldr r2,[r2,#0x18]
02150e60  blx r2
02150e64  ldrb r1,[r6,#0x24]
02150e68  add r0,r8,r4
02150e6c  mov r0,r0, lsl #0x10
02150e70  orr r1,r1,#0x31
02150e74  add r5,r5,#0x1
02150e78  strb r1,[r6,#0x24]
02150e7c  cmp r5,#0x8
02150e80  mov r8,r0, asr #0x10
02150e84  blt 0x02150df4
02150e88  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
