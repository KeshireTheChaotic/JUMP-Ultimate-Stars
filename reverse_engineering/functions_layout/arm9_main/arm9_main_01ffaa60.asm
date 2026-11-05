01ffaa60  stmdb sp!,{lr}
01ffaa64  ldrb r7,[r4,#0x2fe]
01ffaa68  add r7,r7,r6
01ffaa6c  mov r7,r7, asr #0x1
01ffaa70  strb r7,[r4,#0x306]
01ffaa74  ldrb r8,[r4,#-0xf2]
01ffaa78  add r8,r8,r6
01ffaa7c  mov r8,r8, asr #0x1
01ffaa80  strb r8,[r4,#0x10e]
01ffaa84  ldrb r6,[r4,#0xfe]
01ffaa88  add r8,r8,r6
01ffaa8c  mov r6,r8, asr #0x1
01ffaa90  strb r6,[r4,#0x106]
01ffaa94  bl 0x01ffc328
01ffaa98  add r4,r4,#0x8
01ffaa9c  bl 0x01ffc328
01ffaaa0  add r4,r4,#0x1f8
01ffaaa4  bl 0x01ffc328
01ffaaa8  add r4,r4,#0x8
01ffaaac  bl 0x01ffc328
01ffaab0  sub r4,r4,#0x208
01ffaab4  ldmia sp!,{pc}
