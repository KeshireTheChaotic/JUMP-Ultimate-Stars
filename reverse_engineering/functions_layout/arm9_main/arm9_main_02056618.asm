02056618  stmdb sp!,{lr}
0205661c  sub sp,sp,#0x4
02056620  ldr r12,[sp,#0x8]
02056624  mov lr,r2
02056628  str r3,[sp,#0x0]
0205662c  mov r2,r1
02056630  orr r1,r0,r12, lsl #0x18
02056634  mov r3,lr
02056638  mov r0,#0x7
0205663c  bl 0x02056594
02056640  add sp,sp,#0x4
02056644  ldmia sp!,{lr}
02056648  bx lr
