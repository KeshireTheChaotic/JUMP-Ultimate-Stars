01ffa454  stmdb sp!,{r4,r11,r12,lr}
01ffa458  bl 0x01ff9450
01ffa45c  mov r7,r6
01ffa460  bl 0x01ff9450
01ffa464  add r11,r7,r6, lsl #0x8
01ffa468  bic r6,r6,#0x1
01ffa46c  bic r7,r7,#0x1
01ffa470  add r12,r7,r6, lsl #0x7
01ffa474  bl 0x01ff9450
01ffa478  mov r8,r6
01ffa47c  bl 0x01ff9450
01ffa480  mov r7,r6
01ffa484  bl 0x01ff9450
01ffa488  ldr r4,[r0,#-0x20]
01ffa48c  ldr r5,[r0,#-0x8]
01ffa490  add r4,r4,r11
01ffa494  ldr r9,[r0,#0x0]
01ffa498  ldmia sp,{r11}
01ffa49c  add r4,r4,r9
01ffa4a0  add r5,r5,r9
01ffa4a4  stmdb sp!,{r11}
01ffa4a8  mov r11,#0x4
01ffa4ac  ldrb r9,[r4],#0x4
01ffa4b0  ldrb r10,[r4,#-0x3]
01ffa4b4  adds r9,r9,r8, lsl #0x1
01ffa4b8  movlt r9,#0x0
01ffa4bc  cmp r9,#0xff
01ffa4c0  movgt r9,#0xff
01ffa4c4  adds r10,r10,r8, lsl #0x1
01ffa4c8  movlt r10,#0x0
01ffa4cc  cmp r10,#0xff
01ffa4d0  movgt r10,#0xff
01ffa4d4  add r9,r9,r10, lsl #0x8
01ffa4d8  ldrb r10,[r4,#-0x2]
01ffa4dc  adds r10,r10,r8, lsl #0x1
01ffa4e0  movlt r10,#0x0
01ffa4e4  cmp r10,#0xff
01ffa4e8  movgt r10,#0xff
01ffa4ec  add r9,r9,r10, lsl #0x10
01ffa4f0  ldrb r10,[r4,#-0x1]
01ffa4f4  adds r10,r10,r8, lsl #0x1
01ffa4f8  movlt r10,#0x0
01ffa4fc  cmp r10,#0xff
01ffa500  movgt r10,#0xff
01ffa504  add r9,r9,r10, lsl #0x18
01ffa508  str r9,[r5],#0x4
01ffa50c  subs r11,r11,#0x1
01ffa510  bne 0x01ffa4ac
01ffa514  ldmia sp!,{r11}
01ffa518  add r4,r4,#0xf0
01ffa51c  add r5,r5,#0xf0
01ffa520  subs r11,r11,#0x1
01ffa524  bne 0x01ffa4a4
01ffa528  ldr r4,[r0,#-0x1c]
01ffa52c  ldr r5,[r0,#-0x4]
01ffa530  add r4,r4,r12
01ffa534  ldr r9,[r0,#0x4]
01ffa538  ldmia sp!,{r11}
01ffa53c  add r4,r4,r9
01ffa540  add r5,r5,r9
01ffa544  mov r11,r11, lsr #0x1
01ffa548  stmdb sp!,{r11}
01ffa54c  mov r11,#0x4
01ffa550  ldrh r8,[r4,#0x0]
01ffa554  ldrh r10,[r4,#0x2]
01ffa558  add r4,r4,#0x4
01ffa55c  and r9,r8,#0xff
01ffa560  mov r8,r8, lsr #0x8
01ffa564  adds r9,r9,r7, lsl #0x1
01ffa568  movlt r9,#0x0
01ffa56c  cmp r9,#0xff
01ffa570  movgt r9,#0xff
01ffa574  adds r8,r8,r6, lsl #0x1
01ffa578  movlt r8,#0x0
01ffa57c  cmp r8,#0xff
01ffa580  movgt r8,#0xff
01ffa584  orr r9,r9,r8, lsl #0x8
01ffa588  and r12,r10,#0xff
01ffa58c  mov r10,r10, lsr #0x8
01ffa590  adds r12,r12,r7, lsl #0x1
01ffa594  movlt r12,#0x0
01ffa598  cmp r12,#0xff
01ffa59c  movgt r12,#0xff
01ffa5a0  adds r10,r10,r6, lsl #0x1
01ffa5a4  movlt r10,#0x0
01ffa5a8  cmp r10,#0xff
01ffa5ac  movgt r10,#0xff
01ffa5b0  orr r9,r9,r12, lsl #0x10
01ffa5b4  orr r9,r9,r10, lsl #0x18
01ffa5b8  str r9,[r5],#0x4
01ffa5bc  subs r11,r11,#0x1
01ffa5c0  bne 0x01ffa550
01ffa5c4  ldmia sp!,{r11}
01ffa5c8  add r4,r4,#0xf0
01ffa5cc  add r5,r5,#0xf0
01ffa5d0  subs r11,r11,#0x1
01ffa5d4  bne 0x01ffa548
01ffa5d8  ldmia sp!,{r11,r12,pc}
