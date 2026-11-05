01ffe288  stmdb sp!,{lr}
01ffe28c  ldrb r9,[r4,#-0x100]
01ffe290  ldrb r10,[r4,#-0x2]
01ffe294  add r9,r9,r10
01ffe298  add r9,r9,#0x1
01ffe29c  mov r5,r9, lsr #0x1
01ffe2a0  bl 0x01ff9450
01ffe2a4  add r6,r5,r6, lsl #0x1
01ffe2a8  strb r6,[r4,#0x0]
01ffe2ac  ldmia sp!,{pc}
