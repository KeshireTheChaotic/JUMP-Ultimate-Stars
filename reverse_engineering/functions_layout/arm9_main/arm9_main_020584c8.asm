020584c8  stmdb sp!,{lr}
020584cc  sub sp,sp,#0xc
020584d0  ldr r0,[0x205853c]
020584d4  ldr r0,[r0,#0x0]
020584d8  cmp r0,#0x10000
020584dc  bne 0x02058510
020584e0  bl 0x02056298
020584e4  add r0,sp,#0x0
020584e8  bl 0x0205611c
020584ec  cmp r0,#0x0
020584f0  bne 0x02058510
020584f4  ldr r2,[sp,#0x8]
020584f8  ldr r0,[sp,#0x4]
020584fc  ldr r1,[0x205853c]
02058500  add r0,r2,r0, lsl #0x8
02058504  mov r0,r0, lsl #0x10
02058508  mov r0,r0, lsr #0x10
0205850c  str r0,[r1,#0x0]
02058510  ldr r1,[0x205853c]
02058514  ldr r0,[r1,#0x0]
02058518  add r0,r0,#0x1
0205851c  mov r0,r0, lsl #0x10
02058520  mov r2,r0, lsr #0x10
02058524  mov r0,r2, lsl #0x10
02058528  str r2,[r1,#0x0]
0205852c  mov r0,r0, lsr #0x10
02058530  add sp,sp,#0xc
02058534  ldmia sp!,{lr}
02058538  bx lr
