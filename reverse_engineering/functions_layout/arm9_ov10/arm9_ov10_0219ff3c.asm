0219ff3c  stmdb sp!,{r3,lr}
0219ff40  sub sp,sp,#0x8
0219ff44  ldr r2,[0x219ff88]
0219ff48  ldr r2,[r2,#0x0]
0219ff4c  cmp r2,#0x0
0219ff50  beq 0x0219ff80
0219ff54  strb r0,[sp,#0x4]
0219ff58  strb r1,[sp,#0x5]
0219ff5c  bl 0x0219b620
0219ff60  mov r0,r0, lsl #0x18
0219ff64  mov r12,#0xff
0219ff68  mov r3,r0, asr #0x18
0219ff6c  add r1,sp,#0x4
0219ff70  mov r0,#0xe
0219ff74  mov r2,#0x2
0219ff78  str r12,[sp,#0x0]
0219ff7c  bl 0x0219f834
0219ff80  add sp,sp,#0x8
0219ff84  ldmia sp!,{r3,pc}
