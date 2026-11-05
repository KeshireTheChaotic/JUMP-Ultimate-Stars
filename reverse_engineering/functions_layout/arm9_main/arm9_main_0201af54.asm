0201af54  stmdb sp!,{r4,lr}
0201af58  mov r4,r0
0201af5c  str r1,[r4,#0x8]
0201af60  str r2,[r4,#0xc]
0201af64  bl 0x0201afa8
0201af68  str r0,[r4,#0x1c]
0201af6c  ldr r1,[r0,#0x14]
0201af70  mov r0,r4
0201af74  strh r1,[r4,#0x4]
0201af78  ldr r1,[r4,#0x1c]
0201af7c  ldr r1,[r1,#0x14]
0201af80  mov r1,r1, lsl #0x10
0201af84  mov r1,r1, lsr #0x10
0201af88  str r1,[r4,#0x10]
0201af8c  bl 0x0201b078
0201af90  str r0,[r4,#0x14]
0201af94  mov r0,#0x0
0201af98  strh r0,[r4,#0x6]
0201af9c  mov r0,r4
0201afa0  str r4,[r4,#0x0]
0201afa4  ldmia sp!,{r4,pc}
