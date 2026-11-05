01ffba90  stmdb sp!,{lr}
01ffba94  ldrb r9,[r4,#-0xfa]
01ffba98  ldrb r10,[r4,#0x6fe]
01ffba9c  add r9,r9,r10
01ffbaa0  add r9,r9,#0x1
01ffbaa4  mov r5,r9, lsr #0x1
01ffbaa8  bl 0x01ff9450
01ffbaac  add r6,r5,r6, lsl #0x1
01ffbab0  strb r6,[r4,#0x706]
01ffbab4  bl 0x01ffba34
01ffbab8  ldmia sp!,{pc}
