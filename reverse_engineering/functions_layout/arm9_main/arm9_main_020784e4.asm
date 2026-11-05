020784e4  stmdb sp!,{r4,lr}
020784e8  ldr r4,[r0,#0x56c]
020784ec  ldrsh r2,[r4,#0x16]
020784f0  mul r0,r2,r1
020784f4  mov r1,#0x64
020784f8  bl 0x0200d12c
020784fc  ldrsh r1,[r4,#0x18]
02078500  mov r0,r0, lsl #0x10
02078504  cmp r1,r0, asr #0x10
02078508  movle r0,#0x1
0207850c  movgt r0,#0x0
02078510  ldmia sp!,{r4,pc}
