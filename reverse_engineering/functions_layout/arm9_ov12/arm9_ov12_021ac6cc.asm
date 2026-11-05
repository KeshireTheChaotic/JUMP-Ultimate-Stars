021ac6cc  stmdb sp!,{r0,r1,r2,r3}
021ac6d0  stmdb sp!,{r4,lr}
021ac6d4  sub sp,sp,#0x8
021ac6d8  ldr r4,[r0,#0x8]
021ac6dc  ldr r0,[0x21ac77c]
021ac6e0  ldr r1,[sp,#0x14]
021ac6e4  sub r0,r0,r4
021ac6e8  cmp r1,r0
021ac6ec  bls 0x021ac6fc
021ac6f0  ldr r0,[0x21ac780]
021ac6f4  blx 0x02003bd8
021ac6f8  blx 0x02001f18
021ac6fc  ldr r0,[0x21ac784]
021ac700  cmp r4,r0
021ac704  bcs 0x021ac738
021ac708  add r0,r4,#0x1
021ac70c  add r0,r0,r0, lsl #0x1
021ac710  mov r1,#0x5
021ac714  bl 0x0200d338
021ac718  ldr r1,[sp,#0x14]
021ac71c  str r0,[sp,#0x4]
021ac720  cmp r0,r1
021ac724  addcc r0,sp,#0x14
021ac728  addcs r0,sp,#0x4
021ac72c  ldr r0,[r0,#0x0]
021ac730  add r0,r4,r0
021ac734  b 0x021ac76c
021ac738  cmp r4,r0, lsl #0x1
021ac73c  bcs 0x021ac768
021ac740  ldr r0,[sp,#0x14]
021ac744  add r1,r4,#0x1
021ac748  mov r2,r1, lsr #0x1
021ac74c  cmp r0,r1, lsr #0x1
021ac750  addhi r0,sp,#0x14
021ac754  str r2,[sp,#0x0]
021ac758  addls r0,sp,#0x0
021ac75c  ldr r0,[r0,#0x0]
021ac760  add r0,r4,r0
021ac764  b 0x021ac76c
021ac768  ldr r0,[0x21ac77c]
021ac76c  add sp,sp,#0x8
021ac770  ldmia sp!,{r4,lr}
021ac774  add sp,sp,#0x10
021ac778  bx lr
