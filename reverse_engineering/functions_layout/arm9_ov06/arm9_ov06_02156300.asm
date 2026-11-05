02156300  stmdb sp!,{r3,lr}
02156304  ldr r3,[r0,#0x78]
02156308  cmp r3,#0x0
0215630c  beq 0x02156330
02156310  ldrb r2,[r1,#0x2]
02156314  ldr r1,[0x215633c]
02156318  ldr r3,[r3,#0x50]
0215631c  mov r2,r2, lsl #0x2
02156320  ldrh r1,[r1,r2]
02156324  tst r3,r1
02156328  movne r0,#0x1
0215632c  ldmiane sp!,{r3,pc}
02156330  ldr r0,[r0,#0x7c]
02156334  bl 0x021562e8
02156338  ldmia sp!,{r3,pc}
