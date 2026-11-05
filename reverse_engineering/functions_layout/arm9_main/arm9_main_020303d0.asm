020303d0  stmdb sp!,{r3,r4,r5,lr}
020303d4  mov r5,r0
020303d8  mov r4,r1
020303dc  add r0,sp,#0x0
020303e0  mov r1,#0x1
020303e4  bl 0x0200f69c
020303e8  ldr r2,[r5,#0x0]
020303ec  ldr r1,[r5,#0x4]
020303f0  mov r0,r4
020303f4  add r1,r2,r1, lsl #0x2
020303f8  sub r2,r1,r4
020303fc  mov r1,r2, asr #0x1
02030400  add r1,r2,r1, lsr #0x1e
02030404  mov r1,r1, asr #0x2
02030408  sub r2,r1,#0x1
0203040c  add r1,r4,#0x4
02030410  mov r2,r2, lsl #0x2
02030414  blx 0x02002450
02030418  ldr r1,[r5,#0x4]
0203041c  mov r0,r4
02030420  sub r1,r1,#0x1
02030424  str r1,[r5,#0x4]
02030428  ldmia sp!,{r3,r4,r5,pc}
