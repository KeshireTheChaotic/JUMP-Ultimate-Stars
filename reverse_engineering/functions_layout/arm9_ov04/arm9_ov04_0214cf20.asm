0214cf20  stmdb sp!,{r4,lr}
0214cf24  ldr r4,[r2,#0x0]
0214cf28  ldr r2,[r1,#0x0]
0214cf2c  ldr r1,[r3,#0x0]
0214cf30  rsb lr,r2,r2, lsl #0x5
0214cf34  rsb r12,r4,r4, lsl #0x5
0214cf38  rsb r4,r1,r1, lsl #0x5
0214cf3c  mov r2,lr, asr #0xb
0214cf40  mov r3,r12, asr #0xb
0214cf44  mov r1,r4, asr #0xb
0214cf48  add r2,lr,r2, lsr #0x14
0214cf4c  add r3,r12,r3, lsr #0x14
0214cf50  add r1,r4,r1, lsr #0x14
0214cf54  mov r2,r2, lsl #0x4
0214cf58  mov r3,r3, lsl #0x4
0214cf5c  mov r1,r1, lsl #0x4
0214cf60  mov r12,r2, lsr #0x10
0214cf64  mov r2,r3, lsr #0x10
0214cf68  mov r3,r1, lsr #0x10
0214cf6c  ldr r4,[r0,#0x4]
0214cf70  and r1,r12,#0x1f
0214cf74  mov r0,r2, lsl #0x1b
0214cf78  mov r2,r3, lsl #0x1b
0214cf7c  orr r0,r1,r0, lsr #0x16
0214cf80  orr r0,r0,r2, lsr #0x11
0214cf84  orr r1,r0,#0x8000
0214cf88  add r0,r4,#0x800
0214cf8c  strh r1,[r0,#0xb8]
0214cf90  mov r0,#0x1
0214cf94  strb r0,[r4,#0x8fc]
0214cf98  ldmia sp!,{r4,pc}
