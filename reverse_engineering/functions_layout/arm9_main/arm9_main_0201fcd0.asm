0201fcd0  stmdb sp!,{r3,r4,r5,r6,lr}
0201fcd4  sub sp,sp,#0x4
0201fcd8  mov r6,r0
0201fcdc  ldr r1,[r6,#0x54]
0201fce0  cmp r1,#0x0
0201fce4  moveq r0,#0x0
0201fce8  beq 0x0201fd5c
0201fcec  ldr r1,[r0,#0x0]
0201fcf0  ldr r5,[r6,#0x58]
0201fcf4  ldr r1,[r1,#0xa0]
0201fcf8  blx r1
0201fcfc  ldr r0,[r0,#0x0]
0201fd00  add r4,sp,#0x0
0201fd04  str r0,[sp,#0x0]
0201fd08  b 0x0201fd10
0201fd0c  sub r5,r5,#0x4
0201fd10  ldrh r1,[r5,#0x0]
0201fd14  mov r0,r4
0201fd18  bl 0x02016314
0201fd1c  cmp r0,#0x0
0201fd20  bne 0x0201fd0c
0201fd24  add r4,sp,#0x0
0201fd28  b 0x0201fd30
0201fd2c  add r5,r5,#0x4
0201fd30  ldrh r0,[r5,#0x4]
0201fd34  mov r1,r4
0201fd38  bl 0x02016328
0201fd3c  cmp r0,#0x0
0201fd40  bne 0x0201fd2c
0201fd44  ldr r0,[r6,#0x54]
0201fd48  sub r0,r5,r0
0201fd4c  add r0,r0,r0, lsr #0x1f
0201fd50  mov r0,r0, asr #0x1
0201fd54  add r0,r0,r0, lsr #0x1f
0201fd58  mov r0,r0, asr #0x1
0201fd5c  add sp,sp,#0x4
0201fd60  ldmia sp!,{r3,r4,r5,r6,pc}
