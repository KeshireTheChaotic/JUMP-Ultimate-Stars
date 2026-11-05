01ffc8b0  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffc8b4  bic r6,r11,#0x1
01ffc8b8  bic r7,r12,#0x1
01ffc8bc  ldr r8,[r0,#0x10]
01ffc8c0  add r11,r11,r12, lsl #0x8
01ffc8c4  add r12,r6,r7, lsl #0x7
01ffc8c8  str r11,[r8,#0x0]
01ffc8cc  and r4,r11,#0x3
01ffc8d0  adr r8,0x1ffc8a0
01ffc8d4  ldr r8,[r8,r4,lsl #0x2]
01ffc8d8  mov pc,r8
