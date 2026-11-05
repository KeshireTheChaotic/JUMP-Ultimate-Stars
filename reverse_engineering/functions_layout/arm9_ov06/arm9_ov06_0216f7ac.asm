0216f7ac  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0216f7b0  sub sp,sp,#0x8
0216f7b4  mov r5,r0
0216f7b8  bl 0x0216f398
0216f7bc  ldr r1,[r5,#0x2c]
0216f7c0  mov r4,r0
0216f7c4  ldr r0,[r1,#0x10]
0216f7c8  ldr r6,[r0,#0x5c]
0216f7cc  ldrsh r0,[r6,#0x24]
0216f7d0  mov r0,r0, lsl #0xc
0216f7d4  bl 0x0200c954
0216f7d8  ldr r1,[0x216f8d0]
0216f7dc  bl 0x0200c5ac
0216f7e0  ldrsh r1,[r6,#0x26]
0216f7e4  mov r7,r0
0216f7e8  mov r0,r1, lsl #0xc
0216f7ec  bl 0x0200c954
0216f7f0  ldr r1,[0x216f8d0]
0216f7f4  bl 0x0200c5ac
0216f7f8  bl 0x0200c85c
0216f7fc  mov r6,r0
0216f800  mov r0,r7
0216f804  mov r7,r1
0216f808  bl 0x0200c85c
0216f80c  mov r2,r0
0216f810  mov r0,r6
0216f814  mov r3,r1
0216f818  mov r1,r7
0216f81c  blx 0x02009d2c
0216f820  bl 0x0200b6c4
0216f824  mov r1,r0
0216f828  ldr r0,[0x216f8d0]
0216f82c  bl 0x0200c9e4
0216f830  bl 0x0200c8e0
0216f834  mov r0,r0, lsl #0x10
0216f838  add r0,r0,r0, lsr #0x1f
0216f83c  mov r0,r0, asr #0x1
0216f840  bl 0x0200c954
0216f844  ldr r1,[0x216f8d4]
0216f848  bl 0x0200c5ac
0216f84c  bl 0x0200c8e0
0216f850  cmp r0,#0x0
0216f854  sublt r0,r0,#0xff
0216f858  sublt r0,r0,#0x700
0216f85c  strlt r0,[sp,#0x0]
0216f860  addge r0,r0,#0xff
0216f864  addlt r1,sp,#0x0
0216f868  addge r0,r0,#0x700
0216f86c  strge r0,[sp,#0x4]
0216f870  addge r1,sp,#0x4
0216f874  ldr r1,[r1,#0x0]
0216f878  ldr r2,[r5,#0x2c]
0216f87c  mov r0,r1, asr #0xb
0216f880  add r0,r1,r0, lsr #0x14
0216f884  mov r1,r0, lsl #0x4
0216f888  ldr r0,[r2,#0x8]
0216f88c  mov r6,r1, lsr #0x10
0216f890  bl 0x02155c9c
0216f894  cmp r0,#0x0
0216f898  ldr r0,[r5,#0x2c]
0216f89c  beq 0x0216f8b4
0216f8a0  ldr r0,[r0,#0x8]
0216f8a4  sub r1,r6,#0x8000
0216f8a8  ldr r0,[r0,#0x4]
0216f8ac  bl 0x02023738
0216f8b0  b 0x0216f8c4
0216f8b4  ldr r0,[r0,#0x8]
0216f8b8  mov r1,r6
0216f8bc  ldr r0,[r0,#0x4]
0216f8c0  bl 0x02023738
0216f8c4  mov r0,r4
0216f8c8  add sp,sp,#0x8
0216f8cc  ldmia sp!,{r3,r4,r5,r6,r7,pc}
