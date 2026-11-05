01ff9808  stmdb sp!,{lr}
01ff980c  ldr r7,[r0,#-0x4]
01ff9810  ldr r9,[r0,#0x4]
01ff9814  add r7,r7,r9
01ff9818  cmp r9,#0x0
01ff981c  moveq r8,#0x80
01ff9820  moveq r12,#0x80
01ff9824  beq 0x01ff9960
01ff9828  movs r8,r9, lsl #0x18
01ff982c  beq 0x01ff98d8
01ff9830  movs r8,r9, lsr #0x8
01ff9834  beq 0x01ff991c
01ff9838  mov r8,#0x0
01ff983c  mov r12,#0x0
01ff9840  sub r6,r7,#0x100
01ff9844  mov r10,r4, lsr #0x1
01ff9848  ldrh r9,[r6],#0x2
01ff984c  subs r10,r10,#0x1
01ff9850  add r12,r12,r9, lsr #0x8
01ff9854  and r9,r9,#0xff
01ff9858  add r8,r8,r9
01ff985c  bne 0x01ff9848
01ff9860  add r8,r8,r4, lsr #0x2
01ff9864  add r12,r12,r4, lsr #0x2
01ff9868  adr r9,0x1ff9800
01ff986c  ldrb r9,[r9,r4,lsr #0x2]
01ff9870  mov lr,#0x0
01ff9874  mov r11,#0x0
01ff9878  mov r8,r8, lsr r9
01ff987c  mov r12,r12, lsr r9
01ff9880  sub r6,r7,#0x2
01ff9884  mov r10,r5, lsr #0x1
01ff9888  ldrh r9,[r6,#0x0]
01ff988c  add r6,r6,#0x100
01ff9890  subs r10,r10,#0x1
01ff9894  add r11,r11,r9, lsr #0x8
01ff9898  and r9,r9,#0xff
01ff989c  add lr,lr,r9
01ff98a0  bne 0x01ff9888
01ff98a4  add lr,lr,r5, lsr #0x2
01ff98a8  add r11,r11,r5, lsr #0x2
01ff98ac  adr r9,0x1ff9800
01ff98b0  ldrb r9,[r9,r5,lsr #0x2]
01ff98b4  mov lr,lr, lsr r9
01ff98b8  mov r11,r11, lsr r9
01ff98bc  add r8,r8,lr
01ff98c0  add r12,r12,r11
01ff98c4  add r8,r8,#0x1
01ff98c8  add r12,r12,#0x1
01ff98cc  mov r8,r8, lsr #0x1
01ff98d0  mov r12,r12, lsr #0x1
01ff98d4  b 0x01ff9960
01ff98d8  mov r8,#0x0
01ff98dc  mov r12,#0x0
01ff98e0  sub r6,r7,#0x100
01ff98e4  mov r10,r4, lsr #0x1
01ff98e8  ldrh r9,[r6],#0x2
01ff98ec  subs r10,r10,#0x1
01ff98f0  add r12,r12,r9, lsr #0x8
01ff98f4  and r9,r9,#0xff
01ff98f8  add r8,r8,r9
01ff98fc  bne 0x01ff98e8
01ff9900  add r8,r8,r4, lsr #0x2
01ff9904  add r12,r12,r4, lsr #0x2
01ff9908  adr r9,0x1ff9800
01ff990c  ldrb r9,[r9,r4,lsr #0x2]
01ff9910  mov r8,r8, lsr r9
01ff9914  mov r12,r12, lsr r9
01ff9918  b 0x01ff9960
01ff991c  mov r8,#0x0
01ff9920  mov r12,#0x0
01ff9924  sub r6,r7,#0x2
01ff9928  mov r10,r5, lsr #0x1
01ff992c  ldrh r9,[r6,#0x0]
01ff9930  add r6,r6,#0x100
01ff9934  subs r10,r10,#0x1
01ff9938  add r12,r12,r9, lsr #0x8
01ff993c  and r9,r9,#0xff
01ff9940  add r8,r8,r9
01ff9944  bne 0x01ff992c
01ff9948  add r8,r8,r5, lsr #0x2
01ff994c  add r12,r12,r5, lsr #0x2
01ff9950  adr r9,0x1ff9800
01ff9954  ldrb r9,[r9,r5,lsr #0x2]
01ff9958  mov r8,r8, lsr r9
01ff995c  mov r12,r12, lsr r9
01ff9960  orr r8,r8,r12, lsl #0x8
01ff9964  orr r8,r8,r8, lsl #0x10
01ff9968  mov r10,r5, lsr #0x1
01ff996c  mov r11,r4, lsr #0x1
01ff9970  str r8,[r7],#0x4
01ff9974  subs r11,r11,#0x2
01ff9978  bne 0x01ff9970
01ff997c  subs r10,r10,#0x1
01ff9980  ldmiaeq sp!,{pc}
01ff9984  add r7,r7,#0x100
01ff9988  sub r7,r7,r4
01ff998c  b 0x01ff996c
