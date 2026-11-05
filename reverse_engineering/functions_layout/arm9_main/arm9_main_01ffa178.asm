01ffa178  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffa17c  bic r6,r11,#0x1
01ffa180  bic r7,r12,#0x1
01ffa184  ldr r8,[r0,#0x10]
01ffa188  add r11,r11,r12, lsl #0x8
01ffa18c  add r12,r6,r7, lsl #0x7
01ffa190  str r11,[r8,#0x0]
01ffa194  and r4,r11,#0x3
01ffa198  adr r8,0x1ffa168
01ffa19c  ldr r8,[r8,r4,lsl #0x2]
01ffa1a0  mov pc,r8
