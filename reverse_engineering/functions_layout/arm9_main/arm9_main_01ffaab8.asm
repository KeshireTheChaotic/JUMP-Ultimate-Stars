01ffaab8  stmdb sp!,{lr}
01ffaabc  ldrb r9,[r4,#-0xf2]
01ffaac0  ldrb r10,[r4,#0x2fe]
01ffaac4  add r9,r9,r10
01ffaac8  add r9,r9,#0x1
01ffaacc  mov r5,r9, lsr #0x1
01ffaad0  bl 0x01ff9450
01ffaad4  add r6,r5,r6, lsl #0x1
01ffaad8  strb r6,[r4,#0x30e]
01ffaadc  bl 0x01ffaa60
01ffaae0  ldmia sp!,{pc}
