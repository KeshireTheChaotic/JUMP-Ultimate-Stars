02045bd0  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02045bd4  mov r8,r1
02045bd8  mov r6,r0
02045bdc  blx 0x02045bbc
02045be0  mov r7,r0
02045be4  mov r0,r8
02045be8  ldr r1,[r0,#0x0]
02045bec  ldr r1,[r1,#0x4]
02045bf0  blx r1
02045bf4  ldr r1,[r6,#0x18]
02045bf8  bl 0x0200d338
02045bfc  mov r5,r0
02045c00  mov r0,r8
02045c04  ldr r2,[r0,#0x0]
02045c08  mvn r1,#0x0
02045c0c  ldr r2,[r2,#0x0]
02045c10  mov r4,r5
02045c14  blx r2
02045c18  ldr r1,[r8,#0x4]
02045c1c  ldr r0,[r8,#0x8]
02045c20  add r12,r5,r7
02045c24  str r1,[r0,#0x4]
02045c28  ldmib r8,{r0,r1}
02045c2c  str r1,[r0,#0x8]
02045c30  ldr r0,[r6,#0x8]
02045c34  mov r2,#0x1
02045c38  mov r3,#0x0
02045c3c  cmp r12,r0
02045c40  bcs 0x02045ccc
02045c44  ldr lr,[r6,#0x10]
02045c48  mov r0,r12, lsl #0x2
02045c4c  add r1,lr,r12, lsl #0x2
02045c50  ldrh r8,[r1,#0x2]
02045c54  mov r1,r8, lsl #0x10
02045c58  movs r1,r1, lsr #0x1f
02045c5c  beq 0x02045ccc
02045c60  ldrsh r1,[lr,r0]
02045c64  mov lr,r8, lsl #0x11
02045c68  ldr r8,[r6,#0xc]
02045c6c  mov r2,r3
02045c70  sub r8,r8,lr, lsr #0x11
02045c74  str r8,[r6,#0xc]
02045c78  ldr r9,[r6,#0x10]
02045c7c  ldr r8,[r6,#0x14]
02045c80  add r0,r9,r0
02045c84  cmp r8,r0
02045c88  addeq r0,r9,r5, lsl #0x2
02045c8c  add r7,r7,lr, lsr #0x11
02045c90  streq r0,[r6,#0x14]
02045c94  beq 0x02045cc0
02045c98  ldrsh lr,[r8,#0x0]
02045c9c  mov r3,r8
02045ca0  cmp lr,r12
02045ca4  beq 0x02045cbc
02045ca8  mov r0,lr, lsl #0x2
02045cac  add r3,r9,lr, lsl #0x2
02045cb0  ldrsh lr,[r9,r0]
02045cb4  cmp lr,r12
02045cb8  bne 0x02045ca8
02045cbc  strh r5,[r3,#0x0]
02045cc0  ldr r8,[r6,#0x10]
02045cc4  mov r0,r5, lsl #0x2
02045cc8  strh r1,[r8,r0]
02045ccc  cmp r5,#0x0
02045cd0  beq 0x02045dc8
02045cd4  ldr r0,[r6,#0x10]
02045cd8  sub r12,r5,#0x1
02045cdc  add r1,r0,r12, lsl #0x2
02045ce0  ldrh r1,[r1,#0x2]
02045ce4  mov r8,r12, lsl #0x2
02045ce8  mov r1,r1, lsl #0x10
02045cec  movs r1,r1, lsr #0x1f
02045cf0  beq 0x02045dc8
02045cf4  ldrsh r1,[r0,r8]
02045cf8  cmp r1,#0x0
02045cfc  addlt r1,r5,r1
02045d00  sublt r4,r1,#0x1
02045d04  movge r4,r12
02045d08  add r0,r0,r4, lsl #0x2
02045d0c  ldrh r1,[r0,#0x2]
02045d10  ldr r0,[r6,#0xc]
02045d14  cmp r2,#0x0
02045d18  mov r1,r1, lsl #0x11
02045d1c  sub r0,r0,r1, lsr #0x11
02045d20  str r0,[r6,#0xc]
02045d24  add r7,r7,r1, lsr #0x11
02045d28  bne 0x02045dc4
02045d2c  ldr r2,[r6,#0x10]
02045d30  ldr r1,[r6,#0x14]
02045d34  add r0,r2,r5, lsl #0x2
02045d38  cmp r1,r0
02045d3c  bne 0x02045d78
02045d40  ldrsh r8,[r1,#0x0]
02045d44  cmp r8,r4
02045d48  beq 0x02045d60
02045d4c  mov r0,r8, lsl #0x2
02045d50  add r1,r2,r8, lsl #0x2
02045d54  ldrsh r8,[r2,r0]
02045d58  cmp r8,r4
02045d5c  bne 0x02045d4c
02045d60  mov r0,r4, lsl #0x2
02045d64  ldrsh r0,[r2,r0]
02045d68  strh r0,[r1,#0x0]
02045d6c  ldr r0,[r6,#0x10]
02045d70  add r0,r0,r4, lsl #0x2
02045d74  str r0,[r6,#0x14]
02045d78  cmp r3,#0x0
02045d7c  beq 0x02045d94
02045d80  ldr r1,[r6,#0x10]
02045d84  mov r8,r4, lsl #0x2
02045d88  ldrsh r0,[r1,r8]
02045d8c  cmp r5,r0
02045d90  bne 0x02045dac
02045d94  ldr r2,[r6,#0x10]
02045d98  mov r0,r5, lsl #0x2
02045d9c  ldrsh r1,[r2,r0]
02045da0  mov r0,r4, lsl #0x2
02045da4  strh r1,[r2,r0]
02045da8  b 0x02045dc4
02045dac  mov r2,r5, lsl #0x2
02045db0  ldrsh r0,[r1,r2]
02045db4  strh r0,[r3,#0x0]
02045db8  ldr r1,[r6,#0x10]
02045dbc  ldrsh r0,[r1,r8]
02045dc0  strh r0,[r1,r2]
02045dc4  mov r2,#0x0
02045dc8  ldr r0,[r6,#0x10]
02045dcc  cmp r7,#0x1
02045dd0  add r1,r0,r4, lsl #0x2
02045dd4  ldrh r0,[r1,#0x2]
02045dd8  orr r0,r0,#0x8000
02045ddc  strh r0,[r1,#0x2]
02045de0  bls 0x02045e10
02045de4  add r0,r4,r7
02045de8  sub r1,r0,#0x1
02045dec  ldr r0,[r6,#0x10]
02045df0  mov r3,r1, lsl #0x2
02045df4  add r5,r0,r1, lsl #0x2
02045df8  ldrh r0,[r5,#0x2]
02045dfc  rsb r1,r7,#0x1
02045e00  orr r0,r0,#0x8000
02045e04  strh r0,[r5,#0x2]
02045e08  ldr r0,[r6,#0x10]
02045e0c  strh r1,[r0,r3]
02045e10  ldr r1,[r6,#0x10]
02045e14  mov r0,#0x8000
02045e18  add r8,r1,r4, lsl #0x2
02045e1c  ldrh r5,[r8,#0x2]
02045e20  rsb r0,r0,#0x0
02045e24  mov r1,r7, lsl #0x10
02045e28  mov r3,r0, lsr #0x11
02045e2c  and r5,r5,r0
02045e30  and r1,r3,r1, lsr #0x10
02045e34  orr r1,r5,r1
02045e38  strh r1,[r8,#0x2]
02045e3c  cmp r2,#0x0
02045e40  beq 0x02045e84
02045e44  ldr r1,[r6,#0x14]
02045e48  cmp r1,#0x0
02045e4c  bne 0x02045e64
02045e50  ldr r1,[r6,#0x10]
02045e54  mov r2,r3
02045e58  mov r0,r4, lsl #0x2
02045e5c  strh r2,[r1,r0]
02045e60  b 0x02045e78
02045e64  ldr r2,[r6,#0x10]
02045e68  mov r0,r4, lsl #0x2
02045e6c  sub r1,r1,r2
02045e70  mov r1,r1, lsr #0x2
02045e74  strh r1,[r2,r0]
02045e78  ldr r0,[r6,#0x10]
02045e7c  add r0,r0,r4, lsl #0x2
02045e80  str r0,[r6,#0x14]
02045e84  ldr r0,[r6,#0xc]
02045e88  add r0,r0,r7
02045e8c  str r0,[r6,#0xc]
02045e90  ldr r0,[r6,#0x10]
02045e94  add r0,r0,r4, lsl #0x2
02045e98  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
