01ffbf74  stmdb sp!,{lr}
01ffbf78  ldrb r9,[r4,#-0xfa]
01ffbf7c  ldrb r10,[r4,#0x2fe]
01ffbf80  add r9,r9,r10
01ffbf84  add r9,r9,#0x1
01ffbf88  mov r5,r9, lsr #0x1
01ffbf8c  bl 0x01ff9450
01ffbf90  add r6,r5,r6, lsl #0x1
01ffbf94  strb r6,[r4,#0x306]
01ffbf98  bl 0x01ffbe70
01ffbf9c  ldmia sp!,{pc}
