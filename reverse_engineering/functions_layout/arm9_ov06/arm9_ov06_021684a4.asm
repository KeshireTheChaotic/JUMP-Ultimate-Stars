021684a4  stmdb sp!,{r3,r4,lr}
021684a8  sub sp,sp,#0x4
021684ac  ldr r0,[r0,#0x4]
021684b0  add r1,sp,#0x0
021684b4  ldr r4,[r0,#0x10]
021684b8  ldrb r0,[r4,#0x24]
021684bc  mov r2,r0, lsl #0xb
021684c0  mov r0,r2, asr #0x3
021684c4  add r0,r2,r0, lsr #0x1c
021684c8  mov r0,r0, asr #0x4
021684cc  add r0,r0,#0x1800
021684d0  str r0,[r4,#0x0]
021684d4  str r0,[sp,#0x0]
021684d8  ldr r0,[r4,#0x8]
021684dc  bl 0x02168488
021684e0  ldrb r1,[r4,#0x24]
021684e4  sub r0,r1,#0x1
021684e8  strb r0,[r4,#0x24]
021684ec  cmp r1,#0x0
021684f0  bne 0x0216850c
021684f4  mov r0,#0x0
021684f8  strb r0,[r4,#0x24]
021684fc  ldr r0,[r4,#0x8]
02168500  ldr r1,[0x2168514]
02168504  ldr r0,[r0,#0x4]
02168508  bl 0x02028384
0216850c  add sp,sp,#0x4
02168510  ldmia sp!,{r3,r4,pc}
