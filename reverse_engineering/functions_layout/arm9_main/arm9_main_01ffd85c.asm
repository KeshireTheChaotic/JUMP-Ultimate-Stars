01ffd85c  stmdb sp!,{r4,r11,r12,lr}
01ffd860  bl 0x01ff9450
01ffd864  mov r7,r6
01ffd868  bl 0x01ff9450
01ffd86c  add r11,r7,r6, lsl #0x8
01ffd870  bic r6,r6,#0x1
01ffd874  bic r7,r7,#0x1
01ffd878  add r12,r7,r6, lsl #0x7
01ffd87c  bl 0x01ff9450
01ffd880  mov r8,r6
01ffd884  bl 0x01ff9450
01ffd888  mov r7,r6
01ffd88c  bl 0x01ff9450
01ffd890  ldr r4,[r0,#-0x20]
01ffd894  ldr r5,[r0,#-0x8]
01ffd898  add r4,r4,r11
01ffd89c  ldr r9,[r0,#0x0]
01ffd8a0  ldmia sp,{r11}
01ffd8a4  add r4,r4,r9
01ffd8a8  add r5,r5,r9
01ffd8ac  ldrb r9,[r4,#0x0]
01ffd8b0  ldrb r10,[r4,#0x1]
01ffd8b4  add r4,r4,#0x100
01ffd8b8  adds r9,r9,r8, lsl #0x1
01ffd8bc  movlt r9,#0x0
01ffd8c0  cmp r9,#0xff
01ffd8c4  movgt r9,#0xff
01ffd8c8  adds r10,r10,r8, lsl #0x1
01ffd8cc  movlt r10,#0x0
01ffd8d0  cmp r10,#0xff
01ffd8d4  movgt r10,#0xff
01ffd8d8  add r9,r9,r10, lsl #0x8
01ffd8dc  strh r9,[r5,#0x0]
01ffd8e0  add r5,r5,#0x100
01ffd8e4  subs r11,r11,#0x1
01ffd8e8  bne 0x01ffd8ac
01ffd8ec  ldr r4,[r0,#-0x1c]
01ffd8f0  ldr r5,[r0,#-0x4]
01ffd8f4  add r4,r4,r12
01ffd8f8  ldr r9,[r0,#0x4]
01ffd8fc  ldmia sp!,{r11}
01ffd900  add r4,r4,r9
01ffd904  add r5,r5,r9
01ffd908  mov r11,r11, lsr #0x1
01ffd90c  ldrh r8,[r4,#0x0]
01ffd910  add r4,r4,#0x100
01ffd914  and r9,r8,#0xff
01ffd918  mov r8,r8, lsr #0x8
01ffd91c  adds r9,r9,r7, lsl #0x1
01ffd920  movlt r9,#0x0
01ffd924  cmp r9,#0xff
01ffd928  movgt r9,#0xff
01ffd92c  adds r8,r8,r6, lsl #0x1
01ffd930  movlt r8,#0x0
01ffd934  cmp r8,#0xff
01ffd938  movgt r8,#0xff
01ffd93c  orr r9,r9,r8, lsl #0x8
01ffd940  strh r9,[r5,#0x0]
01ffd944  add r5,r5,#0x100
01ffd948  subs r11,r11,#0x1
01ffd94c  bne 0x01ffd90c
01ffd950  ldmia sp!,{r11,r12,pc}
