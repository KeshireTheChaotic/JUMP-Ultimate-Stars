027f6798  stmdb sp!,{lr}
027f679c  sub sp,sp,#0x4
027f67a0  mov lr,#0x0
027f67a4  mov r2,lr
027f67a8  b 0x027f67c8
027f67ac  mov r1,r2, lsl #0x2
027f67b0  mov r1,r0, lsr r1
027f67b4  and r1,r1,#0xf
027f67b8  cmp r1,#0xa
027f67bc  movcs r0,#0x0
027f67c0  bcs 0x027f6804
027f67c4  add r2,r2,#0x1
027f67c8  cmp r2,#0x8
027f67cc  blt 0x027f67ac
027f67d0  mov r3,#0x0
027f67d4  mov r12,#0x1
027f67d8  mov r2,#0xa
027f67dc  mov r1,r3, lsl #0x2
027f67e0  mov r1,r0, lsr r1
027f67e4  and r1,r1,#0xf
027f67e8  mla lr,r12,r1,lr
027f67ec  add r3,r3,#0x1
027f67f0  mul r1,r12,r2
027f67f4  mov r12,r1
027f67f8  cmp r3,#0x8
027f67fc  blt 0x027f67dc
027f6800  mov r0,lr
027f6804  add sp,sp,#0x4
027f6808  ldmia sp!,{lr}
027f680c  bx lr
