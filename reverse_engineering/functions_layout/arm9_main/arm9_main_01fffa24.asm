01fff350  add r1,r3,#0x200
01fff354  add r1,r1,r7, lsl #0x2
01fff358  rsb r7,r6,#0x0
01fff35c  mov r6,r6, lsl #0x1
01fff360  sub r7,r7,r6
01fff364  ldrh r5,[r0],#0x2
01fff368  mov r11,#0xe
01fff36c  ldr r10,[r1,#0x0]
01fff370  mov r2,r5, lsr r11
01fff374  and r2,r2,#0x3
01fff378  mla r2,r6,r2,r7
01fff37c  add r10,r10,r2
01fff380  str r10,[r1],r9
01fff384  subs r11,r11,#0x2
01fff388  bge 0x01fff36c
01fff38c  subs r8,r8,#0x1
01fff390  bne 0x01fff364
01fff394  ldmia sp!,{r1,pc}
01fff398  add r1,r3,#0x200
01fff39c  add r1,r1,r7, lsl #0x2
01fff3a0  rsb r7,r6,#0x0
01fff3a4  mov r6,r6, lsl #0x1
01fff3a8  sub r7,r7,r6, lsl #0x1
01fff3ac  sub r7,r7,r6
01fff3b0  mov r9,#0x0
01fff3b4  mov r8,#0x8
01fff3b8  ldrh r5,[r0],#0x2
01fff3bc  mov r11,#0xd
01fff3c0  ldr r10,[r1,#0x0]
01fff3c4  mov r2,r5, lsr r11
01fff3c8  and r2,r2,#0x7
01fff3cc  mla r2,r6,r2,r7
01fff3d0  add r10,r10,r2
01fff3d4  str r10,[r1],#0xc
01fff3d8  subs r11,r11,#0x3
01fff3dc  bge 0x01fff3c0
01fff3e0  and r5,r5,#0x1
01fff3e4  orr r9,r5,r9, lsl #0x1
01fff3e8  subs r8,r8,#0x1
01fff3ec  bne 0x01fff3b8
01fff3f0  ldr r10,[r1,#0x0]
01fff3f4  mov r2,r9, lsr #0x5
01fff3f8  and r2,r2,#0x7
01fff3fc  mla r2,r6,r2,r7
01fff400  add r10,r10,r2
01fff404  str r10,[r1],#0xc
01fff408  ldr r10,[r1,#0x0]
01fff40c  mov r2,r9, lsr #0x2
01fff410  and r2,r2,#0x7
01fff414  mla r2,r6,r2,r7
01fff418  add r10,r10,r2
01fff41c  str r10,[r1,#0x0]
01fff420  ldmia sp!,{r1,pc}
01fffa24  stmdb sp!,{r1,lr}
01fffa28  add r12,r1,#0x70
01fffa2c  mov r6,r5, lsr #0x6
01fffa30  and r6,r6,#0x7
01fffa34  and r5,r5,#0x3f
01fffa38  strb r5,[r12],#0x1
01fffa3c  ldrh r5,[r0],#0x2
01fffa40  add r8,r1,#0x14c0
01fffa44  mov r7,r5, lsr #0xe
01fffa48  and r7,r7,#0x3
01fffa4c  add r6,r8,r6, lsl #0x1
01fffa50  ldrsh r8,[r6,#0x0]
01fffa54  ldr r6,[r1,#0x68]
01fffa58  mov r11,r5, lsr #0xc
01fffa5c  mul r6,r8,r6
01fffa60  mov r10,r5, lsr #0x6
01fffa64  mov r6,r6, asr #0xd
01fffa68  str r6,[r1,#0x68]
01fffa6c  and r10,r10,#0x3f
01fffa70  strb r10,[r12],#0x1
01fffa74  and r5,r5,#0x3f
01fffa78  strb r5,[r12,#0x0]
01fffa7c  ands r11,r11,#0x3
01fffa80  strb r11,[r1,#0x73]
01fffa84  beq 0x01fff398
01fffa88  adr r10,0x1fffa16
01fffa8c  add r10,r10,r11, lsl #0x1
01fffa90  ldrb r8,[r10,#0x0]
01fffa94  ldrb r9,[r10,#0x1]
01fffa98  b 0x01fff350
