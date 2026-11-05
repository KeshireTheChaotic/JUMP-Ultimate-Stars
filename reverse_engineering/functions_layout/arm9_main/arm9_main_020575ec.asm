020575ec  stmdb sp!,{r4,r5,r6,lr}
020575f0  mov r6,r0
020575f4  mov r5,r1
020575f8  mov r4,r2
020575fc  bl 0x02056ae0
02057600  add r0,r6,#0x3c
02057604  add r2,r6,r5, lsl #0x2
02057608  add r0,r0,r5, lsl #0x2
0205760c  mov r1,#0x4
02057610  str r4,[r2,#0x3c]
02057614  bl 0x02054000
02057618  bl 0x02056acc
0205761c  ldmia sp!,{r4,r5,r6,lr}
02057620  bx lr
