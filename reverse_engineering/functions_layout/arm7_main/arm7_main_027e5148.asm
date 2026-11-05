027e5148  stmdb sp!,{r4,lr}
027e514c  sub sp,sp,#0x8
027e5150  ldr r1,[r0,#0x4]
027e5154  mov r1,r1, lsl #0x10
027e5158  mov r4,r1, lsr #0x10
027e515c  mov r1,#0x0
027e5160  add r2,sp,#0x0
027e5164  bl 0x027e4b64
027e5168  cmp r0,#0x1
027e516c  bne 0x027e5194
027e5170  bl 0x03808074
027e5174  mov r1,#0xd
027e5178  strh r1,[r0,#0x0]
027e517c  mov r1,#0x0
027e5180  strh r1,[r0,#0x2]
027e5184  strh r4,[r0,#0x8]
027e5188  ldrh r1,[sp,#0x0]
027e518c  strh r1,[r0,#0xa]
027e5190  bl 0x038080d0
027e5194  add sp,sp,#0x8
027e5198  ldmia sp!,{r4,lr}
027e519c  bx lr
