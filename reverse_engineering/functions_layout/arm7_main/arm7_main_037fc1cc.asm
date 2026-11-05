037fc1cc  stmdb sp!,{r4,r5,lr}
037fc1d0  sub sp,sp,#0x34
037fc1d4  mov r5,r0
037fc1d8  add r0,sp,#0x8
037fc1dc  bl 0x037fdc48
037fc1e0  ldr r0,[0x37fc264]
037fc1e4  ldr r0,[r0,#0x0]
037fc1e8  ldr r0,[r0,#0x0]
037fc1ec  str r0,[sp,#0x4]
037fc1f0  bl 0x037fe3a4
037fc1f4  mov r4,r0
037fc1f8  add r0,sp,#0x8
037fc1fc  ldr r1,[sp,#0x4]
037fc200  str r0,[r1,#0x94]
037fc204  add r1,sp,#0x4
037fc208  str r1,[sp,#0x0]
037fc20c  mov r2,#0x0
037fc210  ldr r1,[0x37fc268]
037fc214  umull r12,r3,r5,r1
037fc218  mla r3,r5,r2,r3
037fc21c  mla r3,r2,r1,r3
037fc220  mov r2,r3, lsr #0x6
037fc224  mov r1,r12, lsr #0x6
037fc228  orr r1,r1,r3, lsl #0x1a
037fc22c  ldr r3,[0x37fc26c]
037fc230  bl 0x037fdaa4
037fc234  mov r5,#0x0
037fc238  b 0x037fc244
037fc23c  mov r0,r5
037fc240  bl 0x037fc4dc
037fc244  ldr r0,[sp,#0x4]
037fc248  cmp r0,#0x0
037fc24c  bne 0x037fc23c
037fc250  mov r0,r4
037fc254  bl 0x037fe3b8
037fc258  add sp,sp,#0x34
037fc25c  ldmia sp!,{r4,r5,lr}
037fc260  bx lr
