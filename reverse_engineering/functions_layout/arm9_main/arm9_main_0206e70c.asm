0206e70c  stmdb sp!,{r3,r4,lr}
0206e710  sub sp,sp,#0x4
0206e714  mov r4,r1
0206e718  cmp r4,#0x8
0206e71c  addls pc,pc,r4, lsl #0x2
0206e720  b 0x0206e860
0206e860  cmp r4,#0x8
0206e864  ldrne r0,[0x206e880]
0206e868  mov r1,#0x0
0206e86c  strbne r4,[r0,#0x10]
0206e870  ldr r0,[0x206e880]
0206e874  strb r1,[r0,#0x18]
0206e878  add sp,sp,#0x4
0206e87c  ldmia sp!,{r3,r4,pc}
