02165d50  stmdb sp!,{r3,r4,r5,lr}
02165d54  mov r4,r0
02165d58  mov r5,r1
02165d5c  bl 0x02165e70
02165d60  cmp r0,#0x0
02165d64  beq 0x02165e50
02165d68  ldrb r0,[r5,#0x22]
02165d6c  cmp r0,#0x18
02165d70  bcc 0x02165d88
02165d74  cmp r0,#0x1d
02165d78  bhi 0x02165d88
02165d7c  mov r0,#0x7a
02165d80  mov r1,#0x39
02165d84  bl 0x0207342c
02165d88  ldrb r1,[r5,#0x22]
02165d8c  cmp r1,#0xa0
02165d90  bcc 0x02165e20
02165d94  cmp r1,#0xc0
02165d98  bcs 0x02165e20
02165d9c  ldr r0,[r4,#0x10]
02165da0  sub r2,r1,#0xa0
02165da4  ldr r1,[r0,#0x158]
02165da8  add r0,r2,r2, lsr #0x1f
02165dac  tst r1,#0x1
02165db0  mov r0,r0, asr #0x1
02165db4  beq 0x02165de0
02165db8  ldr r1,[0x2165e5c]
02165dbc  add lr,r0,r0, lsl #0x1
02165dc0  ldrb r2,[r1,lr]
02165dc4  ldr r1,[0x2165e60]
02165dc8  ldr r12,[0x2165e64]
02165dcc  mov r3,r2, lsl #0x1
02165dd0  ldrsh r2,[r12,r3]
02165dd4  ldrb r1,[r1,lr]
02165dd8  add r1,r2,r1
02165ddc  strh r1,[r12,r3]
02165de0  ldr r2,[r4,#0x10]
02165de4  ldr r1,[0x2165e68]
02165de8  ldr r2,[r2,#0x5c]
02165dec  add r0,r0,r0, lsl #0x1
02165df0  ldrb r0,[r1,r0]
02165df4  ldr r1,[r2,#0xc]
02165df8  ldr r2,[r2,#0x10]
02165dfc  add r0,r0,#0x300000
02165e00  mov r1,r1, asr #0x8
02165e04  mov r2,r2, asr #0x8
02165e08  mov r3,#0x0
02165e0c  bl 0x0206c7fc
02165e10  mov r0,#0x7a
02165e14  mov r1,#0x53
02165e18  bl 0x0207342c
02165e1c  b 0x02165e50
02165e20  ldr r0,[r5,#0xc]
02165e24  add r0,r0,#0x100
02165e28  ldrsb r0,[r0,#0x53]
02165e2c  cmp r0,r1
02165e30  bne 0x02165e50
02165e34  mov r0,r4
02165e38  bl 0x02166b14
02165e3c  ldr r2,[0x2165e6c]
02165e40  mov r1,r0
02165e44  ldr r0,[r2,#0x0]
02165e48  mov r2,#0x2
02165e4c  bl 0x02165e88
02165e50  mov r0,r4
02165e54  bl 0x02083648
02165e58  ldmia sp!,{r3,r4,r5,pc}
