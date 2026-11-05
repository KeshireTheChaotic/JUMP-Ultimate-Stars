027e5708  stmdb sp!,{r4,r5,r6,r7,r8,lr}
027e570c  ldr r1,[0x27e5790]
027e5710  ldr r5,[r1,#0x550]
027e5714  ldr r8,[r0,#0x4]
027e5718  ldr r0,[r0,#0x8]
027e571c  mov r6,r0, lsl #0x10
027e5720  mov r7,r6, lsr #0x10
027e5724  bl 0x037fe3a4
027e5728  mov r4,r0
027e572c  str r8,[r5,#0xb0]
027e5730  strh r7,[r5,#0xb8]
027e5734  add r0,r8,r6, lsr #0x10
027e5738  str r0,[r5,#0xb4]
027e573c  mov r0,#0x0
027e5740  strh r0,[r5,#0xae]
027e5744  str r0,[r5,#0xa8]
027e5748  strh r0,[r5,#0xac]
027e574c  str r0,[r5,#0x18]
027e5750  mov r0,#0xb
027e5754  strh r0,[r5,#0x0]
027e5758  bl 0x03808074
027e575c  mov r1,#0x11
027e5760  strh r1,[r0,#0x0]
027e5764  mov r1,#0x0
027e5768  strh r1,[r0,#0x2]
027e576c  mov r1,#0xe
027e5770  strh r1,[r0,#0x4]
027e5774  bl 0x038080d0
027e5778  mov r0,#0x1
027e577c  str r0,[r5,#0x10]
027e5780  mov r0,r4
027e5784  bl 0x037fe3b8
027e5788  ldmia sp!,{r4,r5,r6,r7,r8,lr}
027e578c  bx lr
