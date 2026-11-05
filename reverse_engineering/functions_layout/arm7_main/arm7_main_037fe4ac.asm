037fe4ac  stmdb sp!,{lr}
037fe4b0  sub sp,sp,#0x4
037fe4b4  and r0,r1,#0x7f00
037fe4b8  mov r0,r0, lsl #0x8
037fe4bc  mov r0,r0, lsr #0x10
037fe4c0  cmp r0,#0x10
037fe4c4  moveq r1,#0x1
037fe4c8  ldreq r0,[0x37fe4e4]
037fe4cc  strheq r1,[r0,#0x0]
037fe4d0  beq 0x037fe4d8
037fe4d4  bl 0x037fe538
037fe4d8  add sp,sp,#0x4
037fe4dc  ldmia sp!,{lr}
037fe4e0  bx lr
