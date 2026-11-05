0216da3c  stmdb sp!,{r4,r5,r6,r7,lr}
0216da40  sub sp,sp,#0xc
0216da44  mov r1,#0x0
0216da48  mov r5,r0
0216da4c  str r1,[sp,#0x8]
0216da50  ldr r0,[r5,#0x34]
0216da54  cmp r0,#0x0
0216da58  beq 0x0216da6c
0216da5c  ldr r0,[r0,#0x2c]
0216da60  tst r0,#0x9
0216da64  strne r1,[r5,#0x34]
0216da68  strne r1,[r5,#0x30]
0216da6c  ldr r0,[r5,#0x2c]
0216da70  ldr lr,[r5,#0x30]
0216da74  ldr r0,[r0,#0x10]
0216da78  cmp lr,#0x0
0216da7c  ldr r4,[r0,#0x5c]
0216da80  beq 0x0216db88
0216da84  ldrsh r6,[r5,#0x38]
0216da88  ldr r2,[lr,#0x4]
0216da8c  ldr r1,[r4,#0x10]
0216da90  mov r0,r6, asr #0x5
0216da94  sub r1,r2,r1
0216da98  sub r1,r1,#0x1000
0216da9c  ldrsh r3,[r5,#0x3a]
0216daa0  mul r2,r1,r0
0216daa4  rsb r12,r3,#0x0
0216daa8  ldr r3,[lr,#0x0]
0216daac  ldr r1,[r4,#0xc]
0216dab0  mov r12,r12, asr #0x5
0216dab4  sub r1,r3,r1
0216dab8  mla r2,r1,r12,r2
0216dabc  cmp r2,#0x0
0216dac0  ble 0x0216dadc
0216dac4  add r1,r6,r12
0216dac8  strh r1,[r5,#0x38]
0216dacc  ldrsh r1,[r5,#0x3a]
0216dad0  add r0,r1,r0
0216dad4  strh r0,[r5,#0x3a]
0216dad8  b 0x0216daf0
0216dadc  sublt r1,r6,r12
0216dae0  strhlt r1,[r5,#0x38]
0216dae4  ldrshlt r1,[r5,#0x3a]
0216dae8  sublt r0,r1,r0
0216daec  strhlt r0,[r5,#0x3a]
0216daf0  ldrsh r0,[r5,#0x38]
0216daf4  ldrsh r7,[r5,#0x3a]
0216daf8  smulbb r0,r0,r0
0216dafc  bl 0x0200c954
0216db00  mov r6,r0
0216db04  smulbb r0,r7,r7
0216db08  bl 0x0200c954
0216db0c  mov r1,r0
0216db10  mov r0,r6
0216db14  bl 0x0200bfb4
0216db18  bl 0x0200cb80
0216db1c  mov r1,r0
0216db20  ldr r0,[0x216dc2c]
0216db24  bl 0x0200c9e4
0216db28  bl 0x0200c8e0
0216db2c  str r0,[sp,#0x8]
0216db30  ldrsh r1,[r5,#0x38]
0216db34  add r0,sp,#0x4
0216db38  add r2,sp,#0x8
0216db3c  bl 0x0216c2fc
0216db40  add r1,sp,#0x4
0216db44  ldr r1,[r1,#0x0]
0216db48  add r0,sp,#0x0
0216db4c  mov r3,r1, lsl #0x8
0216db50  mov r1,r3, asr #0xb
0216db54  add r1,r3,r1, lsr #0x14
0216db58  mov r1,r1, asr #0xc
0216db5c  strh r1,[r5,#0x38]
0216db60  ldrsh r1,[r5,#0x3a]
0216db64  add r2,sp,#0x8
0216db68  bl 0x0216c2fc
0216db6c  add r0,sp,#0x0
0216db70  ldr r0,[r0,#0x0]
0216db74  mov r1,r0, lsl #0x8
0216db78  mov r0,r1, asr #0xb
0216db7c  add r0,r1,r0, lsr #0x14
0216db80  mov r0,r0, asr #0xc
0216db84  strh r0,[r5,#0x3a]
0216db88  ldrh r1,[r5,#0x20]
0216db8c  ldrsh r0,[r5,#0x38]
0216db90  mul r0,r1,r0
0216db94  mov r0,r0, asr #0x8
0216db98  strh r0,[r4,#0x24]
0216db9c  ldrh r1,[r5,#0x20]
0216dba0  ldrsh r0,[r5,#0x3a]
0216dba4  mul r0,r1,r0
0216dba8  mov r0,r0, asr #0x8
0216dbac  strh r0,[r4,#0x26]
0216dbb0  ldr r0,[r5,#0x8]
0216dbb4  ldr r0,[r0,#0x8]
0216dbb8  cmp r0,#0x0
0216dbbc  moveq r0,#0x1
0216dbc0  movne r0,#0x0
0216dbc4  tst r0,#0x10
0216dbc8  beq 0x0216dbe4
0216dbcc  ldrsh r0,[r5,#0x38]
0216dbd0  cmp r0,#0x0
0216dbd4  movlt r1,#0x1
0216dbd8  ldr r0,[r5,#0x2c]
0216dbdc  movge r1,#0x0
0216dbe0  bl 0x02083950
0216dbe4  ldr r0,[r5,#0x2c]
0216dbe8  bl 0x0216ed30
0216dbec  cmp r0,#0x0
0216dbf0  ldrhne r0,[r5,#0x26]
0216dbf4  orrne r0,r0,#0x80
0216dbf8  strhne r0,[r5,#0x26]
0216dbfc  ldr r1,[r5,#0x2c]
0216dc00  ldr r0,[r1,#0x2c]
0216dc04  tst r0,#0x8
0216dc08  movne r0,#0x0
0216dc0c  bne 0x0216dc24
0216dc10  ldr r0,[r1,#0x10]
0216dc14  ldr r0,[r0,#0x78]
0216dc18  tst r0,#0x400
0216dc1c  moveq r0,#0x1
0216dc20  movne r0,#0x0
0216dc24  add sp,sp,#0xc
0216dc28  ldmia sp!,{r4,r5,r6,r7,pc}
