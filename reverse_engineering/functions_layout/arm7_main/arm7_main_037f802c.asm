037f802c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
037f8030  sub sp,sp,#0x4
037f8034  mov r10,r0
037f8038  mov r8,#0x0
037f803c  bl 0x037f81e8
037f8040  cmp r0,#0x0
037f8044  beq 0x037f80f8
037f8048  bl 0x037f81c4
037f804c  mov r7,r0
037f8050  mov r9,r8
037f8054  mov r4,#0x1
037f8058  mov r11,#0x8a
037f805c  mov r5,#0x70
037f8060  add r6,r10,r9, lsl #0x8
037f8064  ldr r0,[0x37f81b4]
037f8068  mov r1,r6
037f806c  mov r2,r5
037f8070  bl 0x037f81b8
037f8074  mov r2,r6
037f8078  ldrh r1,[r2,#0x72]
037f807c  cmp r0,r1
037f8080  bne 0x037f80e0
037f8084  ldrh r0,[r2,#0x70]
037f8088  cmp r0,#0x80
037f808c  bcs 0x037f80e0
037f8090  ldr r0,[0x37f81b4]
037f8094  add r1,r6,#0x74
037f8098  mov r2,r11
037f809c  bl 0x037f81b8
037f80a0  mov r3,r6
037f80a4  ldrh r1,[r3,#0xfe]
037f80a8  cmp r0,r1
037f80ac  bne 0x037f80e0
037f80b0  ldrh r2,[r3,#0x76]
037f80b4  ldrb r0,[r3,#0x75]
037f80b8  mov r1,r4, lsl r0
037f80bc  ands r1,r1,r2
037f80c0  beq 0x037f80e0
037f80c4  ands r1,r7,r2
037f80c8  ldrhne r1,[r6,#0x64]
037f80cc  bicne r1,r1,#0x7
037f80d0  andne r0,r0,#0x7
037f80d4  orrne r0,r1,r0
037f80d8  strhne r0,[r6,#0x64]
037f80dc  orr r8,r8,r4, lsl r9
037f80e0  add r0,r9,#0x1
037f80e4  mov r0,r0, lsl #0x10
037f80e8  mov r9,r0, lsr #0x10
037f80ec  cmp r9,#0x2
037f80f0  bcc 0x037f8060
037f80f4  b 0x037f8158
037f80f8  bl 0x037f81c4
037f80fc  cmp r0,#0x0
037f8100  movne r0,#0x3
037f8104  bne 0x037f81a8
037f8108  mov r7,r8
037f810c  mov r4,#0x1
037f8110  ldr r6,[0x37f81b4]
037f8114  mov r5,#0x70
037f8118  mov r0,r6
037f811c  add r1,r10,r7, lsl #0x8
037f8120  mov r2,r5
037f8124  bl 0x037f81b8
037f8128  add r2,r10,r7, lsl #0x8
037f812c  ldrh r1,[r2,#0x72]
037f8130  cmp r0,r1
037f8134  bne 0x037f8144
037f8138  ldrh r0,[r2,#0x70]
037f813c  cmp r0,#0x80
037f8140  orrcc r8,r8,r4, lsl r7
037f8144  add r0,r7,#0x1
037f8148  mov r0,r0, lsl #0x10
037f814c  mov r7,r0, lsr #0x10
037f8150  cmp r7,#0x2
037f8154  bcc 0x037f8118
037f8158  cmp r8,#0x1
037f815c  beq 0x037f8174
037f8160  cmp r8,#0x2
037f8164  beq 0x037f8174
037f8168  cmp r8,#0x3
037f816c  beq 0x037f817c
037f8170  b 0x037f81a4
037f8174  mov r0,r8
037f8178  b 0x037f81a8
037f817c  ldrh r0,[r10,#0x70]
037f8180  add r0,r0,#0x1
037f8184  and r0,r0,#0x7f
037f8188  and r1,r0,#0xff
037f818c  add r0,r10,#0x100
037f8190  ldrh r0,[r0,#0x70]
037f8194  cmp r1,r0
037f8198  moveq r0,#0x2
037f819c  movne r0,#0x1
037f81a0  b 0x037f81a8
037f81a4  mov r0,#0x0
037f81a8  add sp,sp,#0x4
037f81ac  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
037f81b0  bx lr
