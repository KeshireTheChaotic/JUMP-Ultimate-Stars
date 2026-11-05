02058750  stmdb sp!,{lr}
02058754  sub sp,sp,#0xc
02058758  add r0,sp,#0x0
0205875c  bl 0x020554a8
02058760  mov r2,#0x0
02058764  add r1,sp,#0x0
02058768  mov r3,r2
0205876c  ldrb r0,[r1,#0x0]
02058770  add r2,r2,#0x1
02058774  cmp r2,#0x6
02058778  add r0,r3,r0
0205877c  mov r0,r0, lsl #0x10
02058780  mov r3,r0, lsr #0x10
02058784  add r1,r1,#0x1
02058788  blt 0x0205876c
0205878c  ldr r0,[0x20587e8]
02058790  mov r1,#0x7
02058794  ldr r0,[r0,#0x0]
02058798  ldr r2,[0x20587ec]
0205879c  add r0,r3,r0
020587a0  mov r0,r0, lsl #0x10
020587a4  mov r3,r0, lsr #0x10
020587a8  mul r0,r3,r1
020587ac  mov r0,r0, lsl #0x10
020587b0  mov r3,r0, lsr #0x10
020587b4  smull r0,r1,r2,r3
020587b8  mov r1,r1, asr #0x3
020587bc  mov r0,r3, lsr #0x1f
020587c0  ldr r2,[0x20587f0]
020587c4  add r1,r0,r1
020587c8  smull r0,r1,r2,r1
020587cc  sub r1,r3,r0
020587d0  add r0,r1,#0xc8
020587d4  mov r0,r0, lsl #0x10
020587d8  mov r0,r0, lsr #0x10
020587dc  add sp,sp,#0xc
020587e0  ldmia sp!,{lr}
020587e4  bx lr
