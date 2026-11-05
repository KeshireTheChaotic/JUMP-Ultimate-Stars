027e6770  stmdb sp!,{lr}
027e6774  sub sp,sp,#0x4
027e6778  ldr r1,[0x27e67a8]
027e677c  ldr r1,[r1,#0x550]
027e6780  ldrh r1,[r1,#0x0]
027e6784  cmp r1,#0x9
027e6788  bne 0x027e679c
027e678c  ldr r0,[r0,#0x4]
027e6790  mov r0,r0, lsl #0x10
027e6794  mov r0,r0, lsr #0x10
027e6798  bl 0x027e78f0
027e679c  add sp,sp,#0x4
027e67a0  ldmia sp!,{lr}
027e67a4  bx lr
