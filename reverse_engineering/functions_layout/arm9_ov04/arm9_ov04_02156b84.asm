02156b84  stmdb sp!,{r3,lr}
02156b88  ldrsb r1,[r0,#0x14]
02156b8c  sub r1,r1,#0x1
02156b90  mov r1,r1, lsl #0x18
02156b94  mov r1,r1, asr #0x18
02156b98  and r1,r1,#0xff
02156b9c  cmp r1,#0x1
02156ba0  ldmiahi sp!,{r3,pc}
02156ba4  ldrsb r1,[r0,#0x15]
02156ba8  ldr r0,[r0,#0x18]
02156bac  sub r1,r1,#0x1
02156bb0  bl 0x02155f78
02156bb4  ldmia sp!,{r3,pc}
