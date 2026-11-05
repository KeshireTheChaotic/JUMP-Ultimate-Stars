0214ce0c  stmdb sp!,{r3,lr}
0214ce10  sub sp,sp,#0x8
0214ce14  ldr lr,[r0,#0x10]
0214ce18  strh r1,[r0,#0x58]
0214ce1c  strh r2,[r0,#0x5a]
0214ce20  cmp lr,#0x0
0214ce24  beq 0x0214ce60
0214ce28  ldrsh r12,[r0,#0x56]
0214ce2c  ldrsh r3,[r0,#0x5a]
0214ce30  add r1,sp,#0x4
0214ce34  add r2,sp,#0x0
0214ce38  add r3,r12,r3
0214ce3c  mov r3,r3, lsl #0xc
0214ce40  str r3,[sp,#0x0]
0214ce44  ldrsh r12,[r0,#0x54]
0214ce48  ldrsh r3,[r0,#0x58]
0214ce4c  mov r0,lr
0214ce50  add r3,r12,r3
0214ce54  mov r3,r3, lsl #0xc
0214ce58  str r3,[sp,#0x4]
0214ce5c  bl 0x0214ce68
0214ce60  add sp,sp,#0x8
0214ce64  ldmia sp!,{r3,pc}
