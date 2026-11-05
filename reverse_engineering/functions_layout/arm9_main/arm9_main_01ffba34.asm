01ffba34  stmdb sp!,{lr}
01ffba38  ldrb r7,[r4,#0x6fe]
01ffba3c  add r7,r7,r6
01ffba40  mov r7,r7, asr #0x1
01ffba44  strb r7,[r4,#0x702]
01ffba48  ldrb r8,[r4,#-0xfa]
01ffba4c  add r8,r8,r6
01ffba50  mov r8,r8, asr #0x1
01ffba54  strb r8,[r4,#0x306]
01ffba58  ldrb r6,[r4,#0x2fe]
01ffba5c  add r8,r8,r6
01ffba60  mov r6,r8, asr #0x1
01ffba64  strb r6,[r4,#0x302]
01ffba68  bl 0x01ffcf60
01ffba6c  add r4,r4,#0x4
01ffba70  bl 0x01ffcf60
01ffba74  add r4,r4,#0x3fc
01ffba78  bl 0x01ffcf60
01ffba7c  add r4,r4,#0x4
01ffba80  bl 0x01ffcf60
01ffba84  sub r4,r4,#0x400
01ffba88  sub r4,r4,#0x4
01ffba8c  ldmia sp!,{pc}
