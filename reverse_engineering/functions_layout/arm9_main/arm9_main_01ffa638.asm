01ffa638  stmdb sp!,{lr}
01ffa63c  ldrb r9,[r4,#-0xf2]
01ffa640  ldrb r10,[r4,#0x6fe]
01ffa644  add r9,r9,r10
01ffa648  add r9,r9,#0x1
01ffa64c  mov r5,r9, lsr #0x1
01ffa650  bl 0x01ff9450
01ffa654  add r6,r5,r6, lsl #0x1
01ffa658  strb r6,[r4,#0x70e]
01ffa65c  bl 0x01ffa5dc
01ffa660  ldmia sp!,{pc}
