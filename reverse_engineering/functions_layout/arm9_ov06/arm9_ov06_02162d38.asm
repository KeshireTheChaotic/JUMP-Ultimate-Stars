02162d38  stmdb sp!,{r4,r5,r6,lr}
02162d3c  mov r4,r0
02162d40  ldr r0,[r4,#0x30]
02162d44  mov r6,r1
02162d48  mov r5,r2
02162d4c  cmp r0,#0x0
02162d50  beq 0x02162d70
02162d54  mov r1,r4
02162d58  mov r2,r6
02162d5c  mov r3,r5
02162d60  bl 0x02085d00
02162d64  cmp r0,#0x0
02162d68  movne r0,#0x0
02162d6c  ldmiane sp!,{r4,r5,r6,pc}
02162d70  mov r0,r5, asr #0xc
02162d74  mov r0,r0, lsl #0x6
02162d78  add r1,r0,r6, asr #0xc
02162d7c  b 0x02162db4
02162d80  ldr r0,[r4,#0x14]
02162d84  add r0,r0,r1, lsl #0x3
02162d88  ldrb r0,[r0,#0x2]
02162d8c  cmp r0,#0x7
02162d90  moveq r0,#0x1
02162d94  ldmiaeq sp!,{r4,r5,r6,pc}
02162d98  cmp r0,#0xb
02162d9c  cmpne r0,#0x0
02162da0  movne r0,#0x0
02162da4  ldmiane sp!,{r4,r5,r6,pc}
02162da8  ldr r0,[r4,#0x10]
02162dac  ldrsh r0,[r0,#0x4]
02162db0  add r1,r1,r0
02162db4  cmp r1,#0x1000
02162db8  blt 0x02162d80
02162dbc  mov r0,#0x0
02162dc0  ldmia sp!,{r4,r5,r6,pc}
