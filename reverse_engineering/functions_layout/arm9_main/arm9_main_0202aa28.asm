0202aa28  stmdb sp!,{r4,r5,r6,lr}
0202aa2c  mov r6,r0
0202aa30  ldrb r2,[r6,#0x24]
0202aa34  mov r1,r2, lsl #0x19
0202aa38  movs r1,r1, lsr #0x1f
0202aa3c  addne r0,r6,#0x54
0202aa40  ldmiane sp!,{r4,r5,r6,pc}
0202aa44  ldr r1,[r6,#0x18]
0202aa48  cmp r1,#0x0
0202aa4c  bne 0x0202aa80
0202aa50  mov r1,r2, lsl #0x1b
0202aa54  movs r1,r1, lsr #0x1f
0202aa58  beq 0x0202aafc
0202aa5c  ldr r1,[r6,#0x2c]
0202aa60  blx r1
0202aa64  add r0,r6,#0x54
0202aa68  add r1,r6,#0x3c
0202aa6c  bl 0x0201a12c
0202aa70  ldrb r0,[r6,#0x24]
0202aa74  bic r0,r0,#0x10
0202aa78  strb r0,[r6,#0x24]
0202aa7c  b 0x0202aafc
0202aa80  mov r2,r6
0202aa84  mov r3,#0x0
0202aa88  ldr r1,[0x202ab04]
0202aa8c  b 0x0202aaac
0202aa90  str r2,[r1,r3,lsl #0x2]
0202aa94  ldrb r0,[r2,#0x24]
0202aa98  add r3,r3,#0x1
0202aa9c  mov r0,r0, lsl #0x19
0202aaa0  movs r0,r0, lsr #0x1f
0202aaa4  bne 0x0202aab4
0202aaa8  ldr r2,[r2,#0x18]
0202aaac  cmp r2,#0x0
0202aab0  bne 0x0202aa90
0202aab4  ldr r4,[0x202ab04]
0202aab8  sub r0,r3,#0x1
0202aabc  ldr r1,[r4,r0,lsl #0x2]
0202aac0  sub r5,r3,#0x2
0202aac4  ldrb r0,[r1,#0x25]
0202aac8  orr r0,r0,#0x8
0202aacc  strb r0,[r1,#0x25]
0202aad0  b 0x0202aaf4
0202aad4  ldr r2,[r4,r5,lsl #0x2]
0202aad8  add r1,r4,r5, lsl #0x2
0202aadc  ldrb r0,[r2,#0x24]
0202aae0  orr r0,r0,#0x10
0202aae4  strb r0,[r2,#0x24]
0202aae8  ldmia r1,{r0,r1}
0202aaec  bl 0x0202a34c
0202aaf0  sub r5,r5,#0x1
0202aaf4  cmp r5,#0x0
0202aaf8  bge 0x0202aad4
0202aafc  add r0,r6,#0x54
0202ab00  ldmia sp!,{r4,r5,r6,pc}
