0216a138  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0216a13c  sub sp,sp,#0x3c
0216a140  mov r6,#0x0
0216a144  sub r3,r6,#0x79
0216a148  mov r2,#0x40
0216a14c  mov r10,r0
0216a150  strb r3,[sp,#0x0]
0216a154  strb r2,[sp,#0x1]
0216a158  strb r6,[sp,#0x2]
0216a15c  ldr r0,[r10,#0xc]
0216a160  mov r9,r1
0216a164  mov r7,r6
0216a168  bl 0x0216d49c
0216a16c  str r0,[r10,#0x68]
0216a170  mov r5,r6
0216a174  mov r11,#0x1
0216a178  b 0x0216a230
0216a17c  ldr r0,[0x216a27c]
0216a180  mov r8,r5, lsr #0x5
0216a184  add r0,r0,r8, lsl #0x2
0216a188  ldr r0,[r0,#0xa24]
0216a18c  and r4,r5,#0x1f
0216a190  tst r0,r11, lsl r4
0216a194  beq 0x0216a22c
0216a198  ldr r0,[r10,#0xc]
0216a19c  mov r1,r5
0216a1a0  bl 0x0216d4e4
0216a1a4  add r0,r0,#0x5f
0216a1a8  add r0,r0,#0x8700
0216a1ac  mov r0,r0, lsl #0x10
0216a1b0  mov r2,r0, asr #0x10
0216a1b4  ldr r0,[0x216a27c]
0216a1b8  mov r1,r2, asr #0x8
0216a1bc  add r0,r0,r8, lsl #0x2
0216a1c0  ldr r0,[r0,#0xa2c]
0216a1c4  strb r1,[sp,#0x4]
0216a1c8  tst r0,r11, lsl r4
0216a1cc  mov r0,#0x0
0216a1d0  strb r2,[sp,#0x5]
0216a1d4  strb r0,[sp,#0x6]
0216a1d8  beq 0x0216a1e8
0216a1dc  add r0,sp,#0x4
0216a1e0  add r1,sp,#0x0
0216a1e4  bl 0x020741bc
0216a1e8  ldr r0,[r10,#0xc]
0216a1ec  mov r1,r5
0216a1f0  bl 0x0216d4a4
0216a1f4  mov r1,r0
0216a1f8  add r0,sp,#0x4
0216a1fc  bl 0x020741bc
0216a200  ldr r0,[r10,#0x44]
0216a204  add r1,sp,#0x4
0216a208  ldr r0,[r0,#0x4]
0216a20c  mov r2,r5
0216a210  blx 0x021ace90
0216a214  ldr r0,[r10,#0xc]
0216a218  mov r1,r5
0216a21c  bl 0x0216d4f8
0216a220  cmp r9,r0
0216a224  moveq r7,r6
0216a228  add r6,r6,#0x1
0216a22c  add r5,r5,#0x1
0216a230  ldr r0,[r10,#0x68]
0216a234  cmp r5,r0
0216a238  blt 0x0216a17c
0216a23c  ldr r0,[r10,#0x44]
0216a240  mov r1,r7
0216a244  ldr r0,[r0,#0x4]
0216a248  mov r2,#0x0
0216a24c  ldr r3,[r0,#0x0]
0216a250  ldr r3,[r3,#0x1a0]
0216a254  blx r3
0216a258  ldr r0,[r10,#0x44]
0216a25c  mov r1,r7
0216a260  ldr r0,[r0,#0x4]
0216a264  ldr r2,[r0,#0x0]
0216a268  ldr r2,[r2,#0x198]
0216a26c  blx r2
0216a270  str r7,[r10,#0x64]
0216a274  add sp,sp,#0x3c
0216a278  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
