02055380  stmdb sp!,{lr}
02055384  sub sp,sp,#0x4
02055388  and r0,r1,#0x7f00
0205538c  mov r0,r0, lsl #0x8
02055390  mov r0,r0, lsr #0x10
02055394  cmp r0,#0x10
02055398  ldreq r0,[0x20553c0]
0205539c  moveq r1,#0x1
020553a0  strheq r1,[r0,#0x0]
020553a4  addeq sp,sp,#0x4
020553a8  ldmiaeq sp!,{lr}
020553ac  bxeq lr
020553b0  bl 0x02055684
020553b4  add sp,sp,#0x4
020553b8  ldmia sp!,{lr}
020553bc  bx lr
