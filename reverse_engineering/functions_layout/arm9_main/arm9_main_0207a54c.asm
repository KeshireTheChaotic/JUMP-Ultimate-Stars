0207a54c  stmdb sp!,{r3,r4,r5,lr}
0207a550  ldr r2,[0x207a584]
0207a554  mov r4,r1
0207a558  ldr r1,[r2,r4,lsl #0x2]
0207a55c  mov r5,r0
0207a560  mov r2,r1
0207a564  bl 0x0207a52c
0207a568  ldr r0,[0x207a588]
0207a56c  ldr r1,[0x207a58c]
0207a570  str r0,[r5,#0x0]
0207a574  str r4,[r5,#0x14]
0207a578  mov r0,r5
0207a57c  str r1,[r5,#0x4]
0207a580  ldmia sp!,{r3,r4,r5,pc}
