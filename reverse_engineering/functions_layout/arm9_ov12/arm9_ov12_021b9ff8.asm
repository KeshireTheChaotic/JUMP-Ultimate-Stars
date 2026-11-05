021b9ff8  stmdb sp!,{r0,r1,r2,r3}
021b9ffc  stmdb sp!,{r4,lr}
021ba000  sub sp,sp,#0x8
021ba004  ldr r4,[r0,#0x8]
021ba008  mvn r0,#0xe0000000
021ba00c  ldr r1,[sp,#0x14]
021ba010  sub r0,r0,r4
021ba014  cmp r1,r0
021ba018  bls 0x021ba028
021ba01c  ldr r0,[0x21ba0a8]
021ba020  blx 0x02003bd8
021ba024  blx 0x02001f18
021ba028  ldr r0,[0x21ba0ac]
021ba02c  cmp r4,r0
021ba030  bcs 0x021ba064
021ba034  add r0,r4,#0x1
021ba038  add r0,r0,r0, lsl #0x1
021ba03c  mov r1,#0x5
021ba040  bl 0x0200d338
021ba044  ldr r1,[sp,#0x14]
021ba048  str r0,[sp,#0x4]
021ba04c  cmp r0,r1
021ba050  addcc r0,sp,#0x14
021ba054  addcs r0,sp,#0x4
021ba058  ldr r0,[r0,#0x0]
021ba05c  add r0,r4,r0
021ba060  b 0x021ba098
021ba064  cmp r4,r0, lsl #0x1
021ba068  bcs 0x021ba094
021ba06c  ldr r0,[sp,#0x14]
021ba070  add r1,r4,#0x1
021ba074  mov r2,r1, lsr #0x1
021ba078  cmp r0,r1, lsr #0x1
021ba07c  addhi r0,sp,#0x14
021ba080  str r2,[sp,#0x0]
021ba084  addls r0,sp,#0x0
021ba088  ldr r0,[r0,#0x0]
021ba08c  add r0,r4,r0
021ba090  b 0x021ba098
021ba094  mvn r0,#0xe0000000
021ba098  add sp,sp,#0x8
021ba09c  ldmia sp!,{r4,lr}
021ba0a0  add sp,sp,#0x10
021ba0a4  bx lr
