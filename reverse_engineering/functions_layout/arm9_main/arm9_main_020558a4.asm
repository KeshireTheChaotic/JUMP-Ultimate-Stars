020558a4  stmdb sp!,{r4,r5,lr}
020558a8  sub sp,sp,#0x4
020558ac  mov r4,r0
020558b0  mov r5,r1
020558b4  bl 0x02055238
020558b8  ldr r1,[0x2055908]
020558bc  cmp r5,#0x0
020558c0  str r5,[r1,r4,lsl #0x2]
020558c4  beq 0x020558e0
020558c8  ldr r3,[0x205590c]
020558cc  mov r1,#0x1
020558d0  ldr r2,[r3,#0x388]
020558d4  orr r1,r2,r1, lsl r4
020558d8  str r1,[r3,#0x388]
020558dc  b 0x020558f8
020558e0  ldr r3,[0x205590c]
020558e4  mov r1,#0x1
020558e8  mvn r1,r1, lsl r4
020558ec  ldr r2,[r3,#0x388]
020558f0  and r1,r2,r1
020558f4  str r1,[r3,#0x388]
020558f8  bl 0x0205524c
020558fc  add sp,sp,#0x4
02055900  ldmia sp!,{r4,r5,lr}
02055904  bx lr
