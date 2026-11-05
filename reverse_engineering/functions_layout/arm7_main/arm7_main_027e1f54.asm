027e1f54  stmdb sp!,{r4,r5,r6,r7,lr}
027e1f58  sub sp,sp,#0x4
027e1f5c  ldr r0,[0x27e1fec]
027e1f60  add r7,r0,#0x58
027e1f64  mov r4,#0x1
027e1f68  add r6,r0,#0x28
027e1f6c  add r5,sp,#0x0
027e1f70  mov r0,r6
027e1f74  mov r1,r5
027e1f78  mov r2,r4
027e1f7c  bl 0x037fcbcc
027e1f80  ldr r1,[sp,#0x0]
027e1f84  cmp r1,#0x0
027e1f88  bne 0x027e1f94
027e1f8c  bl 0x037fc640
027e1f90  b 0x027e1fe0
027e1f94  ldrh r2,[r1,#0xc]
027e1f98  and r0,r2,#0xff
027e1f9c  mov r0,r0, lsl #0x10
027e1fa0  mov r3,r0, lsr #0x10
027e1fa4  and r0,r2,#0xff00
027e1fa8  mov r0,r0, lsl #0x10
027e1fac  movs r0,r0, lsr #0x10
027e1fb0  beq 0x027e1fbc
027e1fb4  cmp r0,#0x100
027e1fb8  bne 0x027e1fd0
027e1fbc  ands r0,r3,#0x80
027e1fc0  beq 0x027e1fd0
027e1fc4  mov r0,r1
027e1fc8  bl 0x027e1e08
027e1fcc  b 0x027e1f70
027e1fd0  mov r0,r7
027e1fd4  mov r2,r4
027e1fd8  bl 0x037fcc6c
027e1fdc  b 0x027e1f70
027e1fe0  add sp,sp,#0x4
027e1fe4  ldmia sp!,{r4,r5,r6,r7,lr}
027e1fe8  bx lr
