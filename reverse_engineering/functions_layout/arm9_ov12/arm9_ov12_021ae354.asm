021ae354  stmdb sp!,{r4,lr}
021ae358  ldr r1,[r0,#0x0]
021ae35c  mov r4,r0
021ae360  ldr r1,[r1,#0x194]
021ae364  blx r1
021ae368  mov r1,r0
021ae36c  mvn r0,#0x0
021ae370  cmp r1,r0
021ae374  moveq r0,#0x0
021ae378  ldmiaeq sp!,{r4,pc}
021ae37c  mov r0,r4
021ae380  blx 0x021aed58
021ae384  mvn r1,#0x0
021ae388  cmp r0,r1
021ae38c  ldrne r1,[r4,#0x154]
021ae390  moveq r0,#0x0
021ae394  ldrne r0,[r1,r0,lsl #0x2]
021ae398  ldmia sp!,{r4,pc}
