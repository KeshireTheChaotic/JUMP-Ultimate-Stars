0208c564  ldr r0,[0x208c584]
0208c568  ldrb r1,[r0,#0x0]
0208c56c  cmp r1,#0x0
0208c570  movne r1,#0x0
0208c574  strbne r1,[r0,#0x0]
0208c578  movne r0,#0x1
0208c57c  moveq r0,#0x0
0208c580  bx lr
