02060968  stmdb sp!,{r4,r5,lr}
0206096c  sub sp,sp,#0x4
02060970  ldrsb r2,[r0,#0x4]
02060974  ldrb r12,[r0,#0x5]
02060978  mov r4,r1
0206097c  cmp r2,r4
02060980  subge r1,r2,r4
02060984  movge r5,r12, lsr r1
02060988  strbge r1,[r0,#0x4]
0206098c  bge 0x020609bc
02060990  ldr r3,[r0,#0x0]
02060994  sub r1,r4,r2
02060998  add r2,r3,#0x1
0206099c  str r2,[r0,#0x0]
020609a0  ldrb r2,[r3,#0x0]
020609a4  mov r5,r12, lsl r1
020609a8  strb r2,[r0,#0x5]
020609ac  mov r2,#0x8
020609b0  strb r2,[r0,#0x4]
020609b4  bl 0x02060968
020609b8  orr r5,r0,r5
020609bc  rsb r0,r4,#0x8
020609c0  mov r1,#0xff
020609c4  and r0,r5,r1, asr r0
020609c8  add sp,sp,#0x4
020609cc  ldmia sp!,{r4,r5,pc}
