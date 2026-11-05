0207e5fc  stmdb sp!,{r3,lr}
0207e600  sub sp,sp,#0x8
0207e604  add r12,sp,#0x4
0207e608  str r12,[sp,#0x0]
0207e60c  ldr r0,[r0,#0xf8]
0207e610  add r3,sp,#0x5
0207e614  bl 0x021629a4
0207e618  ldrb r2,[sp,#0x5]
0207e61c  ldrsb r1,[sp,#0x4]
0207e620  orr r2,r2,r0, lsl #0x10
0207e624  mov r0,r1, lsl #0x18
0207e628  orr r0,r2,r0, lsr #0x10
0207e62c  add sp,sp,#0x8
0207e630  ldmia sp!,{r3,pc}
