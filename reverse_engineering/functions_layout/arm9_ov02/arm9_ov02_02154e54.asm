02154e54  stmdb sp!,{r4,lr}
02154e58  ldr r1,[r1,#0x0]
02154e5c  mov r4,r0
02154e60  mov r0,r1, lsl #0x6
02154e64  str r0,[r4,#0x0]
02154e68  ldr r2,[r2,#0x0]
02154e6c  mov r1,r2, asr #0x5
02154e70  add r1,r2,r1, lsr #0x1a
02154e74  mov r1,r1, asr #0x6
02154e78  bl 0x0200d12c
02154e7c  str r0,[r4,#0x0]
02154e80  ldmia sp!,{r4,pc}
