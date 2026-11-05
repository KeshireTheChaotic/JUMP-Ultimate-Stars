020198f8  stmdb sp!,{r3,r4,lr}
020198fc  sub sp,sp,#0x14
02019900  mov r4,#0x1000
02019904  str r4,[sp,#0x4]
02019908  ldr r3,[r3,#0x0]
0201990c  mov r4,r0
02019910  str r3,[sp,#0x8]
02019914  ldr r2,[r2,#0x0]
02019918  add r0,sp,#0x10
0201991c  str r2,[sp,#0xc]
02019920  ldr r12,[r1,#0x0]
02019924  add r1,sp,#0xc
02019928  add r2,sp,#0x8
0201992c  add r3,sp,#0x4
02019930  str r12,[sp,#0x10]
02019934  bl 0x02019970
02019938  strh r0,[r4,#0x10]
0201993c  ldr r1,[sp,#0x20]
02019940  ldr r2,[0x201996c]
02019944  add r0,sp,#0x0
02019948  bl 0x020199f8
0201994c  add r0,sp,#0x0
02019950  ldr r1,[r0,#0x0]
02019954  mov r0,r1, asr #0xb
02019958  add r0,r1,r0, lsr #0x14
0201995c  mov r0,r0, asr #0xc
02019960  strh r0,[r4,#0x12]
02019964  add sp,sp,#0x14
02019968  ldmia sp!,{r3,r4,pc}
