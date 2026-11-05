021752f0  ldrsb r1,[r1,#0x3]
021752f4  ldr r2,[r5,#0x10]
021752f8  mov r6,r3, lsl #0x8
021752fc  str r1,[sp,#0x10]
02175300  add r11,r2,r1, lsl #0x8
02175304  bl 0x02175670
02175308  cmp r0,#0x0
0217530c  ldr r0,[r5,#0xc]
02175310  rsbne r6,r6,#0x0
02175314  add r0,r0,r6
02175318  str r0,[sp,#0xc]
0217531c  sub r1,r11,#0x400
02175320  add r0,r0,#0x800
02175324  bl 0x020836b4
02175328  cmp r0,#0x0
0217532c  beq 0x02175348
02175330  ldr r0,[sp,#0xc]
02175334  sub r1,r11,#0x400
02175338  sub r0,r0,#0x800
0217533c  bl 0x020836b4
02175340  cmp r0,#0x0
02175344  bne 0x02175358
02175348  mov r0,r7
0217534c  bl 0x02175670
02175350  cmp r0,#0x0
02175354  rsbeq r6,r6,#0x0
02175358  add r0,r10,r9, lsl #0x2
0217535c  ldr r1,[r0,#0x34]
02175360  ldr r0,[r5,#0xc]
02175364  ldr r2,[r1,#0x4]
02175368  ldr r3,[r5,#0x10]
0217536c  add r1,r0,r6
02175370  ldr r0,[sp,#0x10]
02175374  ldr r5,[r2,#0x50]
02175378  add r3,r3,r0, lsl #0x8
0217537c  mov r0,r1, asr #0x8
02175380  mov r0,r0, lsl #0xc
02175384  mov r1,r3, asr #0x8
02175388  str r0,[r5,#0xc]
0217538c  mov r0,r1, lsl #0xc
02175390  str r0,[r5,#0x10]
02175394  ldrb r0,[r5,#0x24]
02175398  orr r1,r0,#0x1
0217539c  cmp r0,r1
021753a0  beq 0x021753b4
021753a4  mov r0,r5
021753a8  ldr r2,[r0,#0x0]
021753ac  ldr r2,[r2,#0x18]
021753b0  blx r2
021753b4  ldrb r1,[r5,#0x24]
021753b8  mov r0,r8
021753bc  orr r1,r1,#0x31
021753c0  strb r1,[r5,#0x24]
021753c4  bl 0x0217568c
021753c8  add r1,r10,r9, lsl #0x2
021753cc  ldr r2,[r1,#0x34]
021753d0  mov r1,r0
021753d4  ldr r0,[r2,#0x4]
021753d8  ldr r0,[r0,#0x64]
021753dc  ldr r2,[r0,#0x0]
021753e0  ldr r2,[r2,#0x5c]
021753e4  blx r2
021753e8  add r0,r10,r9, lsl #0x2
021753ec  ldr r8,[r0,#0x34]
021753f0  bl 0x02083ab8
021753f4  ldr r0,[r0,#0xec]
021753f8  mov r1,r8
021753fc  bl 0x0207aedc
02175400  mov r11,r0
02175404  ldr r0,[0x2175618]
02175408  str r10,[r11,#0x28]
0217540c  str r0,[r11,#0x1c]
02175410  ldr r1,[0x217561c]
02175414  mov r8,#0x0
02175418  ldr r0,[0x2175620]
0217541c  str r1,[r11,#0x20]
02175420  str r0,[r11,#0x24]
02175424  ldrb r0,[r4,#0xc]
02175428  str r8,[sp,#0x4]
0217542c  cmp r0,#0x4
02175430  movcs r0,#0x4
02175434  and r0,r0,#0xff
02175438  str r0,[sp,#0x8]
0217543c  b 0x021755fc
02175440  add r0,r4,r8, lsl #0x5
02175444  ldr r0,[r0,#0xa4]
02175448  mov r5,#0x1
0217544c  and r3,r0,#0xff
02175450  ldr r0,[sp,#0x4]
02175454  tst r0,r5, lsl r3
02175458  bne 0x021755f4
0217545c  ldr r2,[sp,#0x4]
02175460  mov r1,r9, lsl #0x10
02175464  orr r2,r2,r5, lsl r3
02175468  mov r0,r11
0217546c  mov r1,r1, lsr #0x10
02175470  str r2,[sp,#0x4]
02175474  bl 0x0207b11c
02175478  mov r5,r0
0217547c  ldr r0,[sp,#0x0]
02175480  mov r6,r8
02175484  cmp r0,#0x0
02175488  ldrne r1,[r5,#0x14]
0217548c  ldrne r0,[0x2175624]
02175490  orrne r0,r1,r0
02175494  ldreq r0,[r5,#0x14]
02175498  orreq r0,r0,#0x700
0217549c  str r0,[r5,#0x14]
021754a0  ldr r0,[r10,#0xa8]
021754a4  ldr r7,[r5,#0x1c]
021754a8  tst r0,#0x200
021754ac  ldrbne r0,[r7,#0x20]
021754b0  orrne r0,r0,#0x4
021754b4  strbne r0,[r7,#0x20]
021754b8  mov r0,#0x0
021754bc  strb r0,[r7,#0x22]
021754c0  mvn r0,#0x0
021754c4  str r0,[sp,#0x1c]
021754c8  add r0,r4,r8, lsl #0x5
021754cc  str r0,[sp,#0x14]
021754d0  add r0,r4,#0x9c
021754d4  str r0,[sp,#0x18]
021754d8  ldr r0,[sp,#0x1c]
021754dc  add r0,r0,#0x1000
021754e0  str r0,[sp,#0x24]
021754e4  ldr r0,[sp,#0x1c]
021754e8  add r0,r0,#0x1000
021754ec  str r0,[sp,#0x20]
021754f0  b 0x021755e8
021754f4  ldr r1,[sp,#0x14]
021754f8  add r0,r4,r6, lsl #0x5
021754fc  ldr r2,[r1,#0xa4]
02175500  ldr r0,[r0,#0xa4]
02175504  ldr r1,[sp,#0x24]
02175508  and r3,r0,r1
0217550c  ldr r1,[sp,#0x20]
02175510  and r1,r2,r1
02175514  cmp r3,r1
02175518  andeq r1,r0,#0xf000
0217551c  subeq r0,r6,r8
02175520  cmpeq r0,r1, lsr #0xc
02175524  bne 0x021755f4
02175528  ldrb r1,[r7,#0x22]
0217552c  ldr r0,[sp,#0x18]
02175530  add r2,r0,r6, lsl #0x5
02175534  add r1,r7,r1, lsl #0x2
02175538  str r2,[r1,#0x8]
0217553c  ldrb r1,[r7,#0x22]
02175540  mov r0,r5
02175544  add r1,r1,#0x1
02175548  mov r1,r1, lsl #0x10
0217554c  mov r1,r1, lsr #0x10
02175550  bl 0x0207b25c
02175554  mov r0,r5
02175558  mov r1,#0x1
0217555c  bl 0x0207b2d0
02175560  ldrb r3,[r7,#0x22]
02175564  ldrb r0,[r7,#0x21]
02175568  add r1,sp,#0x28
0217556c  add r3,r7,r3, lsl #0x2
02175570  cmp r0,#0x0
02175574  ldr r3,[r3,#0x8]
02175578  ldrne r2,[sp,#0x1c]
0217557c  ldrsh r3,[r3,#0x0]
02175580  moveq r2,#0x1
02175584  mov r0,r5
02175588  mul r2,r3,r2
0217558c  strh r2,[sp,#0x28]
02175590  ldrb r2,[r7,#0x22]
02175594  add r2,r7,r2, lsl #0x2
02175598  ldr r2,[r2,#0x8]
0217559c  ldrsh r2,[r2,#0x2]
021755a0  strh r2,[sp,#0x2a]
021755a4  ldrb r2,[r7,#0x22]
021755a8  add r2,r7,r2, lsl #0x2
021755ac  ldr r2,[r2,#0x8]
021755b0  ldrsh r2,[r2,#0x4]
021755b4  strh r2,[sp,#0x2c]
021755b8  ldrb r2,[r7,#0x22]
021755bc  add r2,r7,r2, lsl #0x2
021755c0  ldr r2,[r2,#0x8]
021755c4  ldrsh r2,[r2,#0x6]
021755c8  strh r2,[sp,#0x2e]
021755cc  ldrb r2,[r7,#0x22]
021755d0  bl 0x0207b22c
021755d4  add r0,r6,#0x1
021755d8  ldrb r1,[r7,#0x22]
021755dc  and r6,r0,#0xff
021755e0  add r0,r1,#0x1
021755e4  strb r0,[r7,#0x22]
021755e8  ldr r0,[sp,#0x8]
021755ec  cmp r6,r0
021755f0  bcc 0x021754f4
021755f4  add r0,r8,#0x1
021755f8  and r8,r0,#0xff
021755fc  ldr r0,[sp,#0x8]
02175600  cmp r8,r0
02175604  bcc 0x02175440
02175608  mov r0,r11
0217560c  add sp,sp,#0x30
02175610  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
