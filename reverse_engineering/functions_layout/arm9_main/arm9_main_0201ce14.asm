0201ce14  stmdb sp!,{r3,r4,r5,lr}
0201ce18  mov r5,r0
0201ce1c  ldr r0,[r5,#0x4]
0201ce20  mov r4,r1
0201ce24  ldr r0,[r0,#0x8]
0201ce28  str r0,[r4,#0x8]
0201ce2c  ldr r0,[r5,#0x4]
0201ce30  ldr r0,[r0,#0xc]
0201ce34  str r0,[r4,#0xc]
0201ce38  ldr r0,[r5,#0x4]
0201ce3c  ldrh r0,[r0,#0x6]
0201ce40  strh r0,[r4,#0x6]
0201ce44  ldr r0,[r4,#0xc]
0201ce48  str r4,[r0,#0x8]
0201ce4c  ldr r0,[r5,#0x4]
0201ce50  cmp r0,#0x0
0201ce54  beq 0x0201ce64
0201ce58  ldr r1,[r0,#0x0]
0201ce5c  ldr r1,[r1,#0x4]
0201ce60  blx r1
0201ce64  str r4,[r5,#0x4]
0201ce68  ldrh r0,[r4,#0x6]
0201ce6c  mov r0,r0, asr #0x8
0201ce70  add r0,r5,r0, lsl #0x2
0201ce74  str r4,[r0,#0xc]
0201ce78  ldmia sp!,{r3,r4,r5,pc}
