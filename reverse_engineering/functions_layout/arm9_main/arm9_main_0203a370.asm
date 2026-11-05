0203a370  mov r3,#0x0
0203a374  ldr r2,[0x203a3a0]
0203a378  b 0x0203a390
0203a37c  ldr r0,[r2,r3,lsl #0x2]
0203a380  cmp r1,r0
0203a384  moveq r0,#0x1
0203a388  bxeq lr
0203a38c  add r3,r3,#0x1
0203a390  cmp r3,#0x7
0203a394  bcc 0x0203a37c
0203a398  mov r0,#0x0
0203a39c  bx lr
