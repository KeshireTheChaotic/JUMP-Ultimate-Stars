0207e280  stmdb sp!,{r4,lr}
0207e284  sub sp,sp,#0x10
0207e288  mov r4,r0
0207e28c  bl 0x0207e06c
0207e290  mov r1,r0, lsl #0x10
0207e294  ldr r0,[r4,#0xf8]
0207e298  add r2,sp,#0x0
0207e29c  mov r1,r1, asr #0x10
0207e2a0  bl 0x0216293c
0207e2a4  ldr r0,[sp,#0x4]
0207e2a8  add sp,sp,#0x10
0207e2ac  ldmia sp!,{r4,pc}
