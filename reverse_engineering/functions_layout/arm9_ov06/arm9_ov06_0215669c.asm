0215669c  stmdb sp!,{r4,r5,r6,lr}
021566a0  mov r4,r1
021566a4  ldrsb r1,[r4,#0x2]
021566a8  mov r5,r0
021566ac  cmp r1,#0x0
021566b0  beq 0x021566e8
021566b4  ldr r0,[r5,#0x88]
021566b8  mov r1,r1, lsl #0x15
021566bc  mov r6,r1, asr #0x10
021566c0  bl 0x02155c9c
021566c4  cmp r0,#0x0
021566c8  mvnne r0,#0x0
021566cc  smulbbne r0,r6,r0
021566d0  movne r0,r0, lsl #0x10
021566d4  movne r6,r0, asr #0x10
021566d8  ldr r0,[r5,#0x7c]
021566dc  ldr r0,[r0,#0x10]
021566e0  ldr r0,[r0,#0x5c]
021566e4  strh r6,[r0,#0x2c]
021566e8  ldrsb r3,[r4,#0x3]
021566ec  cmp r3,#0x0
021566f0  ldmiaeq sp!,{r4,r5,r6,pc}
021566f4  mvn r0,#0x7d
021566f8  ldr r1,[r5,#0x7c]
021566fc  mul r2,r3,r0
02156700  ldr r0,[r1,#0x10]
02156704  ldr r0,[r0,#0x5c]
02156708  strh r2,[r0,#0x2e]
0215670c  ldmia sp!,{r4,r5,r6,pc}
