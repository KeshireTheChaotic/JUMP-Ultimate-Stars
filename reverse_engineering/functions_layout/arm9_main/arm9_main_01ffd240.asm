01ffd240  stmdb sp!,{lr}
01ffd244  ldrb r9,[r4,#-0xfe]
01ffd248  ldrb r10,[r4,#0xfe]
01ffd24c  add r9,r9,r10
01ffd250  add r9,r9,#0x1
01ffd254  mov r5,r9, lsr #0x1
01ffd258  bl 0x01ff9450
01ffd25c  add r6,r5,r6, lsl #0x1
01ffd260  strb r6,[r4,#0x102]
01ffd264  bl 0x01ffd20c
01ffd268  ldmia sp!,{pc}
