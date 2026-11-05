037fd6ac  stmdb sp!,{lr}
037fd6b0  sub sp,sp,#0xc
037fd6b4  bl 0x037fe3a4
037fd6b8  ldr r1,[0x37fd74c]
037fd6bc  ldrh r1,[r1,#0x0]
037fd6c0  strh r1,[sp,#0x0]
037fd6c4  ldr r1,[0x37fd750]
037fd6c8  ldr r12,[r1,#0x0]
037fd6cc  ldr r3,[r1,#0x4]
037fd6d0  ldr r2,[0x37fd754]
037fd6d4  mvn r1,#0x0
037fd6d8  and r2,r3,r2
037fd6dc  and r1,r12,r1
037fd6e0  str r1,[sp,#0x4]
037fd6e4  str r2,[sp,#0x8]
037fd6e8  ldr r1,[0x37fd758]
037fd6ec  ldr r1,[r1,#0x0]
037fd6f0  ands r1,r1,#0x8
037fd6f4  beq 0x037fd720
037fd6f8  ldrh r1,[sp,#0x0]
037fd6fc  ands r1,r1,#0x8000
037fd700  bne 0x037fd720
037fd704  ldr r3,[sp,#0x4]
037fd708  ldr r2,[sp,#0x8]
037fd70c  mov r1,#0x1
037fd710  adds r3,r3,r1
037fd714  adc r1,r2,#0x0
037fd718  str r3,[sp,#0x4]
037fd71c  str r1,[sp,#0x8]
037fd720  bl 0x037fe3b8
037fd724  ldr r2,[sp,#0x4]
037fd728  ldr r0,[sp,#0x8]
037fd72c  mov r1,r0, lsl #0x10
037fd730  orr r1,r1,r2, lsr #0x10
037fd734  ldrh r0,[sp,#0x0]
037fd738  orr r1,r1,r0, asr #0x1f
037fd73c  orr r0,r0,r2, lsl #0x10
037fd740  add sp,sp,#0xc
037fd744  ldmia sp!,{lr}
037fd748  bx lr
