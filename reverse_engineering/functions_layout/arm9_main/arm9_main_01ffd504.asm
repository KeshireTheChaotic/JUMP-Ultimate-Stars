01ffd504  stmdb sp!,{lr}
01ffd508  ldrb r9,[r4,#-0xfe]
01ffd50c  ldrb r10,[r4,#-0x2]
01ffd510  add r9,r9,r10
01ffd514  add r9,r9,#0x1
01ffd518  mov r5,r9, lsr #0x1
01ffd51c  bl 0x01ff9450
01ffd520  add r6,r5,r6, lsl #0x1
01ffd524  strb r6,[r4,#0x2]
01ffd528  ldrb r7,[r4,#-0x2]
01ffd52c  add r7,r7,r6
01ffd530  mov r6,r7, asr #0x1
01ffd534  strb r6,[r4,#0x0]
01ffd538  ldmia sp!,{pc}
