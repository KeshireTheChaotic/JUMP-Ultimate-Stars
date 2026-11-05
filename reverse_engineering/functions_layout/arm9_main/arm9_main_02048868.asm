02048868  stmdb sp!,{r4,r5,r6,lr}
0204886c  ldr r0,[r0,#0x34]
02048870  mov r6,r1
02048874  ldr r0,[r0,#0x948]
02048878  mov r5,r2
0204887c  mov r4,r3
02048880  blx r0
02048884  ldr r1,[sp,#0x10]
02048888  mov r2,r4, lsr #0x5
0204888c  sub r1,r1,#0x1
02048890  and r1,r5,r1
02048894  mov r1,r1, lsr #0x5
02048898  mov r5,r5, lsl #0x1b
0204889c  sub r3,r4,#0x1
020488a0  mul r1,r2,r1
020488a4  and r2,r6,r3
020488a8  mov r4,r6, lsl #0x1b
020488ac  mov r3,r5, lsr #0x15
020488b0  add r3,r3,r4, lsr #0x1a
020488b4  add r1,r1,r2, lsr #0x5
020488b8  add r1,r3,r1, lsl #0xb
020488bc  add r0,r1,r0
020488c0  ldmia sp!,{r4,r5,r6,pc}
