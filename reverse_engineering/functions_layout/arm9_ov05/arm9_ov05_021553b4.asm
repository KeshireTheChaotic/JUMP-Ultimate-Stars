021553b4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021553b8  mov r7,r0
021553bc  mov r0,#0x1
021553c0  mov r5,r1
021553c4  mov r4,r2
021553c8  bl 0x0203b414
021553cc  ldr r0,[r0,#0x88]
021553d0  mov r1,r5
021553d4  bl 0x021552bc
021553d8  mov r0,#0x2
021553dc  bl 0x0203b414
021553e0  ldr r0,[r0,#0x88]
021553e4  mov r1,r5
021553e8  bl 0x021552bc
021553ec  mov r6,r4, lsl #0xc
021553f0  mov r5,#0x0
021553f4  add r4,sp,#0x0
021553f8  str r6,[sp,#0x0]
021553fc  add r0,r7,r5, lsl #0x2
02155400  ldr r0,[r0,#0x41c]
02155404  mov r1,r4
02155408  bl 0x0214d494
0215540c  add r5,r5,#0x1
02155410  cmp r5,#0x6
02155414  blt 0x021553f8
02155418  ldmia sp!,{r3,r4,r5,r6,r7,pc}
