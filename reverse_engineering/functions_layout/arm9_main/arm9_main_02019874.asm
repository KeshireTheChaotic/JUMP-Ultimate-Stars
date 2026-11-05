02019874  stmdb sp!,{r3,r4,r5,lr}
02019878  ldr r1,[r0,#0x8]
0201987c  ldmia r0,{r2,r3}
02019880  rsb lr,r2,r2, lsl #0x5
02019884  rsb r12,r3,r3, lsl #0x5
02019888  ldr r5,[r0,#0xc]
0201988c  rsb r4,r1,r1, lsl #0x5
02019890  mov r2,lr, asr #0xb
02019894  mov r3,r12, asr #0xb
02019898  mov r1,r4, asr #0xb
0201989c  add r2,lr,r2, lsr #0x14
020198a0  add r3,r12,r3, lsr #0x14
020198a4  mov r0,r5, asr #0xb
020198a8  add r1,r4,r1, lsr #0x14
020198ac  mov r2,r2, lsl #0x4
020198b0  add r0,r5,r0, lsr #0x14
020198b4  mov r0,r0, lsl #0x4
020198b8  mov r3,r3, lsl #0x4
020198bc  mov r12,r2, lsr #0x10
020198c0  mov r1,r1, lsl #0x4
020198c4  mov r2,r3, lsr #0x10
020198c8  mov r3,r1, lsr #0x10
020198cc  mov r4,r0, lsr #0x10
020198d0  mov r0,r2, lsl #0x1b
020198d4  and r1,r12,#0x1f
020198d8  orr r0,r1,r0, lsr #0x16
020198dc  mov r2,r3, lsl #0x1b
020198e0  mov r1,r4, lsl #0x1f
020198e4  orr r0,r0,r2, lsr #0x11
020198e8  orr r0,r0,r1, lsr #0x10
020198ec  mov r0,r0, lsl #0x10
020198f0  mov r0,r0, lsr #0x10
020198f4  ldmia sp!,{r3,r4,r5,pc}
