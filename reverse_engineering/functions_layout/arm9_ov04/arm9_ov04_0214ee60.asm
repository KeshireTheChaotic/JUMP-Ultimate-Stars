0214ee60  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
0214ee64  sub sp,sp,#0xc
0214ee68  ldr r12,[0x214eef4]
0214ee6c  mov r8,r1
0214ee70  ldr r1,[r12,#0x0]
0214ee74  mov r7,r2
0214ee78  mov r6,r3
0214ee7c  ldr r5,[sp,#0x2c]
0214ee80  bl 0x0214e3a0
0214ee84  mov r4,r0
0214ee88  ldr r3,[sp,#0x28]
0214ee8c  mov r0,r8
0214ee90  mov r1,r7
0214ee94  mov r2,r6
0214ee98  bl 0x0214e9f0
0214ee9c  mov r1,r0
0214eea0  mov r0,r4
0214eea4  bl 0x0214e478
0214eea8  ldr r1,[sp,#0x28]
0214eeac  mov r0,r4
0214eeb0  mov r1,r1, lsl #0xc
0214eeb4  str r1,[sp,#0x8]
0214eeb8  add r1,sp,#0x8
0214eebc  bl 0x0214ea78
0214eec0  ldr r1,[r5,#0x4]
0214eec4  mov r0,r4
0214eec8  mov r1,r1, lsl #0xc
0214eecc  str r1,[sp,#0x0]
0214eed0  ldr r2,[r5,#0x0]
0214eed4  add r1,sp,#0x4
0214eed8  mov r2,r2, lsl #0xc
0214eedc  str r2,[sp,#0x4]
0214eee0  add r2,sp,#0x0
0214eee4  bl 0x0214e1b8
0214eee8  mov r0,r4
0214eeec  add sp,sp,#0xc
0214eef0  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
