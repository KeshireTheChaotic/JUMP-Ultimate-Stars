0206f9d4  stmdb sp!,{r4,lr}
0206f9d8  and r1,r1,#0xff000000
0206f9dc  mov r1,r1, lsr #0x18
0206f9e0  mov r4,r0
0206f9e4  cmp r1,#0x4
0206f9e8  addls pc,pc,r1, lsl #0x2
0206f9ec  b 0x0206fa40
0206fa40  ldr r0,[r4,#0x4]
0206fa44  cmp r0,#0x13
0206fa48  ldrsbne r1,[r4,#0x0]
0206fa4c  ldrne r0,[0x206faa0]
0206fa50  strne r1,[r0,#0x18c]
0206fa54  ldmiane sp!,{r4,pc}
0206fa58  mov r0,r4
0206fa5c  mov r1,#0x0
0206fa60  bl 0x0206e5b0
0206fa64  ldmia sp!,{r4,pc}
