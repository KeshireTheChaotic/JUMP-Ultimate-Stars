0206f088  stmdb sp!,{r3,r4,r5,lr}
0206f08c  mov r5,r1
0206f090  and r1,r5,#0xf
0206f094  mov r4,r0
0206f098  cmp r1,#0x3
0206f09c  addls pc,pc,r1, lsl #0x2
0206f0a0  b 0x0206f12c
0206f12c  mov r1,r5, asr #0x4
0206f130  ldr r0,[0x206f144]
0206f134  and r1,r1,#0xf
0206f138  ldrsb r0,[r0,r1]
0206f13c  str r0,[r4,#0x4]
0206f140  ldmia sp!,{r3,r4,r5,pc}
