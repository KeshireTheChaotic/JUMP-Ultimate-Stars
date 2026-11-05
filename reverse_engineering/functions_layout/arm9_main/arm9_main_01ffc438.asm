01ffc438  stmdb sp!,{lr}
01ffc43c  ldr r4,[r0,#-0x8]
01ffc440  ldr r9,[r0,#0x0]
01ffc444  add r4,r4,r9
01ffc448  ldrb r9,[r4,#-0xf9]
01ffc44c  ldrb r10,[r4,#0x2ff]
01ffc450  add r9,r9,r10
01ffc454  add r9,r9,#0x1
01ffc458  mov r5,r9, lsr #0x1
01ffc45c  bl 0x01ff9450
01ffc460  add r6,r5,r6, lsl #0x1
01ffc464  strb r6,[r4,#0x307]
01ffc468  bl 0x01ffc3dc
01ffc46c  ldr r4,[r0,#-0x4]
01ffc470  ldr r9,[r0,#0x4]
01ffc474  add r4,r4,r9
01ffc478  bl 0x01ffc3b0
01ffc47c  add r4,r4,#0x1
01ffc480  bl 0x01ffc3b0
01ffc484  ldmia sp!,{pc}
