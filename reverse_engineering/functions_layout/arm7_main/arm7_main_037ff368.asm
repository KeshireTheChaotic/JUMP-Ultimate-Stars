037ff368  ldr r2,[0x37ff390]
037ff36c  ldr r3,[r2,#0x0]
037ff370  ldr r0,[0x37ff394]
037ff374  ldr r1,[0x37ff398]
037ff378  mla r0,r3,r0,r1
037ff37c  str r0,[r2,#0x0]
037ff380  mov r0,r0, lsr #0x10
037ff384  mov r0,r0, lsl #0x10
037ff388  mov r0,r0, lsr #0x10
037ff38c  bx lr
