01ffcfe8  stmdb sp!,{lr}
01ffcfec  ldrb r9,[r4,#-0xfe]
01ffcff0  ldrb r10,[r4,#0x2fe]
01ffcff4  add r9,r9,r10
01ffcff8  add r9,r9,#0x1
01ffcffc  mov r5,r9, lsr #0x1
01ffd000  bl 0x01ff9450
01ffd004  add r6,r5,r6, lsl #0x1
01ffd008  strb r6,[r4,#0x302]
01ffd00c  bl 0x01ffcf60
01ffd010  ldmia sp!,{pc}
