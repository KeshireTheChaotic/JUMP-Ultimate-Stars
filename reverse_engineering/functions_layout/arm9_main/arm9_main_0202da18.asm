0202da18  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0202da1c  sub sp,sp,#0x18
0202da20  mov r6,r1
0202da24  mov r7,r0
0202da28  mov r0,r2
0202da2c  add r1,sp,#0xc
0202da30  mov r2,#0xc
0202da34  bl 0x02051730
0202da38  ldr r0,[r7,#0x14]
0202da3c  mov r1,r6
0202da40  ldr r2,[r0,#0x0]
0202da44  ldr r2,[r2,#0x50]
0202da48  blx r2
0202da4c  mov r4,r0
0202da50  ldr r0,[sp,#0xc]
0202da54  ldr r5,[r4,#0x0]
0202da58  mov r0,r0, lsl #0xc
0202da5c  str r0,[sp,#0x8]
0202da60  add r0,sp,#0x8
0202da64  add r1,r7,#0x18
0202da68  bl 0x02018ac8
0202da6c  ldr r1,[sp,#0x8]
0202da70  ldr r0,[sp,#0x10]
0202da74  add r2,r1,r5, lsl #0xc
0202da78  mov r1,r0, lsl #0xc
0202da7c  mov r0,r2, asr #0xb
0202da80  add r0,r2,r0, lsr #0x14
0202da84  mov r0,r0, asr #0xc
0202da88  str r0,[sp,#0xc]
0202da8c  ldr r5,[r4,#0x4]
0202da90  add r0,sp,#0x4
0202da94  str r1,[sp,#0x4]
0202da98  add r1,r7,#0x18
0202da9c  bl 0x02018ac8
0202daa0  ldr r1,[sp,#0x4]
0202daa4  ldr r0,[sp,#0x14]
0202daa8  add r2,r1,r5, lsl #0xc
0202daac  mov r1,r0, lsl #0xc
0202dab0  mov r0,r2, asr #0xb
0202dab4  add r0,r2,r0, lsr #0x14
0202dab8  mov r0,r0, asr #0xc
0202dabc  str r0,[sp,#0x10]
0202dac0  ldr r4,[r4,#0x8]
0202dac4  add r0,sp,#0x0
0202dac8  str r1,[sp,#0x0]
0202dacc  add r1,r7,#0x18
0202dad0  bl 0x02018ac8
0202dad4  ldr r0,[sp,#0x0]
0202dad8  mov r1,r6
0202dadc  add r3,r0,r4, lsl #0xc
0202dae0  mov r0,r3, asr #0xb
0202dae4  add r0,r3,r0, lsr #0x14
0202dae8  mov r0,r0, asr #0xc
0202daec  str r0,[sp,#0x14]
0202daf0  ldr r0,[r7,#0x14]
0202daf4  add r2,sp,#0xc
0202daf8  ldr r3,[r0,#0x0]
0202dafc  ldr r3,[r3,#0x24]
0202db00  blx r3
0202db04  add sp,sp,#0x18
0202db08  ldmia sp!,{r3,r4,r5,r6,r7,pc}
