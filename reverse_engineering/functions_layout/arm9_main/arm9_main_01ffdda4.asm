01ffdda4  stmdb sp!,{lr}
01ffdda8  ldrb r9,[r4,#-0x100]
01ffddac  ldrb r10,[r4,#0x2fe]
01ffddb0  add r9,r9,r10
01ffddb4  add r9,r9,#0x1
01ffddb8  mov r5,r9, lsr #0x1
01ffddbc  bl 0x01ff9450
01ffddc0  add r6,r5,r6, lsl #0x1
01ffddc4  strb r6,[r4,#0x300]
01ffddc8  ldrb r7,[r4,#-0x100]
01ffddcc  add r7,r7,r6
01ffddd0  mov r6,r7, asr #0x1
01ffddd4  strb r6,[r4,#0x100]
01ffddd8  ldrb r7,[r4,#-0x100]
01ffdddc  add r7,r7,r6
01ffdde0  mov r6,r7, asr #0x1
01ffdde4  strb r6,[r4,#0x0]
01ffdde8  ldrb r6,[r4,#0x300]
01ffddec  ldrb r7,[r4,#0x100]
01ffddf0  add r7,r7,r6
01ffddf4  mov r6,r7, asr #0x1
01ffddf8  strb r6,[r4,#0x200]
01ffddfc  ldmia sp!,{pc}
