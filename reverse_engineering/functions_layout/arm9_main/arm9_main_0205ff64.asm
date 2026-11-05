0205ff64  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0205ff68  sub sp,sp,#0x34
0205ff6c  ldr r5,[r0,#0x8]
0205ff70  ldr r4,[r0,#0xc]
0205ff74  cmp r5,#0x0
0205ff78  strge r5,[sp,#0x0]
0205ff7c  movlt r1,#0x0
0205ff80  strlt r1,[sp,#0x0]
0205ff84  ldr r1,[r0,#0x10]
0205ff88  cmp r4,#0x0
0205ff8c  add r10,r5,r1
0205ff90  ldr r1,[r0,#0x14]
0205ff94  movge r2,r4
0205ff98  movlt r2,#0x0
0205ff9c  cmp r10,#0x8
0205ffa0  add r3,r4,r1
0205ffa4  movge r10,#0x8
0205ffa8  cmp r3,#0x8
0205ffac  movge r3,#0x8
0205ffb0  cmp r4,#0x0
0205ffb4  movgt r4,#0x0
0205ffb8  cmp r5,#0x0
0205ffbc  ldr r8,[r0,#0x20]
0205ffc0  movgt r5,#0x0
0205ffc4  rsb r1,r4,#0x0
0205ffc8  mul r7,r10,r8
0205ffcc  ldr r6,[r0,#0x1c]
0205ffd0  rsb r4,r5,#0x0
0205ffd4  mul r9,r6,r4
0205ffd8  ldr r4,[r0,#0x18]
0205ffdc  mov r10,r7
0205ffe0  str r4,[sp,#0x8]
0205ffe4  ldr r4,[sp,#0x0]
0205ffe8  cmp r8,#0x4
0205ffec  mul r5,r4,r8
0205fff0  ldr r4,[sp,#0x8]
0205fff4  str r5,[sp,#0x0]
0205fff8  mla r11,r1,r4,r9
0205fffc  ldr r1,[r0,#0x4]
02060000  str r1,[sp,#0x4]
02060004  bne 0x020600dc
02060008  ldr r1,[r0,#0x0]
0206000c  ldr r7,[r0,#0x24]
02060010  add r0,r1,r2, lsl #0x2
02060014  str r0,[sp,#0xc]
02060018  add r0,r1,r3, lsl #0x2
0206001c  ldr r1,[sp,#0xc]
02060020  str r0,[sp,#0x10]
02060024  cmp r1,r0
02060028  addcs sp,sp,#0x34
0206002c  ldmiacs sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
02060030  mov r0,#0x0
02060034  add r9,sp,#0x24
02060038  mov r4,#0xf
0206003c  str r0,[sp,#0x1c]
02060040  ldr r0,[sp,#0xc]
02060044  mov r1,r11, lsr #0x1f
02060048  ldr r5,[r0,#0x0]
0206004c  ldr r0,[sp,#0x4]
02060050  rsb r2,r1,r11, lsl #0x1d
02060054  add r0,r0,r11, lsr #0x3
02060058  str r0,[sp,#0x24]
0206005c  ldr r0,[sp,#0x1c]
02060060  add r1,r1,r2, ror #0x1d
02060064  strb r0,[sp,#0x28]
02060068  strb r0,[sp,#0x29]
0206006c  mov r0,r9
02060070  bl 0x02060968
02060074  ldr r8,[sp,#0x0]
02060078  mov r0,r8
0206007c  cmp r0,r10
02060080  bcs 0x020600b0
02060084  mov r0,r9
02060088  mov r1,r6
0206008c  bl 0x02060968
02060090  cmp r0,#0x0
02060094  mvnne r1,r4, lsl r8
02060098  addne r0,r7,r0
0206009c  andne r1,r5,r1
020600a0  orrne r5,r1,r0, lsl r8
020600a4  add r8,r8,#0x4
020600a8  cmp r8,r10
020600ac  bcc 0x02060084
020600b0  ldr r0,[sp,#0xc]
020600b4  add r1,r0,#0x4
020600b8  str r5,[r0,#0x0]
020600bc  ldr r0,[sp,#0x10]
020600c0  str r1,[sp,#0xc]
020600c4  cmp r1,r0
020600c8  ldr r0,[sp,#0x8]
020600cc  add r11,r11,r0
020600d0  bcc 0x02060040
020600d4  add sp,sp,#0x34
020600d8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
020600dc  ldr r1,[r0,#0x0]
020600e0  ldr r9,[r0,#0x24]
020600e4  add r0,r1,r2, lsl #0x3
020600e8  str r0,[sp,#0x14]
020600ec  add r0,r1,r3, lsl #0x3
020600f0  ldr r1,[sp,#0x14]
020600f4  str r0,[sp,#0x18]
020600f8  cmp r1,r0
020600fc  addcs sp,sp,#0x34
02060100  ldmiacs sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
02060104  mov r0,#0x0
02060108  mov r4,#0xff
0206010c  str r0,[sp,#0x20]
02060110  mov r1,r11, lsr #0x1f
02060114  rsb r0,r1,r11, lsl #0x1d
02060118  add r1,r1,r0, ror #0x1d
0206011c  ldr r0,[sp,#0x14]
02060120  ldr r8,[r0,#0x0]
02060124  ldr r7,[r0,#0x4]
02060128  ldr r0,[sp,#0x4]
0206012c  add r0,r0,r11, lsr #0x3
02060130  str r0,[sp,#0x2c]
02060134  ldr r0,[sp,#0x20]
02060138  strb r0,[sp,#0x30]
0206013c  strb r0,[sp,#0x31]
02060140  add r0,sp,#0x2c
02060144  bl 0x02060968
02060148  ldr r0,[sp,#0x0]
0206014c  cmp r0,r10
02060150  mov r5,r0
02060154  bcs 0x020601a0
02060158  add r0,sp,#0x2c
0206015c  mov r1,r6
02060160  bl 0x02060968
02060164  cmp r0,#0x0
02060168  beq 0x02060194
0206016c  cmp r5,#0x20
02060170  mvncc r1,r4, lsl r5
02060174  addcc r0,r9,r0
02060178  andcc r1,r8,r1
0206017c  orrcc r8,r1,r0, lsl r5
02060180  subcs r2,r5,#0x20
02060184  mvncs r1,r4, lsl r2
02060188  addcs r0,r9,r0
0206018c  andcs r1,r7,r1
02060190  orrcs r7,r1,r0, lsl r2
02060194  add r5,r5,#0x8
02060198  cmp r5,r10
0206019c  bcc 0x02060158
020601a0  ldr r0,[sp,#0x14]
020601a4  str r8,[r0,#0x0]
020601a8  add r1,r0,#0x8
020601ac  str r7,[r0,#0x4]
020601b0  ldr r0,[sp,#0x18]
020601b4  str r1,[sp,#0x14]
020601b8  cmp r1,r0
020601bc  ldr r0,[sp,#0x8]
020601c0  add r11,r11,r0
020601c4  bcc 0x02060110
020601c8  add sp,sp,#0x34
020601cc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
