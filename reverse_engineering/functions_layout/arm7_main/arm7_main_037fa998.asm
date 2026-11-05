037fa998  ldr r1,[0x37fa9b8]
037fa99c  cmp r0,r1
037fa9a0  ldrcs r1,[0x37fa9bc]
037fa9a4  ldrcs r1,[r1,#0x0]
037fa9a8  addcs r1,r1,#0x300
037fa9ac  ldrhcs r1,[r1,#0xde]
037fa9b0  subcs r0,r0,r1
037fa9b4  bx lr
