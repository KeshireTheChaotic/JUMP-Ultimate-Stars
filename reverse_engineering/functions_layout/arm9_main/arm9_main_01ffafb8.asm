01ffafb8  stmdb sp!,{lr}
01ffafbc  ldrb r9,[r4,#-0xf2]
01ffafc0  ldrb r10,[r4,#0xfe]
01ffafc4  add r9,r9,r10
01ffafc8  add r9,r9,#0x1
01ffafcc  mov r5,r9, lsr #0x1
01ffafd0  bl 0x01ff9450
01ffafd4  add r6,r5,r6, lsl #0x1
01ffafd8  strb r6,[r4,#0x10e]
01ffafdc  bl 0x01ffae94
01ffafe0  ldmia sp!,{pc}
