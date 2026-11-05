021514e4  stmdb sp!,{r3,r4,lr}
021514e8  sub sp,sp,#0x4
021514ec  ldr r0,[r0,#0x4]
021514f0  ldr r1,[r0,#0x0]
021514f4  ldr r4,[r0,#0x10]
021514f8  ldr r1,[r1,#0x194]
021514fc  blx r1
02151500  mov r2,r0, lsl #0x10
02151504  mov r1,#0x0
02151508  str r1,[sp,#0x0]
0215150c  mov r3,r2, asr #0x10
02151510  ldr r1,[r4,#0x30]
02151514  ldr r12,[r4,#0x2c]
02151518  mov r0,r4
0215151c  mov r2,#0x1
02151520  blx r12
02151524  add sp,sp,#0x4
02151528  ldmia sp!,{r3,r4,pc}
