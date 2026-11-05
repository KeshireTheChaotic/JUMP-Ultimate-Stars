01ffb8ac  stmdb sp!,{r4,r11,r12,lr}
01ffb8b0  bl 0x01ff9450
01ffb8b4  mov r7,r6
01ffb8b8  bl 0x01ff9450
01ffb8bc  add r11,r7,r6, lsl #0x8
01ffb8c0  bic r6,r6,#0x1
01ffb8c4  bic r7,r7,#0x1
01ffb8c8  add r12,r7,r6, lsl #0x7
01ffb8cc  bl 0x01ff9450
01ffb8d0  mov r8,r6
01ffb8d4  bl 0x01ff9450
01ffb8d8  mov r7,r6
01ffb8dc  bl 0x01ff9450
01ffb8e0  ldr r4,[r0,#-0x20]
01ffb8e4  ldr r5,[r0,#-0x8]
01ffb8e8  add r4,r4,r11
01ffb8ec  ldr r9,[r0,#0x0]
01ffb8f0  ldmia sp,{r11}
01ffb8f4  add r4,r4,r9
01ffb8f8  add r5,r5,r9
01ffb8fc  stmdb sp!,{r11}
01ffb900  mov r11,#0x2
01ffb904  ldrb r9,[r4],#0x4
01ffb908  ldrb r10,[r4,#-0x3]
01ffb90c  adds r9,r9,r8, lsl #0x1
01ffb910  movlt r9,#0x0
01ffb914  cmp r9,#0xff
01ffb918  movgt r9,#0xff
01ffb91c  adds r10,r10,r8, lsl #0x1
01ffb920  movlt r10,#0x0
01ffb924  cmp r10,#0xff
01ffb928  movgt r10,#0xff
01ffb92c  add r9,r9,r10, lsl #0x8
01ffb930  ldrb r10,[r4,#-0x2]
01ffb934  adds r10,r10,r8, lsl #0x1
01ffb938  movlt r10,#0x0
01ffb93c  cmp r10,#0xff
01ffb940  movgt r10,#0xff
01ffb944  add r9,r9,r10, lsl #0x10
01ffb948  ldrb r10,[r4,#-0x1]
01ffb94c  adds r10,r10,r8, lsl #0x1
01ffb950  movlt r10,#0x0
01ffb954  cmp r10,#0xff
01ffb958  movgt r10,#0xff
01ffb95c  add r9,r9,r10, lsl #0x18
01ffb960  str r9,[r5],#0x4
01ffb964  subs r11,r11,#0x1
01ffb968  bne 0x01ffb904
01ffb96c  ldmia sp!,{r11}
01ffb970  add r4,r4,#0xf8
01ffb974  add r5,r5,#0xf8
01ffb978  subs r11,r11,#0x1
01ffb97c  bne 0x01ffb8fc
01ffb980  ldr r4,[r0,#-0x1c]
01ffb984  ldr r5,[r0,#-0x4]
01ffb988  add r4,r4,r12
01ffb98c  ldr r9,[r0,#0x4]
01ffb990  ldmia sp!,{r11}
01ffb994  add r4,r4,r9
01ffb998  add r5,r5,r9
01ffb99c  mov r11,r11, lsr #0x1
01ffb9a0  stmdb sp!,{r11}
01ffb9a4  mov r11,#0x2
01ffb9a8  ldrh r8,[r4,#0x0]
01ffb9ac  ldrh r10,[r4,#0x2]
01ffb9b0  add r4,r4,#0x4
01ffb9b4  and r9,r8,#0xff
01ffb9b8  mov r8,r8, lsr #0x8
01ffb9bc  adds r9,r9,r7, lsl #0x1
01ffb9c0  movlt r9,#0x0
01ffb9c4  cmp r9,#0xff
01ffb9c8  movgt r9,#0xff
01ffb9cc  adds r8,r8,r6, lsl #0x1
01ffb9d0  movlt r8,#0x0
01ffb9d4  cmp r8,#0xff
01ffb9d8  movgt r8,#0xff
01ffb9dc  orr r9,r9,r8, lsl #0x8
01ffb9e0  and r12,r10,#0xff
01ffb9e4  mov r10,r10, lsr #0x8
01ffb9e8  adds r12,r12,r7, lsl #0x1
01ffb9ec  movlt r12,#0x0
01ffb9f0  cmp r12,#0xff
01ffb9f4  movgt r12,#0xff
01ffb9f8  adds r10,r10,r6, lsl #0x1
01ffb9fc  movlt r10,#0x0
01ffba00  cmp r10,#0xff
01ffba04  movgt r10,#0xff
01ffba08  orr r9,r9,r12, lsl #0x10
01ffba0c  orr r9,r9,r10, lsl #0x18
01ffba10  str r9,[r5],#0x4
01ffba14  subs r11,r11,#0x1
01ffba18  bne 0x01ffb9a8
01ffba1c  ldmia sp!,{r11}
01ffba20  add r4,r4,#0xf8
01ffba24  add r5,r5,#0xf8
01ffba28  subs r11,r11,#0x1
01ffba2c  bne 0x01ffb9a0
01ffba30  ldmia sp!,{r11,r12,pc}
