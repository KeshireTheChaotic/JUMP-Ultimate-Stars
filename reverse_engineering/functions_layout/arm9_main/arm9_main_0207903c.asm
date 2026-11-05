0207903c  stmdb sp!,{r3,lr}
02079040  sub sp,sp,#0x8
02079044  strh r1,[r0,#0xcc]
02079048  strh r2,[r0,#0xce]
0207904c  ldrsh r3,[r0,#0xce]
02079050  add r1,sp,#0x4
02079054  add r2,sp,#0x0
02079058  mov r3,r3, lsl #0xc
0207905c  str r3,[sp,#0x0]
02079060  ldrsh r3,[r0,#0xcc]
02079064  mov r3,r3, lsl #0xc
02079068  str r3,[sp,#0x4]
0207906c  ldr r0,[r0,#0xc8]
02079070  bl 0x0206c9f8
02079074  add sp,sp,#0x8
02079078  ldmia sp!,{r3,pc}
