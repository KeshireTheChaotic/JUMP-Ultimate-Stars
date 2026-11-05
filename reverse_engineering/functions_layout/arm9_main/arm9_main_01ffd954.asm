01ffd954  stmdb sp!,{lr}
01ffd958  ldrb r9,[r4,#-0x100]
01ffd95c  ldrb r10,[r4,#0x6fe]
01ffd960  add r9,r9,r10
01ffd964  add r9,r9,#0x1
01ffd968  mov r5,r9, lsr #0x1
01ffd96c  bl 0x01ff9450
01ffd970  add r6,r5,r6, lsl #0x1
01ffd974  strb r6,[r4,#0x700]
01ffd978  ldrb r7,[r4,#-0x100]
01ffd97c  add r7,r7,r6
01ffd980  mov r6,r7, asr #0x1
01ffd984  strb r6,[r4,#0x300]
01ffd988  ldrb r7,[r4,#-0x100]
01ffd98c  add r7,r7,r6
01ffd990  mov r6,r7, asr #0x1
01ffd994  strb r6,[r4,#0x100]
01ffd998  ldrb r7,[r4,#-0x100]
01ffd99c  add r7,r7,r6
01ffd9a0  mov r6,r7, asr #0x1
01ffd9a4  strb r6,[r4,#0x0]
01ffd9a8  ldrb r6,[r4,#0x300]
01ffd9ac  ldrb r7,[r4,#0x100]
01ffd9b0  add r7,r7,r6
01ffd9b4  mov r6,r7, asr #0x1
01ffd9b8  strb r6,[r4,#0x200]
01ffd9bc  ldrb r6,[r4,#0x700]
01ffd9c0  ldrb r7,[r4,#0x300]
01ffd9c4  add r7,r7,r6
01ffd9c8  mov r6,r7, asr #0x1
01ffd9cc  strb r6,[r4,#0x500]
01ffd9d0  ldrb r7,[r4,#0x300]
01ffd9d4  add r7,r7,r6
01ffd9d8  mov r6,r7, asr #0x1
01ffd9dc  strb r6,[r4,#0x400]
01ffd9e0  ldrb r6,[r4,#0x700]
01ffd9e4  ldrb r7,[r4,#0x500]
01ffd9e8  add r7,r7,r6
01ffd9ec  mov r6,r7, asr #0x1
01ffd9f0  strb r6,[r4,#0x600]
01ffd9f4  ldmia sp!,{pc}
