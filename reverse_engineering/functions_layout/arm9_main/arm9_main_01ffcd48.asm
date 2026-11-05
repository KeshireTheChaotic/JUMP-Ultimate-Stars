01ffcd48  stmdb sp!,{lr}
01ffcd4c  ldrb r9,[r4,#-0xfe]
01ffcd50  ldrb r10,[r4,#0x6fe]
01ffcd54  add r9,r9,r10
01ffcd58  add r9,r9,#0x1
01ffcd5c  mov r5,r9, lsr #0x1
01ffcd60  bl 0x01ff9450
01ffcd64  add r6,r5,r6, lsl #0x1
01ffcd68  strb r6,[r4,#0x702]
01ffcd6c  bl 0x01ffcc24
01ffcd70  ldmia sp!,{pc}
