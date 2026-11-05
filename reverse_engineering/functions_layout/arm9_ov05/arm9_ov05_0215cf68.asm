0215cf68  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0215cf6c  sub sp,sp,#0x8
0215cf70  mov r10,r0
0215cf74  mov r9,r1
0215cf78  mov r8,r2
0215cf7c  add r4,r10,#0x234
0215cf80  mov r5,#0x0
0215cf84  b 0x0215d0e8
0215cf88  ldrb r1,[r10,#0x4df]
0215cf8c  mov r0,#0x0
0215cf90  tst r1,#0x1
0215cf94  beq 0x0215cfac
0215cf98  ldr r1,[r4,#0x0]
0215cf9c  ldrb r1,[r1,#0x40]
0215cfa0  cmp r1,#0x0
0215cfa4  moveq r0,#0x1
0215cfa8  b 0x0215cfe4
0215cfac  tst r1,#0x2
0215cfb0  beq 0x0215cfc8
0215cfb4  ldr r1,[r4,#0x0]
0215cfb8  ldrb r1,[r1,#0x40]
0215cfbc  cmp r1,#0x2
0215cfc0  movne r0,#0x1
0215cfc4  b 0x0215cfe4
0215cfc8  ldr r2,[r4,#0x0]
0215cfcc  ldr r1,[r10,#0x20c]
0215cfd0  ldr r2,[r2,#0x34]
0215cfd4  cmp r1,r2
0215cfd8  ldrne r1,[r10,#0x210]
0215cfdc  cmpne r1,r2
0215cfe0  moveq r0,#0x1
0215cfe4  cmp r0,#0x0
0215cfe8  beq 0x0215d020
0215cfec  ldr r1,[r4,#0x4]
0215cff0  add r0,sp,#0x4
0215cff4  bl 0x0215ced4
0215cff8  add r0,sp,#0x4
0215cffc  ldr r0,[r0,#0x0]
0215d000  bl 0x0215b71c
0215d004  bl 0x0215b6f4
0215d008  ldr r0,[r0,#0x4]
0215d00c  add r1,r4,#0x8
0215d010  mov r2,#0x1
0215d014  mov r3,#0xf
0215d018  bl 0x02029c68
0215d01c  b 0x0215d0e0
0215d020  mov r6,#0x0
0215d024  add r0,r4,r6, lsl #0x1
0215d028  ldrh r2,[r0,#0x8]
0215d02c  mov r1,r8
0215d030  mov r0,r2, asr #0xa
0215d034  and r0,r0,#0x1f
0215d038  orr r0,r0,r0, lsl #0x5
0215d03c  mov r0,r0, lsr #0x5
0215d040  mul r0,r9,r0
0215d044  mov r3,r2, asr #0x5
0215d048  and r11,r2,#0x1f
0215d04c  and r7,r3,#0x1f
0215d050  bl 0x0200d338
0215d054  orr r1,r11,r11, lsl #0x5
0215d058  mov r1,r1, lsr #0x5
0215d05c  mov r11,r0
0215d060  mul r0,r9,r1
0215d064  mov r1,r8
0215d068  bl 0x0200d338
0215d06c  orr r1,r7,r7, lsl #0x5
0215d070  mov r1,r1, lsr #0x5
0215d074  mov r7,r0
0215d078  mul r0,r9,r1
0215d07c  mov r1,r8
0215d080  bl 0x0200d338
0215d084  add r1,r10,r6, lsl #0x1
0215d088  mov r3,r11, lsl #0x1b
0215d08c  and r2,r7,#0x1f
0215d090  mov r0,r0, lsl #0x1b
0215d094  orr r0,r2,r0, lsr #0x16
0215d098  add r6,r6,#0x1
0215d09c  orr r2,r0,r3, lsr #0x11
0215d0a0  add r0,r1,#0x200
0215d0a4  strh r2,[r0,#0x14]
0215d0a8  cmp r6,#0xf
0215d0ac  blt 0x0215d024
0215d0b0  ldr r1,[r4,#0x4]
0215d0b4  add r0,sp,#0x0
0215d0b8  bl 0x0215ced4
0215d0bc  add r0,sp,#0x0
0215d0c0  ldr r0,[r0,#0x0]
0215d0c4  bl 0x0215b71c
0215d0c8  bl 0x0215b6f4
0215d0cc  ldr r0,[r0,#0x4]
0215d0d0  add r1,r10,#0x214
0215d0d4  mov r2,#0x1
0215d0d8  mov r3,#0xf
0215d0dc  bl 0x02029c68
0215d0e0  add r5,r5,#0x1
0215d0e4  add r4,r4,#0x28
0215d0e8  add r0,r10,#0x400
0215d0ec  ldrsb r0,[r0,#0xd4]
0215d0f0  cmp r5,r0
0215d0f4  blt 0x0215cf88
0215d0f8  add sp,sp,#0x8
0215d0fc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
