01ffb62c  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffb630  bic r6,r11,#0x1
01ffb634  bic r7,r12,#0x1
01ffb638  ldr r8,[r0,#0x10]
01ffb63c  add r11,r11,r12, lsl #0x8
01ffb640  add r12,r6,r7, lsl #0x7
01ffb644  str r11,[r8,#0x0]
01ffb648  and r4,r11,#0x3
01ffb64c  adr r8,0x1ffb61c
01ffb650  ldr r8,[r8,r4,lsl #0x2]
01ffb654  mov pc,r8
