0201c118  stmdb sp!,{r4,lr}
0201c11c  mov r4,r0
0201c120  ldrb r0,[r4,#0x32]
0201c124  mov r1,r0, lsl #0x1c
0201c128  movs r1,r1, lsr #0x1f
0201c12c  bne 0x0201c13c
0201c130  mov r0,r0, lsl #0x1b
0201c134  movs r0,r0, lsr #0x1f
0201c138  beq 0x0201c14c
0201c13c  mov r0,r4
0201c140  ldr r1,[r0,#0x0]
0201c144  ldr r1,[r1,#0xcc]
0201c148  blx r1
0201c14c  mov r0,r4
0201c150  ldr r1,[r0,#0x0]
0201c154  ldr r1,[r1,#0xc8]
0201c158  blx r1
0201c15c  ldmia sp!,{r4,pc}
