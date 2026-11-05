0202f928  stmdb sp!,{r3,r4,r5,lr}
0202f92c  ldr r1,[0x202f994]
0202f930  mov r4,r0
0202f934  str r1,[r4,#0x0]
0202f938  mov r5,#0x0
0202f93c  b 0x0202f978
0202f940  ldr r0,[r4,#0x10]
0202f944  ldr r0,[r0,r5,lsl #0x2]
0202f948  ldr r1,[r0,#0x0]
0202f94c  ldr r1,[r1,#0x18]
0202f950  blx r1
0202f954  cmp r0,#0x5
0202f958  ldrne r0,[r4,#0x10]
0202f95c  ldrne r0,[r0,r5,lsl #0x2]
0202f960  cmpne r0,#0x0
0202f964  beq 0x0202f974
0202f968  ldr r1,[r0,#0x0]
0202f96c  ldr r1,[r1,#0x4]
0202f970  blx r1
0202f974  add r5,r5,#0x1
0202f978  ldrh r0,[r4,#0xa]
0202f97c  cmp r5,r0
0202f980  blt 0x0202f940
0202f984  add r0,r4,#0x10
0202f988  blx 0x0200b254
0202f98c  mov r0,r4
0202f990  ldmia sp!,{r3,r4,r5,pc}
