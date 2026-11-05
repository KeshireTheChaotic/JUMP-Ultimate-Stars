02169ecc  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02169ed0  sub sp,sp,#0x3c
02169ed4  mov r6,#0x0
02169ed8  sub r3,r6,#0x79
02169edc  mov r2,#0x40
02169ee0  mov r10,r0
02169ee4  strb r3,[sp,#0x0]
02169ee8  strb r2,[sp,#0x1]
02169eec  strb r6,[sp,#0x2]
02169ef0  ldr r0,[r10,#0x4]
02169ef4  mov r9,r1
02169ef8  mov r7,r6
02169efc  bl 0x0216d358
02169f00  str r0,[r10,#0x68]
02169f04  mov r5,r6
02169f08  mov r11,#0x1
02169f0c  b 0x02169fb8
02169f10  ldr r0,[0x216a004]
02169f14  mov r8,r5, lsr #0x5
02169f18  add r0,r0,r8, lsl #0x2
02169f1c  ldr r0,[r0,#0xa58]
02169f20  and r4,r5,#0x1f
02169f24  tst r0,r11, lsl r4
02169f28  beq 0x02169fb4
02169f2c  ldr r0,[r10,#0x4]
02169f30  mov r1,r5
02169f34  bl 0x0216d3a0
02169f38  add r0,r0,#0x5f
02169f3c  add r0,r0,#0x8700
02169f40  mov r0,r0, lsl #0x10
02169f44  mov r2,r0, asr #0x10
02169f48  ldr r0,[0x216a004]
02169f4c  mov r1,r2, asr #0x8
02169f50  add r0,r0,r8, lsl #0x2
02169f54  ldr r0,[r0,#0xa60]
02169f58  strb r1,[sp,#0x4]
02169f5c  tst r0,r11, lsl r4
02169f60  mov r0,#0x0
02169f64  strb r2,[sp,#0x5]
02169f68  strb r0,[sp,#0x6]
02169f6c  beq 0x02169f7c
02169f70  add r0,sp,#0x4
02169f74  add r1,sp,#0x0
02169f78  bl 0x020741bc
02169f7c  ldr r0,[r10,#0x4]
02169f80  mov r1,r5
02169f84  bl 0x0216d360
02169f88  mov r1,r0
02169f8c  add r0,sp,#0x4
02169f90  bl 0x020741bc
02169f94  ldr r0,[r10,#0x44]
02169f98  add r1,sp,#0x4
02169f9c  ldr r0,[r0,#0x4]
02169fa0  mov r2,r5
02169fa4  blx 0x021ace90
02169fa8  cmp r9,r5
02169fac  moveq r7,r6
02169fb0  add r6,r6,#0x1
02169fb4  add r5,r5,#0x1
02169fb8  ldr r0,[r10,#0x68]
02169fbc  cmp r5,r0
02169fc0  blt 0x02169f10
02169fc4  ldr r0,[r10,#0x44]
02169fc8  mov r1,r7
02169fcc  ldr r0,[r0,#0x4]
02169fd0  mov r2,#0x0
02169fd4  ldr r3,[r0,#0x0]
02169fd8  ldr r3,[r3,#0x1a0]
02169fdc  blx r3
02169fe0  ldr r0,[r10,#0x44]
02169fe4  mov r1,r7
02169fe8  ldr r0,[r0,#0x4]
02169fec  ldr r2,[r0,#0x0]
02169ff0  ldr r2,[r2,#0x198]
02169ff4  blx r2
02169ff8  str r7,[r10,#0x64]
02169ffc  add sp,sp,#0x3c
0216a000  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
