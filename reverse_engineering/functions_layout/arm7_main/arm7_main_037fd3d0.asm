037fd3d0  stmdb sp!,{r4,r5,lr}
037fd3d4  sub sp,sp,#0x4
037fd3d8  mov r4,r0
037fd3dc  mov r5,r1
037fd3e0  bl 0x037fe3a4
037fd3e4  ldr r1,[0x37fd408]
037fd3e8  ldr r1,[r1,r4,lsl #0x2]
037fd3ec  ldr r4,[r1,#0x0]
037fd3f0  str r5,[r1,#0x0]
037fd3f4  bl 0x037fe3b8
037fd3f8  mov r0,r4
037fd3fc  add sp,sp,#0x4
037fd400  ldmia sp!,{r4,r5,lr}
037fd404  bx lr
