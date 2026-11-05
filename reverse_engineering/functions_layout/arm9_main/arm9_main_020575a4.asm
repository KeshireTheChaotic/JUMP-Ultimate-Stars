020575a4  stmdb sp!,{r4,r5,lr}
020575a8  sub sp,sp,#0x4
020575ac  mov r5,r0
020575b0  mov r4,r1
020575b4  bl 0x02056ae0
020575b8  add r0,r5,r4, lsl #0x2
020575bc  ldr r4,[r0,#0x3c]
020575c0  cmp r4,#0x0
020575c4  beq 0x020575d4
020575c8  cmp r4,#0x2000000
020575cc  addcc r4,r5,r4
020575d0  b 0x020575d8
020575d4  mov r4,#0x0
020575d8  bl 0x02056acc
020575dc  mov r0,r4
020575e0  add sp,sp,#0x4
020575e4  ldmia sp!,{r4,r5,lr}
020575e8  bx lr
