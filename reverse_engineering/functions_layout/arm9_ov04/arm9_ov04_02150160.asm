02150160  stmdb sp!,{r3,r4,r5,lr}
02150164  movs r5,r0
02150168  ldmiaeq sp!,{r3,r4,r5,pc}
0215016c  str r1,[r5,#0x40]
02150170  ldrsb r1,[r5,#0x18]
02150174  ldr r4,[r5,#0x8]
02150178  ldrsh lr,[sp,#0x10]
0215017c  mov r1,r1, lsl #0x1
02150180  ldr r4,[r4,r1,lsl #0x2]
02150184  add r2,r2,r2, lsr #0x1f
02150188  ldrsh r12,[sp,#0x14]
0215018c  add r3,r3,r3, lsr #0x1f
02150190  mov r1,r4
02150194  add r2,lr,r2, asr #0x1
02150198  sub r3,r12,r3, asr #0x1
0215019c  bl 0x02150308
021501a0  ldr r2,[r5,#0x38]
021501a4  ldr r1,[r5,#0x40]
021501a8  ldr r0,[r4,#0x4]
021501ac  orr r1,r2,r1
021501b0  mov r2,#0x0
021501b4  bl 0x02023894
021501b8  ldr r0,[r4,#0x4]
021501bc  ldr r0,[r0,#0x68]
021501c0  ldr r1,[r0,#0x0]
021501c4  ldr r1,[r1,#0x6c]
021501c8  blx r1
021501cc  ldr r0,[r4,#0x4]
021501d0  mov r1,#0x1
021501d4  ldr r2,[r0,#0x0]
021501d8  ldr r2,[r2,#0xd8]
021501dc  blx r2
021501e0  ldmia sp!,{r3,r4,r5,pc}
