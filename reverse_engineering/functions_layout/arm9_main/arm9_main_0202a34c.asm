0202a34c  stmdb sp!,{r3,r4,r5,lr}
0202a350  mov r5,r0
0202a354  mov r4,r1
0202a358  ldrb r2,[r5,#0x24]
0202a35c  ldrb r1,[r4,#0x25]
0202a360  orr r1,r2,r1
0202a364  strb r1,[r5,#0x25]
0202a368  ldrb r1,[r5,#0x24]
0202a36c  bic r2,r1,#0x8
0202a370  and r1,r2,#0xff
0202a374  mov r1,r1, lsl #0x1b
0202a378  strb r2,[r5,#0x24]
0202a37c  movs r1,r1, lsr #0x1f
0202a380  beq 0x0202a38c
0202a384  ldr r1,[r5,#0x2c]
0202a388  blx r1
0202a38c  ldr r2,[r5,#0x28]
0202a390  mov r0,r5
0202a394  mov r1,r4
0202a398  blx r2
0202a39c  ldmia sp!,{r3,r4,r5,pc}
