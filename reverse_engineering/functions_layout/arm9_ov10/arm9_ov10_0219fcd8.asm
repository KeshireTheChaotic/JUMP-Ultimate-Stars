0219fcd8  stmdb sp!,{r3,lr}
0219fcdc  sub sp,sp,#0x8
0219fce0  ldr r1,[0x219fd20]
0219fce4  ldr r1,[r1,#0x0]
0219fce8  cmp r1,#0x0
0219fcec  beq 0x0219fd18
0219fcf0  strh r0,[sp,#0x4]
0219fcf4  bl 0x0219b620
0219fcf8  mov r0,r0, lsl #0x18
0219fcfc  mov r12,#0xff
0219fd00  mov r3,r0, asr #0x18
0219fd04  add r1,sp,#0x4
0219fd08  mov r0,#0x6
0219fd0c  mov r2,#0x2
0219fd10  str r12,[sp,#0x0]
0219fd14  bl 0x0219f834
0219fd18  add sp,sp,#0x8
0219fd1c  ldmia sp!,{r3,pc}
