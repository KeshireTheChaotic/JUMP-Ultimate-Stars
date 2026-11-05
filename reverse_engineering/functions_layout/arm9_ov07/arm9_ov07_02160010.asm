02160010  ldr r0,[0x216003c]
02160014  ldr r0,[r0,#0x0]
02160018  add r1,r0,#0x5200
0216001c  ldrh r0,[r1,#0x6]
02160020  cmp r0,#0x0
02160024  ldrhne r1,[r1,#0x4]
02160028  movne r2,#0x1
0216002c  orrne r0,r0,r2, lsl r1
02160030  movne r0,r0, lsl #0x10
02160034  movne r0,r0, lsr #0x10
02160038  bx lr
