038014f4  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
038014f8  sub sp,sp,#0x4
038014fc  mov r10,r0
03801500  mov r11,r2
03801504  ldrb r0,[r1,#0x5]
03801508  mov r0,r0, lsl #0x1
0380150c  ldr r4,[0x3801650]
03801510  ldrsh r3,[r4,r0]
03801514  ldrb r0,[r10,#0x4]
03801518  mov r0,r0, lsl #0x1
0380151c  ldrsh r2,[r4,r0]
03801520  ldrb r0,[r10,#0x5]
03801524  mov r0,r0, lsl #0x1
03801528  ldrsh r0,[r4,r0]
0380152c  add r0,r2,r0
03801530  add r3,r3,r0
03801534  ldrsh r2,[r10,#0xa]
03801538  ldrsh r0,[r1,#0x6]
0380153c  add r2,r2,r0
03801540  ldrsb r4,[r10,#0x6]
03801544  ldrb r0,[r10,#0x7]
03801548  mov r0,r0, lsl #0x6
0380154c  mul r1,r4,r0
03801550  ldrsh r0,[r10,#0xc]
03801554  add r0,r0,r1, asr #0x7
03801558  ldrsb r1,[r10,#0x8]
0380155c  ldrb r4,[r10,#0x1]
03801560  cmp r4,#0x7f
03801564  mulne r4,r1,r4
03801568  addne r1,r4,#0x40
0380156c  movne r1,r1, asr #0x7
03801570  ldrsb r4,[r10,#0x9]
03801574  add r1,r1,r4
03801578  mov r4,#0x8000
0380157c  rsb r4,r4,#0x0
03801580  cmp r3,r4
03801584  movlt r3,r4
03801588  mov r4,#0x8000
0380158c  rsb r4,r4,#0x0
03801590  cmp r2,r4
03801594  movlt r2,r4
03801598  mvn r4,#0x7f
0380159c  cmp r1,r4
038015a0  movlt r1,r4
038015a4  blt 0x038015b0
038015a8  cmp r1,#0x7f
038015ac  movgt r1,#0x7f
038015b0  ldr r9,[r10,#0x3c]
038015b4  mov r4,#0x1
038015b8  mov r3,r3, lsl #0x10
038015bc  mov r7,r3, asr #0x10
038015c0  mov r0,r0, lsl #0x10
038015c4  mov r6,r0, asr #0x10
038015c8  mov r0,r1, lsl #0x18
038015cc  mov r5,r0, asr #0x18
038015d0  mov r0,r2, lsl #0x10
038015d4  mov r8,r0, asr #0x10
038015d8  b 0x0380163c
038015dc  strh r8,[r9,#0x6]
038015e0  ldrb r0,[r9,#0x2]
038015e4  cmp r0,#0x3
038015e8  beq 0x03801638
038015ec  strh r7,[r9,#0xc]
038015f0  strh r6,[r9,#0xe]
038015f4  strb r5,[r9,#0xb]
038015f8  ldrb r0,[r10,#0x1]
038015fc  strb r0,[r9,#0x4]
03801600  ldrh r0,[r10,#0x18]
03801604  strh r0,[r9,#0x28]
03801608  ldrh r0,[r10,#0x1a]
0380160c  strh r0,[r9,#0x2a]
03801610  ldrh r0,[r10,#0x1c]
03801614  strh r0,[r9,#0x2c]
03801618  ldr r0,[r9,#0x34]
0380161c  cmp r0,#0x0
03801620  bne 0x03801638
03801624  cmp r11,#0x0
03801628  beq 0x03801638
0380162c  strb r4,[r9,#0x22]
03801630  mov r0,r9
03801634  bl 0x037fffec
03801638  ldr r9,[r9,#0x50]
0380163c  cmp r9,#0x0
03801640  bne 0x038015dc
03801644  add sp,sp,#0x4
03801648  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0380164c  bx lr
