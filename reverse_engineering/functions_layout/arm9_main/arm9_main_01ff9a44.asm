01ff9a44  stmdb sp!,{lr}
01ff9a48  ldr r7,[r0,#-0x4]
01ff9a4c  ldr r9,[r0,#0x4]
01ff9a50  add r7,r7,r9
01ff9a54  add r8,r7,r4
01ff9a58  ldrb r9,[r8,#-0x102]
01ff9a5c  ldrb r10,[r8,#-0x101]
01ff9a60  add r8,r7,r5, lsl #0x7
01ff9a64  ldrb r11,[r8,#-0x102]
01ff9a68  ldrb r12,[r8,#-0x101]
01ff9a6c  add r9,r9,r11
01ff9a70  add r10,r10,r12
01ff9a74  add r9,r9,#0x1
01ff9a78  add r10,r10,#0x1
01ff9a7c  mov r11,r9, lsr #0x1
01ff9a80  mov r12,r10, lsr #0x1
01ff9a84  add r8,r7,r4
01ff9a88  add r8,r8,r5, lsl #0x7
01ff9a8c  strb r11,[r8,#-0x102]
01ff9a90  strb r12,[r8,#-0x101]
01ff9a94  adr r8,0x1ff9a18
01ff9a98  mov r9,r4, lsr #0x3
01ff9a9c  mov r10,r5, lsr #0x3
01ff9aa0  add r9,r9,r10, lsl #0x2
01ff9aa4  ldr r5,[r8,r9,lsl #0x2]
01ff9aa8  mov r4,r7
01ff9aac  mov r6,r11
01ff9ab0  mov lr,pc
01ff9ab4  mov pc,r5
01ff9ab8  add r4,r4,#0x1
01ff9abc  mov r6,r12
01ff9ac0  mov lr,pc
01ff9ac4  mov pc,r5
01ff9ac8  ldmia sp!,{pc}
