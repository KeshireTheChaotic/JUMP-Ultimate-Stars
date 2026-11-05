02080d28  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02080d2c  ldrsh r8,[r0,#0x4]
02080d30  ldrsh r6,[r0,#0x0]
02080d34  ldrsh r4,[r0,#0x6]
02080d38  ldrsh r0,[r0,#0x2]
02080d3c  sub r5,r6,r8
02080d40  add r7,r2,r5
02080d44  add r6,r6,r8
02080d48  sub r5,r0,r4
02080d4c  add r4,r0,r4
02080d50  add r2,r2,r6
02080d54  ldrsh r12,[r1,#0x4]
02080d58  ldrsh r8,[r1,#0x0]
02080d5c  add r5,r3,r5
02080d60  add r4,r3,r4
02080d64  mov r3,r5, lsl #0x10
02080d68  mov r0,r7, lsl #0x10
02080d6c  mov r7,r4, lsl #0x10
02080d70  ldrsh r6,[sp,#0x20]
02080d74  sub r4,r8,r12
02080d78  ldrsh r9,[r1,#0x6]
02080d7c  ldrsh r5,[r1,#0x2]
02080d80  add r1,r8,r12
02080d84  add r4,r6,r4
02080d88  add r6,r6,r1
02080d8c  mov r1,r4, lsl #0x10
02080d90  mov r4,r0, asr #0x10
02080d94  mov r0,r6, lsl #0x10
02080d98  sub r6,r5,r9
02080d9c  ldrsh r8,[sp,#0x24]
02080da0  add r5,r5,r9
02080da4  cmp r4,r1, asr #0x10
02080da8  add r5,r8,r5
02080dac  add r6,r8,r6
02080db0  mov r8,r6, lsl #0x10
02080db4  mov r1,r1, asr #0x10
02080db8  mov r2,r2, lsl #0x10
02080dbc  mov r9,r5, lsl #0x10
02080dc0  mov r5,r2, asr #0x10
02080dc4  mov r6,r3, asr #0x10
02080dc8  mov r3,r9, asr #0x10
02080dcc  mov r2,r8, asr #0x10
02080dd0  mov r0,r0, asr #0x10
02080dd4  movle r4,r1
02080dd8  cmp r5,r0
02080ddc  movge r5,r0
02080de0  cmp r6,r2
02080de4  ldr r9,[sp,#0x28]
02080de8  mov r7,r7, asr #0x10
02080dec  movle r6,r2
02080df0  cmp r7,r3
02080df4  movge r7,r3
02080df8  cmp r4,r5
02080dfc  ldr r8,[sp,#0x2c]
02080e00  streq r4,[r9,#0x0]
02080e04  beq 0x02080e28
02080e08  ldr r0,[0x2080e58]
02080e0c  ldr r0,[r0,#0x0]
02080e10  ldr r0,[r0,#0x4]
02080e14  bl 0x02031070
02080e18  sub r1,r5,r4
02080e1c  bl 0x0200d338
02080e20  add r0,r4,r1
02080e24  str r0,[r9,#0x0]
02080e28  cmp r6,r7
02080e2c  streq r6,[r8,#0x0]
02080e30  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
02080e34  ldr r0,[0x2080e58]
02080e38  ldr r0,[r0,#0x0]
02080e3c  ldr r0,[r0,#0x4]
02080e40  bl 0x02031070
02080e44  sub r1,r7,r6
02080e48  bl 0x0200d338
02080e4c  add r0,r6,r1
02080e50  str r0,[r8,#0x0]
02080e54  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
