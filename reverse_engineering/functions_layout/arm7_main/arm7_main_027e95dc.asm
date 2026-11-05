027e95dc  stmdb sp!,{r4,r5,lr}
027e95e0  sub sp,sp,#0x4
027e95e4  mov r5,r0
027e95e8  mov r4,r1
027e95ec  ldr r0,[0x27e9648]
027e95f0  ldr r1,[r0,#0x0]
027e95f4  ldr r0,[0x27e964c]
027e95f8  add r0,r1,r0
027e95fc  bl 0x037fd998
027e9600  mov r2,#0x0
027e9604  str r2,[sp,#0x0]
027e9608  ldr r0,[0x27e9648]
027e960c  ldr r1,[r0,#0x0]
027e9610  ldr r0,[0x27e964c]
027e9614  add r0,r1,r0
027e9618  ldr r1,[0x27e9650]
027e961c  umull r12,r3,r5,r1
027e9620  mla r3,r5,r2,r3
027e9624  mla r3,r2,r1,r3
027e9628  mov r2,r3, lsr #0x6
027e962c  mov r1,r12, lsr #0x6
027e9630  orr r1,r1,r3, lsl #0x1a
027e9634  mov r3,r4
027e9638  bl 0x037fdaa4
027e963c  add sp,sp,#0x4
027e9640  ldmia sp!,{r4,r5,lr}
027e9644  bx lr
