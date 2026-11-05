0217329c  stmdb sp!,{r3,r4,r5,lr}
021732a0  ldr r3,[r0,#0x2c]
021732a4  cmp r3,#0x0
021732a8  ldmiaeq sp!,{r3,r4,r5,pc}
021732ac  mov r12,#0x0
021732b0  mov r3,#0x1
021732b4  tst r1,r3, lsl r12
021732b8  beq 0x02173304
021732bc  cmp r2,#0x0
021732c0  ldr r5,[r0,#0x2c]
021732c4  mov r4,r12, asr #0x5
021732c8  beq 0x021732e8
021732cc  add lr,r5,r4, lsl #0x2
021732d0  bic r4,r12,#0x1f
021732d4  ldr r5,[lr,#0x34]
021732d8  sub r4,r12,r4
021732dc  orr r4,r5,r3, lsl r4
021732e0  str r4,[lr,#0x34]
021732e4  b 0x02173304
021732e8  bic lr,r12,#0x1f
021732ec  add r5,r5,r4, lsl #0x2
021732f0  sub lr,r12,lr
021732f4  mvn lr,r3, lsl lr
021732f8  ldr r4,[r5,#0x34]
021732fc  and r4,r4,lr
02173300  str r4,[r5,#0x34]
02173304  add r12,r12,#0x1
02173308  cmp r12,#0x16
0217330c  blt 0x021732b4
02173310  bl 0x0217aad4
02173314  ldmia sp!,{r3,r4,r5,pc}
