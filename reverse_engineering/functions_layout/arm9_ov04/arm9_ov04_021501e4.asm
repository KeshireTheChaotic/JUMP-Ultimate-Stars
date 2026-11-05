021501e4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021501e8  sub sp,sp,#0x8
021501ec  movs r5,r0
021501f0  beq 0x02150268
021501f4  strh r1,[r5,#0x20]
021501f8  strh r2,[r5,#0x22]
021501fc  mov r4,#0x0
02150200  add r7,sp,#0x0
02150204  add r6,sp,#0x4
02150208  b 0x02150254
0215020c  ldr r0,[r5,#0x8]
02150210  ldrsh r3,[r5,#0x22]
02150214  ldr r0,[r0,r4,lsl #0x2]
02150218  mov r1,r7
0215021c  ldr r12,[r0,#0x4]
02150220  mov r2,r6
02150224  ldr lr,[r12,#0x10]
02150228  ldrsh r12,[lr,#0x2]
0215022c  add r3,r12,r3
02150230  mov r3,r3, lsl #0xc
02150234  str r3,[sp,#0x4]
02150238  ldrsh r12,[lr,#0x0]
0215023c  ldrsh r3,[r5,#0x20]
02150240  add r3,r12,r3
02150244  mov r3,r3, lsl #0xc
02150248  str r3,[sp,#0x0]
0215024c  bl 0x0214e1b8
02150250  add r4,r4,#0x1
02150254  ldrsb r0,[r5,#0x18]
02150258  mov r0,r0, lsl #0x1
0215025c  add r0,r0,#0x1
02150260  cmp r4,r0
02150264  blt 0x0215020c
02150268  add sp,sp,#0x8
0215026c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
