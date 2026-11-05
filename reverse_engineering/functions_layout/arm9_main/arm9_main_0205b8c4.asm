0205b8c4  stmdb sp!,{lr}
0205b8c8  sub sp,sp,#0x4
0205b8cc  ldr r3,[r0,#0x0]
0205b8d0  cmp r3,#0x0
0205b8d4  addeq sp,sp,#0x4
0205b8d8  ldmiaeq sp!,{pc}
0205b8dc  ldrb r0,[r3,#0x2c]
0205b8e0  cmp r0,#0x2
0205b8e4  addeq sp,sp,#0x4
0205b8e8  ldmiaeq sp!,{pc}
0205b8ec  add r0,r3,#0x1c
0205b8f0  mov r1,r1, lsl #0x8
0205b8f4  bl 0x0205e090
0205b8f8  add sp,sp,#0x4
0205b8fc  ldmia sp!,{pc}
