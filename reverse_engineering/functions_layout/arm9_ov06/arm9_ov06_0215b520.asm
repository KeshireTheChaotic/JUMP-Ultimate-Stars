0215b520  cmp r1,#0x18
0215b524  movlt r1,#0x18
0215b528  cmp r1,#0xb4
0215b52c  movgt r1,#0xb4
0215b530  add r0,r0,#0x100
0215b534  strh r1,[r0,#0x10]
0215b538  bx lr
