0205542c  stmdb sp!,{r4,lr}
02055430  ldr r12,[0x20554a4]
02055434  mov r4,r0
02055438  ldrh r2,[r12,#0x64]
0205543c  add r0,r12,#0x6
02055440  add r1,r4,#0x4
02055444  mov r2,r2, lsl #0x1d
02055448  mov r2,r2, lsr #0x1d
0205544c  strb r2,[r4,#0x0]
02055450  ldrb r3,[r12,#0x2]
02055454  mov r2,#0x14
02055458  mov r3,r3, lsl #0x1c
0205545c  mov r3,r3, lsr #0x1c
02055460  strb r3,[r4,#0x1]
02055464  ldrb r3,[r12,#0x3]
02055468  strb r3,[r4,#0x2]
0205546c  ldrb r3,[r12,#0x4]
02055470  strb r3,[r4,#0x3]
02055474  ldrb r3,[r12,#0x1a]
02055478  strh r3,[r4,#0x18]
0205547c  ldrb r3,[r12,#0x50]
02055480  strh r3,[r4,#0x4e]
02055484  bl 0x02051730
02055488  ldr r0,[0x20554a4]
0205548c  add r1,r4,#0x1a
02055490  add r0,r0,#0x1c
02055494  mov r2,#0x34
02055498  bl 0x02051730
0205549c  ldmia sp!,{r4,lr}
020554a0  bx lr
