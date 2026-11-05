0205d8cc  stmdb sp!,{lr}
0205d8d0  sub sp,sp,#0x4
0205d8d4  bl 0x0205d7a4
0205d8d8  cmp r0,#0x0
0205d8dc  moveq r0,#0x1
0205d8e0  movne r0,#0x0
0205d8e4  add sp,sp,#0x4
0205d8e8  ldmia sp!,{pc}
