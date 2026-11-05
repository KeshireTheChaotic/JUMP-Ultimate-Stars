02011934  stmdb sp!,{r3,r4,r5,lr}
02011938  mov r4,r0
0201193c  mov r5,r1
02011940  add r0,sp,#0x0
02011944  mov r1,r4
02011948  blx 0x02011990
0201194c  ldr r1,[r5,#0x0]
02011950  ldr r0,[sp,#0x0]
02011954  cmp r1,r0
02011958  ldmiaeq sp!,{r3,r4,r5,pc}
0201195c  ldrb r0,[r4,#0x29]
02011960  cmp r0,#0x0
02011964  moveq r0,r1, asr #0x4
02011968  strheq r0,[r4,#0x6]
0201196c  ldmiaeq sp!,{r3,r4,r5,pc}
02011970  mov r0,r4
02011974  bl 0x0201199c
02011978  ldr r1,[r5,#0x0]
0201197c  mov r0,r4
02011980  mov r1,r1, asr #0x4
02011984  strh r1,[r4,#0x6]
02011988  bl 0x020119ec
0201198c  ldmia sp!,{r3,r4,r5,pc}
