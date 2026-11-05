0219fe54  stmdb sp!,{r3,lr}
0219fe58  sub sp,sp,#0x8
0219fe5c  ldr r1,[0x219fe9c]
0219fe60  ldr r1,[r1,#0x0]
0219fe64  cmp r1,#0x0
0219fe68  beq 0x0219fe94
0219fe6c  strb r0,[sp,#0x4]
0219fe70  bl 0x0219b620
0219fe74  mov r0,r0, lsl #0x18
0219fe78  mov r12,#0xff
0219fe7c  mov r3,r0, asr #0x18
0219fe80  add r1,sp,#0x4
0219fe84  mov r0,#0xb
0219fe88  mov r2,#0x1
0219fe8c  str r12,[sp,#0x0]
0219fe90  bl 0x0219f834
0219fe94  add sp,sp,#0x8
0219fe98  ldmia sp!,{r3,pc}
