0207a97c  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0207a980  ldr r2,[0x207aa1c]
0207a984  mov r6,r1
0207a988  mov r7,r0
0207a98c  ldr r0,[r6,#0x4]
0207a990  ldr r1,[r2,#0x0]
0207a994  bl 0x0202f81c
0207a998  mov r5,#0x7
0207a99c  mov r4,#0x0
0207a9a0  ldr r0,[r7,#0x0]
0207a9a4  cmp r0,#0x0
0207a9a8  beq 0x0207a9dc
0207a9ac  cmp r6,#0x0
0207a9b0  ldr r0,[r0,#0x4]
0207a9b4  bne 0x0207a9cc
0207a9b8  ldr r2,[r0,#0x0]
0207a9bc  mov r1,r4
0207a9c0  ldr r2,[r2,#0xd4]
0207a9c4  blx r2
0207a9c8  b 0x0207a9dc
0207a9cc  ldr r2,[r0,#0x0]
0207a9d0  ldr r1,[r6,#0x4]
0207a9d4  ldr r2,[r2,#0xd4]
0207a9d8  blx r2
0207a9dc  ldrb r0,[r7,#0xf]
0207a9e0  sub r5,r5,#0x1
0207a9e4  cmp r5,#0x0
0207a9e8  bic r0,r0,#0x40
0207a9ec  strb r0,[r7,#0xf]
0207a9f0  and r0,r0,#0xff
0207a9f4  ldrb r1,[r7,#0xe]
0207a9f8  mov r0,r0, lsl #0x19
0207a9fc  mov r0,r0, lsr #0x1f
0207aa00  bic r1,r1,#0x80
0207aa04  mov r0,r0, lsl #0x1f
0207aa08  orr r0,r1,r0, lsr #0x18
0207aa0c  strb r0,[r7,#0xe]
0207aa10  add r7,r7,#0x10
0207aa14  bgt 0x0207a9a0
0207aa18  ldmia sp!,{r3,r4,r5,r6,r7,pc}
