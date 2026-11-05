0207b7f0  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0207b7f4  sub sp,sp,#0x28
0207b7f8  str r0,[sp,#0x0]
0207b7fc  add r0,sp,#0x1c
0207b800  bl 0x0201899c
0207b804  add r0,sp,#0x10
0207b808  bl 0x0201899c
0207b80c  ldr r0,[sp,#0x0]
0207b810  add r11,r0,#0x10
0207b814  mov r0,#0x0
0207b818  str r0,[sp,#0x4]
0207b81c  ldr r6,[r11,#0x0]
0207b820  b 0x0207baa0
0207b824  ldr r4,[r6,#0x8]
0207b828  add r1,sp,#0x1c
0207b82c  ldr r0,[r4,#0x8]
0207b830  bl 0x0207afdc
0207b834  ldr r7,[r11,#0x0]
0207b838  b 0x0207ba94
0207b83c  ldr r5,[r7,#0x8]
0207b840  cmp r4,r5
0207b844  beq 0x0207ba90
0207b848  ldr r1,[r4,#0x14]
0207b84c  ldr r0,[r5,#0x10]
0207b850  tst r1,r0
0207b854  bne 0x0207ba90
0207b858  ldr r0,[r5,#0x8]
0207b85c  add r1,sp,#0x10
0207b860  bl 0x0207afdc
0207b864  ldr r1,[sp,#0x1c]
0207b868  ldrsh r3,[r4,#0x2c]
0207b86c  mov r0,r1, asr #0xb
0207b870  add r0,r1,r0, lsr #0x14
0207b874  mov r0,r0, lsl #0x4
0207b878  ldr r1,[sp,#0x10]
0207b87c  add r3,r3,r0, asr #0x10
0207b880  mov r0,r1, asr #0xb
0207b884  add r0,r1,r0, lsr #0x14
0207b888  ldrsh r2,[r5,#0x2c]
0207b88c  mov r0,r0, lsl #0x4
0207b890  ldrsh r1,[r4,#0x30]
0207b894  add r0,r2,r0, asr #0x10
0207b898  subs r2,r3,r0
0207b89c  ldrsh r0,[r5,#0x30]
0207b8a0  rsbmi r2,r2,#0x0
0207b8a4  add r0,r1,r0
0207b8a8  cmp r2,r0
0207b8ac  bgt 0x0207ba90
0207b8b0  ldr r1,[sp,#0x20]
0207b8b4  ldrsh r3,[r4,#0x2e]
0207b8b8  mov r0,r1, asr #0xb
0207b8bc  add r0,r1,r0, lsr #0x14
0207b8c0  mov r0,r0, lsl #0x4
0207b8c4  ldr r1,[sp,#0x14]
0207b8c8  add r3,r3,r0, asr #0x10
0207b8cc  mov r0,r1, asr #0xb
0207b8d0  add r0,r1,r0, lsr #0x14
0207b8d4  ldrsh r2,[r5,#0x2e]
0207b8d8  mov r0,r0, lsl #0x4
0207b8dc  ldrsh r1,[r4,#0x32]
0207b8e0  add r0,r2,r0, asr #0x10
0207b8e4  subs r2,r3,r0
0207b8e8  ldrsh r0,[r5,#0x32]
0207b8ec  rsbmi r2,r2,#0x0
0207b8f0  add r0,r1,r0
0207b8f4  cmp r2,r0
0207b8f8  bgt 0x0207ba90
0207b8fc  mov r0,#0x0
0207b900  add r8,r4,#0x3c
0207b904  str r0,[sp,#0x8]
0207b908  b 0x0207ba30
0207b90c  ldr r0,[sp,#0x8]
0207b910  add r9,r5,#0x3c
0207b914  and r0,r0,#0xff
0207b918  mov r10,#0x0
0207b91c  str r0,[sp,#0xc]
0207b920  b 0x0207ba14
0207b924  ldr r3,[sp,#0x1c]
0207b928  ldrsh r1,[r8,#0x0]
0207b92c  mov r2,r3, asr #0xb
0207b930  add r2,r3,r2, lsr #0x14
0207b934  mov r2,r2, lsl #0x4
0207b938  ldr r3,[sp,#0x10]
0207b93c  add r1,r1,r2, asr #0x10
0207b940  mov r2,r3, asr #0xb
0207b944  add r2,r3,r2, lsr #0x14
0207b948  ldrsh r0,[r9,#0x0]
0207b94c  mov r2,r2, lsl #0x4
0207b950  add r0,r0,r2, asr #0x10
0207b954  subs r2,r1,r0
0207b958  ldrsh r1,[r8,#0x4]
0207b95c  ldrsh r0,[r9,#0x4]
0207b960  rsbmi r2,r2,#0x0
0207b964  add r0,r1,r0
0207b968  cmp r2,r0
0207b96c  bgt 0x0207ba0c
0207b970  ldr r3,[sp,#0x20]
0207b974  ldrsh r1,[r8,#0x2]
0207b978  mov r2,r3, asr #0xb
0207b97c  add r2,r3,r2, lsr #0x14
0207b980  mov r2,r2, lsl #0x4
0207b984  ldr r3,[sp,#0x14]
0207b988  add r1,r1,r2, asr #0x10
0207b98c  mov r2,r3, asr #0xb
0207b990  add r2,r3,r2, lsr #0x14
0207b994  ldrsh r0,[r9,#0x2]
0207b998  mov r2,r2, lsl #0x4
0207b99c  add r0,r0,r2, asr #0x10
0207b9a0  subs r2,r1,r0
0207b9a4  ldrsh r1,[r8,#0x6]
0207b9a8  ldrsh r0,[r9,#0x6]
0207b9ac  rsbmi r2,r2,#0x0
0207b9b0  add r0,r1,r0
0207b9b4  cmp r2,r0
0207b9b8  bgt 0x0207ba0c
0207b9bc  ldr r0,[sp,#0x0]
0207b9c0  mov r1,r4
0207b9c4  mov r2,r5
0207b9c8  bl 0x0207acb8
0207b9cc  cmp r0,#0x0
0207b9d0  beq 0x0207ba0c
0207b9d4  mov r1,#0x2
0207b9d8  strb r1,[r0,#0x10]
0207b9dc  ldr r1,[sp,#0xc]
0207b9e0  strb r1,[r0,#0x11]
0207b9e4  strb r10,[r0,#0x12]
0207b9e8  ldrb r1,[r4,#0x18]
0207b9ec  tst r1,#0x80
0207b9f0  bne 0x0207ba00
0207b9f4  ldrb r1,[r5,#0x18]
0207b9f8  tst r1,#0x80
0207b9fc  beq 0x0207ba0c
0207ba00  ldrb r1,[r0,#0x10]
0207ba04  orr r1,r1,#0x10
0207ba08  strb r1,[r0,#0x10]
0207ba0c  add r10,r10,#0x1
0207ba10  add r9,r9,#0x8
0207ba14  ldrh r0,[r5,#0xc]
0207ba18  cmp r10,r0
0207ba1c  bcc 0x0207b924
0207ba20  ldr r0,[sp,#0x8]
0207ba24  add r8,r8,#0x8
0207ba28  add r0,r0,#0x1
0207ba2c  str r0,[sp,#0x8]
0207ba30  ldrh r1,[r4,#0xc]
0207ba34  ldr r0,[sp,#0x8]
0207ba38  cmp r0,r1
0207ba3c  bcc 0x0207b90c
0207ba40  ldr r0,[sp,#0x0]
0207ba44  mov r1,r4
0207ba48  mov r2,r5
0207ba4c  bl 0x0207acb8
0207ba50  cmp r0,#0x0
0207ba54  beq 0x0207ba90
0207ba58  mov r1,#0x6
0207ba5c  strb r1,[r0,#0x10]
0207ba60  mov r1,#0xff
0207ba64  strb r1,[r0,#0x11]
0207ba68  strb r1,[r0,#0x12]
0207ba6c  ldrb r1,[r4,#0x18]
0207ba70  tst r1,#0x80
0207ba74  bne 0x0207ba84
0207ba78  ldrb r1,[r5,#0x18]
0207ba7c  tst r1,#0x80
0207ba80  beq 0x0207ba90
0207ba84  ldrb r1,[r0,#0x10]
0207ba88  orr r1,r1,#0x10
0207ba8c  strb r1,[r0,#0x10]
0207ba90  ldr r7,[r7,#0x0]
0207ba94  cmp r7,#0x0
0207ba98  bne 0x0207b83c
0207ba9c  ldr r6,[r6,#0x0]
0207baa0  cmp r6,#0x0
0207baa4  bne 0x0207b824
0207baa8  ldr r0,[sp,#0x4]
0207baac  add r11,r11,#0x8
0207bab0  add r0,r0,#0x1
0207bab4  str r0,[sp,#0x4]
0207bab8  cmp r0,#0x10
0207babc  bcc 0x0207b81c
0207bac0  add sp,sp,#0x28
0207bac4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
