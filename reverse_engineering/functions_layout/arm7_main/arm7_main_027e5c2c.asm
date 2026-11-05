027e5c2c  stmdb sp!,{lr}
027e5c30  sub sp,sp,#0x204
027e5c34  mov r1,r0
027e5c38  add r0,sp,#0x0
027e5c3c  ldr r1,[r1,#0x4]
027e5c40  mov r1,r1, lsl #0x10
027e5c44  mov r1,r1, lsr #0x10
027e5c48  bl 0x027e23b0
027e5c4c  ldrh r1,[r0,#0x4]
027e5c50  cmp r1,#0x0
027e5c54  beq 0x027e5c64
027e5c58  ldr r0,[0x27e5c88]
027e5c5c  bl 0x027e5bf0
027e5c60  b 0x027e5c7c
027e5c64  bl 0x03808074
027e5c68  mov r1,#0x19
027e5c6c  strh r1,[r0,#0x0]
027e5c70  mov r1,#0x0
027e5c74  strh r1,[r0,#0x2]
027e5c78  bl 0x038080d0
027e5c7c  add sp,sp,#0x204
027e5c80  ldmia sp!,{lr}
027e5c84  bx lr
