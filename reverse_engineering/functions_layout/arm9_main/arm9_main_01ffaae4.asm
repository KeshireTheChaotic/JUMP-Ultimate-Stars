01ffaae4  stmdb sp!,{lr}
01ffaae8  ldrb r7,[r4,#0x6ff]
01ffaaec  add r7,r7,r6
01ffaaf0  mov r7,r7, asr #0x1
01ffaaf4  strb r7,[r4,#0x707]
01ffaaf8  ldrb r8,[r4,#-0xf1]
01ffaafc  add r8,r8,r6
01ffab00  mov r8,r8, asr #0x1
01ffab04  strb r8,[r4,#0x30f]
01ffab08  ldrb r6,[r4,#0x2ff]
01ffab0c  add r8,r8,r6
01ffab10  mov r6,r8, asr #0x1
01ffab14  strb r6,[r4,#0x307]
01ffab18  bl 0x01ffc3dc
01ffab1c  add r4,r4,#0x8
01ffab20  bl 0x01ffc3dc
01ffab24  add r4,r4,#0x3f8
01ffab28  bl 0x01ffc3dc
01ffab2c  add r4,r4,#0x8
01ffab30  bl 0x01ffc3dc
01ffab34  ldmia sp!,{pc}
