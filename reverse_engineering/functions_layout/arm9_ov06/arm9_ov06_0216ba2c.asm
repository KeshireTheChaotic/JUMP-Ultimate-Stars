0216ba2c  stmdb sp!,{r3,r4,lr}
0216ba30  sub sp,sp,#0x4
0216ba34  mov r4,r0
0216ba38  add r0,r4,#0x2c
0216ba3c  bl 0x0216ce38
0216ba40  ldrh r0,[r4,#0x26]
0216ba44  tst r0,#0x1
0216ba48  beq 0x0216ba5c
0216ba4c  mov r0,r4
0216ba50  add r1,r4,#0x2c
0216ba54  bl 0x0216cd9c
0216ba58  b 0x0216bb00
0216ba5c  ldrh r12,[r4,#0x20]
0216ba60  ldrsh r2,[r4,#0x48]
0216ba64  ldrsh r0,[r4,#0x4a]
0216ba68  ldrsh r1,[r4,#0x58]
0216ba6c  mul r2,r12,r2
0216ba70  mul r3,r12,r0
0216ba74  mov r0,r2, lsl #0x8
0216ba78  sub r1,r1,r0, asr #0x10
0216ba7c  strh r1,[r4,#0x58]
0216ba80  ldrsh r2,[r4,#0x5a]
0216ba84  mov r1,r3, lsl #0x8
0216ba88  sub r2,r2,r1, asr #0x10
0216ba8c  strh r2,[r4,#0x5a]
0216ba90  ldrsh r2,[r4,#0x58]
0216ba94  subs r0,r2,r0, asr #0x10
0216ba98  bmi 0x0216baa8
0216ba9c  ldrsh r0,[r4,#0x5a]
0216baa0  subs r0,r0,r1, asr #0x10
0216baa4  bpl 0x0216baf0
0216baa8  ldr r0,[r4,#0x30]
0216baac  mov r2,#0x0
0216bab0  b 0x0216bae8
0216bab4  ldrb r1,[r0,#0x6]
0216bab8  tst r1,#0x1
0216babc  bne 0x0216bae0
0216bac0  ldr r1,[r4,#0x8]
0216bac4  mov r3,r4
0216bac8  ldr r2,[r1,#0x10]
0216bacc  add r1,r4,#0x2c
0216bad0  str r2,[sp,#0x0]
0216bad4  ldr r2,[r4,#0x2c]
0216bad8  bl 0x0216c5f0
0216badc  b 0x0216baf0
0216bae0  add r2,r2,#0x1
0216bae4  add r0,r0,#0x8
0216bae8  cmp r2,#0x20
0216baec  bcc 0x0216bab4
0216baf0  mov r0,r4
0216baf4  add r1,r4,#0x2c
0216baf8  bl 0x0216cd10
0216bafc  mov r0,#0x1
0216bb00  add sp,sp,#0x4
0216bb04  ldmia sp!,{r3,r4,pc}
