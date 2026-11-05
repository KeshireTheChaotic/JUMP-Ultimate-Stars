02056320  stmdb sp!,{lr}
02056324  sub sp,sp,#0x4
02056328  mov r0,r0, lsl #0x8
0205632c  and r1,r0,#0x7f00
02056330  mov r0,#0x5
02056334  mov r2,#0x0
02056338  bl 0x020557c8
0205633c  cmp r0,#0x0
02056340  movge r0,#0x1
02056344  movlt r0,#0x0
02056348  add sp,sp,#0x4
0205634c  ldmia sp!,{lr}
02056350  bx lr
