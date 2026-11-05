01ffe078  stmdb sp!,{lr}
01ffe07c  ldrb r9,[r4,#-0x100]
01ffe080  ldrb r10,[r4,#0xfe]
01ffe084  add r9,r9,r10
01ffe088  add r9,r9,#0x1
01ffe08c  mov r5,r9, lsr #0x1
01ffe090  bl 0x01ff9450
01ffe094  add r6,r5,r6, lsl #0x1
01ffe098  strb r6,[r4,#0x100]
01ffe09c  ldrb r7,[r4,#-0x100]
01ffe0a0  add r7,r7,r6
01ffe0a4  mov r6,r7, asr #0x1
01ffe0a8  strb r6,[r4,#0x0]
01ffe0ac  ldmia sp!,{pc}
