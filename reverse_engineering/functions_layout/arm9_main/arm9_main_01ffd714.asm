01ffd714  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffd718  bic r6,r11,#0x1
01ffd71c  bic r7,r12,#0x1
01ffd720  ldr r8,[r0,#0x10]
01ffd724  add r11,r11,r12, lsl #0x8
01ffd728  add r12,r6,r7, lsl #0x7
01ffd72c  str r11,[r8,#0x0]
01ffd730  ands r4,r11,#0x1
01ffd734  beq 0x01ffd774
01ffd738  b 0x01ffd7e4
