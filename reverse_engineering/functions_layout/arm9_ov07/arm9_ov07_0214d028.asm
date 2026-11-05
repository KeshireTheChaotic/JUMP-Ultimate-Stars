0214d028  stmdb sp!,{r4,lr}
0214d02c  mov r1,#0x2
0214d030  mov r4,r0
0214d034  blx 0x021be9f0
0214d038  cmp r0,#0x0
0214d03c  bne 0x0214d054
0214d040  mov r0,r4
0214d044  bl 0x0214d5d0
0214d048  mov r0,r4
0214d04c  blx 0x021bfd64
0214d050  ldmia sp!,{r4,pc}
0214d054  bl 0x02055238
0214d058  ldr r1,[0x214d084]
0214d05c  mov r12,#0x1
0214d060  ldrh r3,[r1,#0xe]
0214d064  mvn r2,r12, lsl r4
0214d068  and r2,r3,r2
0214d06c  strh r2,[r1,#0xe]
0214d070  ldrh r2,[r1,#0x10]
0214d074  orr r2,r2,r12, lsl r4
0214d078  strh r2,[r1,#0x10]
0214d07c  bl 0x0205524c
0214d080  ldmia sp!,{r4,pc}
