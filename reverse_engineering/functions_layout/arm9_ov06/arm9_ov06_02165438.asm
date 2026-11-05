02165438  stmdb sp!,{r4,lr}
0216543c  ldr r2,[r0,#0x4]
02165440  ldmia r1,{r0,r1}
02165444  ldr r4,[r2,#0x50]
02165448  mov r0,r0, lsl #0x4
0216544c  str r0,[r4,#0xc]
02165450  mov r0,r1, lsl #0x4
02165454  str r0,[r4,#0x10]
02165458  mov r0,#0x0
0216545c  str r0,[r4,#0x14]
02165460  ldrb r0,[r4,#0x24]
02165464  orr r1,r0,#0x1
02165468  cmp r0,r1
0216546c  beq 0x02165480
02165470  mov r0,r4
02165474  ldr r2,[r0,#0x0]
02165478  ldr r2,[r2,#0x18]
0216547c  blx r2
02165480  ldrb r0,[r4,#0x24]
02165484  orr r0,r0,#0x31
02165488  strb r0,[r4,#0x24]
0216548c  ldmia sp!,{r4,pc}
