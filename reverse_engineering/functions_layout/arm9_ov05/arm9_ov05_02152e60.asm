02152e60  stmdb sp!,{r3,lr}
02152e64  ldr r1,[r0,#0x4]
02152e68  ldr r0,[r1,#0x10]
02152e6c  ldr r2,[r1,#0x124]
02152e70  add r1,r0,#0x400
02152e74  ldrsb r1,[r1,#0x39]
02152e78  cmp r1,#0x0
02152e7c  ldmiane sp!,{r3,pc}
02152e80  mov r1,r2, lsl #0x10
02152e84  mov r3,r1, lsr #0x10
02152e88  mov r2,r2, asr #0x10
02152e8c  mov r1,r2, lsl #0x10
02152e90  mov r2,r1, lsr #0x10
02152e94  cmp r3,#0xb
02152e98  cmplt r2,#0x4
02152e9c  ldmiage sp!,{r3,pc}
02152ea0  mov r1,#0xb
02152ea4  mla r1,r2,r1,r0
02152ea8  add r1,r1,r3
02152eac  add r1,r1,#0x400
02152eb0  ldrsb r1,[r1,#0x72]
02152eb4  bl 0x02153af8
02152eb8  ldmia sp!,{r3,pc}
