01ffcad4  stmdb sp!,{r4,r11,r12,lr}
01ffcad8  bl 0x01ff9450
01ffcadc  mov r7,r6
01ffcae0  bl 0x01ff9450
01ffcae4  add r11,r7,r6, lsl #0x8
01ffcae8  bic r6,r6,#0x1
01ffcaec  bic r7,r7,#0x1
01ffcaf0  add r12,r7,r6, lsl #0x7
01ffcaf4  bl 0x01ff9450
01ffcaf8  mov r8,r6
01ffcafc  bl 0x01ff9450
01ffcb00  mov r7,r6
01ffcb04  bl 0x01ff9450
01ffcb08  ldr r4,[r0,#-0x20]
01ffcb0c  ldr r5,[r0,#-0x8]
01ffcb10  add r4,r4,r11
01ffcb14  ldr r9,[r0,#0x0]
01ffcb18  ldmia sp,{r11}
01ffcb1c  add r4,r4,r9
01ffcb20  add r5,r5,r9
01ffcb24  ldrb r9,[r4],#0x100
01ffcb28  ldrb r10,[r4,#-0xff]
01ffcb2c  adds r9,r9,r8, lsl #0x1
01ffcb30  movlt r9,#0x0
01ffcb34  cmp r9,#0xff
01ffcb38  movgt r9,#0xff
01ffcb3c  adds r10,r10,r8, lsl #0x1
01ffcb40  movlt r10,#0x0
01ffcb44  cmp r10,#0xff
01ffcb48  movgt r10,#0xff
01ffcb4c  add r9,r9,r10, lsl #0x8
01ffcb50  ldrb r10,[r4,#-0xfe]
01ffcb54  adds r10,r10,r8, lsl #0x1
01ffcb58  movlt r10,#0x0
01ffcb5c  cmp r10,#0xff
01ffcb60  movgt r10,#0xff
01ffcb64  add r9,r9,r10, lsl #0x10
01ffcb68  ldrb r10,[r4,#-0xfd]
01ffcb6c  adds r10,r10,r8, lsl #0x1
01ffcb70  movlt r10,#0x0
01ffcb74  cmp r10,#0xff
01ffcb78  movgt r10,#0xff
01ffcb7c  add r9,r9,r10, lsl #0x18
01ffcb80  str r9,[r5],#0x100
01ffcb84  subs r11,r11,#0x1
01ffcb88  bne 0x01ffcb24
01ffcb8c  ldr r4,[r0,#-0x1c]
01ffcb90  ldr r5,[r0,#-0x4]
01ffcb94  add r4,r4,r12
01ffcb98  ldr r9,[r0,#0x4]
01ffcb9c  ldmia sp!,{r11}
01ffcba0  add r4,r4,r9
01ffcba4  add r5,r5,r9
01ffcba8  mov r11,r11, lsr #0x1
01ffcbac  ldrh r8,[r4,#0x0]
01ffcbb0  ldrh r10,[r4,#0x2]
01ffcbb4  add r4,r4,#0x100
01ffcbb8  and r9,r8,#0xff
01ffcbbc  mov r8,r8, lsr #0x8
01ffcbc0  adds r9,r9,r7, lsl #0x1
01ffcbc4  movlt r9,#0x0
01ffcbc8  cmp r9,#0xff
01ffcbcc  movgt r9,#0xff
01ffcbd0  adds r8,r8,r6, lsl #0x1
01ffcbd4  movlt r8,#0x0
01ffcbd8  cmp r8,#0xff
01ffcbdc  movgt r8,#0xff
01ffcbe0  orr r9,r9,r8, lsl #0x8
01ffcbe4  and r12,r10,#0xff
01ffcbe8  mov r10,r10, lsr #0x8
01ffcbec  adds r12,r12,r7, lsl #0x1
01ffcbf0  movlt r12,#0x0
01ffcbf4  cmp r12,#0xff
01ffcbf8  movgt r12,#0xff
01ffcbfc  adds r10,r10,r6, lsl #0x1
01ffcc00  movlt r10,#0x0
01ffcc04  cmp r10,#0xff
01ffcc08  movgt r10,#0xff
01ffcc0c  orr r9,r9,r12, lsl #0x10
01ffcc10  orr r9,r9,r10, lsl #0x18
01ffcc14  str r9,[r5],#0x100
01ffcc18  subs r11,r11,#0x1
01ffcc1c  bne 0x01ffcbac
01ffcc20  ldmia sp!,{r11,r12,pc}
