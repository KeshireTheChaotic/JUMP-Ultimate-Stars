020425ec  stmdb sp!,{r4,lr}
020425f0  ldr r0,[0x204265c]
020425f4  mov r4,r1
020425f8  ldr r1,[r0,#0x3d8]
020425fc  eor r1,r1,#0x1
02042600  add r12,r4,r1, lsl #0x2
02042604  ldr r1,[r12,#0xc]
02042608  cmp r2,r1
0204260c  strne r2,[r12,#0xc]
02042610  movne r1,#0x1
02042614  strbne r1,[r0,#0x9]
02042618  ldr r0,[0x204265c]
0204261c  ldr r2,[r4,#0x34]
02042620  ldr r1,[r0,#0x3d8]
02042624  mov r0,r3
02042628  eor r1,r1,#0x1
0204262c  add r1,r4,r1, lsl #0x2
02042630  ldr r1,[r1,#0x24]
02042634  bl 0x02051890
02042638  ldr r0,[0x204265c]
0204263c  ldr r3,[sp,#0x8]
02042640  ldr r2,[r0,#0x3d8]
02042644  mov r1,#0x1
02042648  eor r2,r2,#0x1
0204264c  add r2,r4,r2, lsl #0x2
02042650  str r3,[r2,#0x2c]
02042654  strb r1,[r0,#0x2]
02042658  ldmia sp!,{r4,pc}
