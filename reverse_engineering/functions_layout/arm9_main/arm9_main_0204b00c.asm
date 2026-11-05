0204b00c  ldrb r0,[r0,#0x32]
0204b010  mov r0,r0, lsl #0x1e
0204b014  movs r0,r0, lsr #0x1f
0204b018  movne r0,#0x1
0204b01c  moveq r0,#0x0
0204b020  bx lr
