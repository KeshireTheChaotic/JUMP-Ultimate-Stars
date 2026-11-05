0205ec00  stmdb sp!,{r4,r5,lr}
0205ec04  sub sp,sp,#0x4
0205ec08  mov r5,r0
0205ec0c  ldr r3,[r5,#0x4]
0205ec10  sub r0,r2,#0x1
0205ec14  mvn r2,r0
0205ec18  sub r1,r3,r1
0205ec1c  ldr r0,[r5,#0x0]
0205ec20  and r4,r2,r1
0205ec24  cmp r4,r0
0205ec28  addcc sp,sp,#0x4
0205ec2c  movcc r0,#0x0
0205ec30  ldmiacc sp!,{r4,r5,pc}
0205ec34  ldr r0,[r5,#-0x4]
0205ec38  sub r2,r3,r4
0205ec3c  and r0,r0,#0xff
0205ec40  mov r0,r0, lsl #0x10
0205ec44  mov r0,r0, lsr #0x10
0205ec48  ands r0,r0,#0x1
0205ec4c  beq 0x0205ec5c
0205ec50  mov r1,r4
0205ec54  mov r0,#0x0
0205ec58  bl 0x0205174c
0205ec5c  mov r0,r4
0205ec60  str r4,[r5,#0x4]
0205ec64  add sp,sp,#0x4
0205ec68  ldmia sp!,{r4,r5,pc}
