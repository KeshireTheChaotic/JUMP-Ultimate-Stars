0201a900  mov r12,#0x0
0201a904  ldr r3,[0x201a950]
0201a908  mov r1,r12
0201a90c  ldr r2,[r3,r12,lsl #0x2]
0201a910  cmp r2,r0
0201a914  streq r1,[r3,r12,lsl #0x2]
0201a918  add r12,r12,#0x1
0201a91c  cmp r12,#0x4
0201a920  bcc 0x0201a90c
0201a924  ldr r2,[0x201a950]
0201a928  ldr r0,[0x201a954]
0201a92c  mov r3,#0x0
0201a930  ldr r1,[r2,r3,lsl #0x2]
0201a934  cmp r1,#0x0
0201a938  addne r1,r3,#0x1
0201a93c  add r3,r3,#0x1
0201a940  strne r1,[r0,#0x21c]
0201a944  cmp r3,#0x4
0201a948  bcc 0x0201a930
0201a94c  bx lr
