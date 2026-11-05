0206e524  stmdb sp!,{r3,lr}
0206e528  ldr lr,[0x206e56c]
0206e52c  mvn r12,#0x0
0206e530  cmp r3,r12
0206e534  add r12,lr,r1, lsl #0x3
0206e538  strbne r3,[r12,#0x0]
0206e53c  mvn r3,#0x0
0206e540  cmp r2,r3
0206e544  strbne r2,[r12,#0x1]
0206e548  ldr r2,[sp,#0x8]
0206e54c  cmp r0,#0x0
0206e550  str r2,[r12,#0x4]
0206e554  ldrne r0,[0x206e570]
0206e558  movne r2,#0x1
0206e55c  strbne r2,[r0,#0x12]
0206e560  strne r1,[r0,#0x18c]
0206e564  mov r0,r12
0206e568  ldmia sp!,{r3,pc}
