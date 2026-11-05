0205bc6c  stmdb sp!,{r4,r5,lr}
0205bc70  sub sp,sp,#0x4
0205bc74  mov r4,r0
0205bc78  ldr r0,[r4,#0x24]
0205bc7c  mov r0,r0, lsl #0x1e
0205bc80  movs r0,r0, asr #0x1f
0205bc84  beq 0x0205bcd8
0205bc88  ldr r0,[r4,#0x40]
0205bc8c  mov r2,#0x1
0205bc90  mov r1,#0x0
0205bc94  mov r2,r2, lsl r0
0205bc98  ldr r0,[r4,#0x44]
0205bc9c  mov r3,r1
0205bca0  bl 0x020568e4
0205bca4  add r0,r4,#0x8
0205bca8  blx 0x0206148c
0205bcac  add r0,r4,#0x14
0205bcb0  blx 0x0206147c
0205bcb4  ldr r0,[r4,#0x24]
0205bcb8  bic r0,r0,#0x2
0205bcbc  str r0,[r4,#0x24]
0205bcc0  bl 0x02056da4
0205bcc4  mov r5,r0
0205bcc8  mov r0,#0x1
0205bccc  bl 0x02056e74
0205bcd0  mov r0,r5
0205bcd4  bl 0x02056de4
0205bcd8  mov r0,r4
0205bcdc  bl 0x0205bc3c
0205bce0  add sp,sp,#0x4
0205bce4  ldmia sp!,{r4,r5,pc}
