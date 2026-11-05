021a2d44  stmdb sp!,{r3,r4,r5,lr}
021a2d48  mov r4,r1
021a2d4c  mov r5,r0
021a2d50  bl 0x0219b614
021a2d54  cmp r4,r0
021a2d58  mov r0,#0x1
021a2d5c  ldmiaeq sp!,{r3,r4,r5,pc}
021a2d60  ldrb r1,[r5,#0x30]
021a2d64  tst r1,r0, lsl r4
021a2d68  moveq r0,#0x0
021a2d6c  ldmia sp!,{r3,r4,r5,pc}
