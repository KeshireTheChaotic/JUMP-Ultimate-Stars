020280c4  stmdb sp!,{r4,lr}
020280c8  mov r4,r0
020280cc  ldrb r0,[r4,#0x28]
020280d0  mov r1,r0, lsl #0x1b
020280d4  movs r1,r1, lsr #0x1f
020280d8  beq 0x0202815c
020280dc  mov r1,r0, lsl #0x1c
020280e0  movs r1,r1, lsr #0x1f
020280e4  bne 0x020280f4
020280e8  mov r0,r0, lsl #0x1d
020280ec  movs r0,r0, lsr #0x1f
020280f0  beq 0x0202813c
020280f4  ldrb r0,[r4,#0x28]
020280f8  mov r1,r0, lsl #0x1e
020280fc  movs r1,r1, lsr #0x1f
02028100  bne 0x0202813c
02028104  mov r0,r0, lsl #0x18
02028108  movs r0,r0, lsr #0x1f
0202810c  bne 0x0202813c
02028110  ldrb r0,[r4,#0x29]
02028114  mov r0,r0, lsl #0x1e
02028118  movs r0,r0, lsr #0x1f
0202811c  bne 0x0202813c
02028120  ldr r1,[r4,#0x34]
02028124  ldr r0,[r4,#0x3c]
02028128  ldr r1,[r1,#0x248]
0202812c  bic r0,r0,#0x80000000
02028130  orr r0,r0,#0x80000000
02028134  tst r1,r0
02028138  ldmiane sp!,{r4,pc}
0202813c  mov r0,r4
02028140  ldr r1,[r0,#0x0]
02028144  ldr r1,[r1,#0x5c]
02028148  blx r1
0202814c  ldrb r0,[r4,#0x28]
02028150  bic r0,r0,#0x1
02028154  strb r0,[r4,#0x28]
02028158  ldmia sp!,{r4,pc}
0202815c  mov r1,r0, lsl #0x18
02028160  movs r1,r1, lsr #0x1f
02028164  bne 0x020281f8
02028168  mov r1,r0, lsl #0x1e
0202816c  movs r1,r1, lsr #0x1f
02028170  bne 0x020281f8
02028174  ldrb r1,[r4,#0x29]
02028178  mov r1,r1, lsl #0x1e
0202817c  movs r1,r1, lsr #0x1f
02028180  bne 0x020281f8
02028184  ldr r2,[r4,#0x34]
02028188  ldr r1,[r4,#0x3c]
0202818c  ldr r2,[r2,#0x248]
02028190  bic r1,r1,#0x80000000
02028194  orr r1,r1,#0x80000000
02028198  tst r2,r1
0202819c  beq 0x020281f8
020281a0  mov r1,r0, lsl #0x1c
020281a4  movs r1,r1, lsr #0x1f
020281a8  bne 0x020281b8
020281ac  mov r1,r0, lsl #0x1d
020281b0  movs r1,r1, lsr #0x1f
020281b4  beq 0x020281dc
020281b8  mov r0,r4
020281bc  ldr r1,[r0,#0x0]
020281c0  ldr r1,[r1,#0x58]
020281c4  blx r1
020281c8  ldrb r0,[r4,#0x28]
020281cc  bic r0,r0,#0x1
020281d0  orr r0,r0,#0x1
020281d4  strb r0,[r4,#0x28]
020281d8  ldmia sp!,{r4,pc}
020281dc  mov r1,r0, lsl #0x1f
020281e0  mov r1,r1, lsr #0x1f
020281e4  cmp r1,#0x1
020281e8  bicne r0,r0,#0x1
020281ec  orrne r0,r0,#0x1
020281f0  strbne r0,[r4,#0x28]
020281f4  ldmia sp!,{r4,pc}
020281f8  ldrb r0,[r4,#0x28]
020281fc  mov r1,r0, lsl #0x1f
02028200  movs r1,r1, lsr #0x1f
02028204  bicne r0,r0,#0x1
02028208  strbne r0,[r4,#0x28]
0202820c  ldmia sp!,{r4,pc}
