0202c5f0  stmdb sp!,{r3,lr}
0202c5f4  mov r2,r1
0202c5f8  mov r1,r0
0202c5fc  ldr r3,[r1,#0x0]
0202c600  add r0,sp,#0x0
0202c604  ldr r3,[r3,#0x30]
0202c608  blx r3
0202c60c  add r0,sp,#0x0
0202c610  ldr r0,[r0,#0x0]
0202c614  add r1,r0,#0x800
0202c618  mov r0,r1, asr #0xb
0202c61c  add r0,r1,r0, lsr #0x14
0202c620  mov r0,r0, asr #0xc
0202c624  ldmia sp!,{r3,pc}
