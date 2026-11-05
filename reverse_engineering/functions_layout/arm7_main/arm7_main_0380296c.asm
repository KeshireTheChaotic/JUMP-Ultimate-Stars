0380296c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
03802970  mov r8,r1
03802974  mov r7,r2
03802978  mov r6,r3
0380297c  ldr r5,[sp,#0x18]
03802980  ldr r1,[0x38029c4]
03802984  add r4,r1,r0, lsl #0x6
03802988  ldrb r0,[r1,r0,lsl #0x6]
0380298c  cmp r0,#0x0
03802990  beq 0x038029a4
03802994  add r0,r4,#0x14
03802998  bl 0x037fd998
0380299c  mov r0,#0x0
038029a0  strb r0,[r4,#0x0]
038029a4  str r8,[r4,#0x4]
038029a8  str r7,[r4,#0x8]
038029ac  str r6,[r4,#0xc]
038029b0  str r5,[r4,#0x10]
038029b4  ldr r0,[sp,#0x1c]
038029b8  strb r0,[r4,#0x1]
038029bc  ldmia sp!,{r4,r5,r6,r7,r8,lr}
038029c0  bx lr
