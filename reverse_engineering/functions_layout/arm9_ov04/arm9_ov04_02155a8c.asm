02155a8c  stmdb sp!,{r4,lr}
02155a90  sub sp,sp,#0x8
02155a94  ldr r0,[r0,#0x4]
02155a98  ldr r4,[r0,#0x10]
02155a9c  ldrsb r0,[r4,#0xd]
02155aa0  add r0,r0,#0x1
02155aa4  strb r0,[r4,#0xd]
02155aa8  ldrsb r1,[r4,#0xd]
02155aac  cmp r1,#0x8
02155ab0  blt 0x02155ae8
02155ab4  mov r1,#0x1000
02155ab8  mov r0,r4
02155abc  str r1,[sp,#0x4]
02155ac0  bl 0x02155a3c
02155ac4  add r1,sp,#0x4
02155ac8  bl 0x02155970
02155acc  mov r0,#0x1
02155ad0  strb r0,[r4,#0xc]
02155ad4  ldr r0,[r4,#0x0]
02155ad8  ldr r1,[0x2155b18]
02155adc  ldr r0,[r0,#0x4]
02155ae0  bl 0x02028384
02155ae4  b 0x02155b10
02155ae8  mov r0,#0x1000
02155aec  mul r1,r0,r1
02155af0  mov r0,r1, asr #0x2
02155af4  add r0,r1,r0, lsr #0x1d
02155af8  mov r1,r0, asr #0x3
02155afc  mov r0,r4
02155b00  str r1,[sp,#0x0]
02155b04  bl 0x02155a3c
02155b08  add r1,sp,#0x0
02155b0c  bl 0x02155970
02155b10  add sp,sp,#0x8
02155b14  ldmia sp!,{r4,pc}
