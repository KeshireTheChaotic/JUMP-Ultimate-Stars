027e67dc  stmdb sp!,{lr}
027e67e0  sub sp,sp,#0x4
027e67e4  ldr r1,[0x27e6814]
027e67e8  ldr r1,[r1,#0x550]
027e67ec  ldrh r1,[r1,#0x0]
027e67f0  cmp r1,#0x9
027e67f4  bne 0x027e6808
027e67f8  ldr r0,[r0,#0x4]
027e67fc  mov r0,r0, lsl #0x10
027e6800  mov r0,r0, lsr #0x10
027e6804  bl 0x027e79f4
027e6808  add sp,sp,#0x4
027e680c  ldmia sp!,{lr}
027e6810  bx lr
