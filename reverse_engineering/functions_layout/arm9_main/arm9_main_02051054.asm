02051054  stmdb sp!,{r4,lr}
02051058  mov lr,#0x0
0205105c  mov r3,lr
02051060  mov r4,lr
02051064  mov r12,r3
02051068  ands r2,r4,#0x80
0205106c  eorne r4,r1,r4, lsl #0x1
02051070  add r12,r12,#0x1
02051074  moveq r4,r4, lsl #0x1
02051078  cmp r12,#0x8
0205107c  bcc 0x02051068
02051080  strb r4,[r0,lr]
02051084  add lr,lr,#0x1
02051088  cmp lr,#0x100
0205108c  bcc 0x02051060
02051090  ldmia sp!,{r4,lr}
02051094  bx lr
