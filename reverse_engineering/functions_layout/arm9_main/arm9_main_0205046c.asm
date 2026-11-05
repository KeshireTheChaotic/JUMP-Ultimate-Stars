0205046c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
02050470  ldmia r0,{r3,r9,r10,r11,r12}
02050474  sub sp,sp,#0x84
02050478  str r2,[sp,#0x80]
0205047c  ldr r8,[0x205045c]
02050480  ldr r7,[0x2050458]
02050484  mov r6,sp
02050488  mov r5,#0x0
0205048c  ldr r4,[r1],#0x4
02050490  add r2,r8,r12
02050494  add r2,r2,r3, ror #0x1b
02050498  and lr,r4,r7
0205049c  and r4,r7,r4, ror #0x18
020504a0  orr r4,r4,lr, ror #0x8
020504a4  str r4,[r6,#0x40]
020504a8  str r4,[r6],#0x4
020504ac  add r2,r2,r4
020504b0  eor r4,r10,r11
020504b4  and r4,r4,r9
020504b8  eor r4,r4,r11
020504bc  add r2,r2,r4
020504c0  mov r9,r9, ror #0x2
020504c4  mov r12,r11
020504c8  mov r11,r10
020504cc  mov r10,r9
020504d0  mov r9,r3
020504d4  mov r3,r2
020504d8  add r5,r5,#0x4
020504dc  cmp r5,#0x40
020504e0  blt 0x0205048c
020504e4  mov r7,#0x0
020504e8  mov r6,sp
020504ec  ldr r2,[r6,#0x0]
020504f0  ldr r5,[r6,#0x8]
020504f4  ldr r4,[r6,#0x20]
020504f8  ldr lr,[r6,#0x34]
020504fc  eor r2,r2,r5
02050500  eor r4,r4,lr
02050504  eor r2,r2,r4
02050508  mov r2,r2, ror #0x1f
0205050c  str r2,[r6,#0x40]
02050510  str r2,[r6],#0x4
02050514  add r2,r2,r12
02050518  add r2,r2,r8
0205051c  add r2,r2,r3, ror #0x1b
02050520  eor r4,r10,r11
02050524  and r4,r4,r9
02050528  eor r4,r4,r11
0205052c  add r2,r2,r4
02050530  mov r9,r9, ror #0x2
02050534  mov r12,r11
02050538  mov r11,r10
0205053c  mov r10,r9
02050540  mov r9,r3
02050544  mov r3,r2
02050548  add r7,r7,#0x4
0205054c  cmp r7,#0x10
02050550  blt 0x020504ec
02050554  ldr r8,[0x2050460]
02050558  mov r7,#0x0
0205055c  ldr r2,[r6,#0x0]
02050560  ldr r4,[r6,#0x8]
02050564  ldr lr,[r6,#0x20]
02050568  ldr r5,[r6,#0x34]
0205056c  eor r2,r2,r4
02050570  eor lr,lr,r5
02050574  eor r2,r2,lr
02050578  mov r2,r2, ror #0x1f
0205057c  str r2,[r6,#0x40]
02050580  str r2,[r6],#0x4
02050584  add r2,r2,r12
02050588  add r2,r2,r8
0205058c  add r2,r2,r3, ror #0x1b
02050590  eor lr,r9,r10
02050594  eor lr,lr,r11
02050598  add r2,r2,lr
0205059c  mov r9,r9, ror #0x2
020505a0  mov r12,r11
020505a4  mov r11,r10
020505a8  mov r10,r9
020505ac  mov r9,r3
020505b0  mov r3,r2
020505b4  add r7,r7,#0x1
020505b8  cmp r7,#0xc
020505bc  moveq r6,sp
020505c0  cmp r7,#0x14
020505c4  blt 0x0205055c
020505c8  ldr r8,[0x2050464]
020505cc  mov r7,#0x0
020505d0  ldr r2,[r6,#0x0]
020505d4  ldr lr,[r6,#0x8]
020505d8  ldr r5,[r6,#0x20]
020505dc  ldr r4,[r6,#0x34]
020505e0  eor r2,r2,lr
020505e4  eor r5,r5,r4
020505e8  eor r2,r2,r5
020505ec  mov r2,r2, ror #0x1f
020505f0  str r2,[r6,#0x40]
020505f4  str r2,[r6],#0x4
020505f8  add r2,r2,r12
020505fc  add r2,r2,r8
02050600  add r2,r2,r3, ror #0x1b
02050604  orr r5,r9,r10
02050608  and r5,r5,r11
0205060c  and r4,r9,r10
02050610  orr r5,r5,r4
02050614  add r2,r2,r5
02050618  mov r9,r9, ror #0x2
0205061c  mov r12,r11
02050620  mov r11,r10
02050624  mov r10,r9
02050628  mov r9,r3
0205062c  mov r3,r2
02050630  add r7,r7,#0x1
02050634  cmp r7,#0x8
02050638  moveq r6,sp
0205063c  cmp r7,#0x14
02050640  blt 0x020505d0
02050644  ldr r8,[0x2050468]
02050648  mov r7,#0x0
0205064c  ldr r2,[r6,#0x0]
02050650  ldr r5,[r6,#0x8]
02050654  ldr r4,[r6,#0x20]
02050658  ldr lr,[r6,#0x34]
0205065c  eor r2,r2,r5
02050660  eor r4,r4,lr
02050664  eor r2,r2,r4
02050668  mov r2,r2, ror #0x1f
0205066c  str r2,[r6,#0x40]
02050670  str r2,[r6],#0x4
02050674  add r2,r2,r12
02050678  add r2,r2,r8
0205067c  add r2,r2,r3, ror #0x1b
02050680  eor r4,r9,r10
02050684  eor r4,r4,r11
02050688  add r2,r2,r4
0205068c  mov r9,r9, ror #0x2
02050690  mov r12,r11
02050694  mov r11,r10
02050698  mov r10,r9
0205069c  mov r9,r3
020506a0  mov r3,r2
020506a4  add r7,r7,#0x1
020506a8  cmp r7,#0x4
020506ac  moveq r6,sp
020506b0  cmp r7,#0x14
020506b4  blt 0x0205064c
020506b8  ldmia r0,{r2,r4,r6,r7,lr}
020506bc  add r3,r3,r2
020506c0  add r9,r9,r4
020506c4  add r10,r10,r6
020506c8  add r11,r11,r7
020506cc  add r12,r12,lr
020506d0  stmia r0,{r3,r9,r10,r11,r12}
020506d4  ldr lr,[sp,#0x80]
020506d8  subs lr,lr,#0x40
020506dc  str lr,[sp,#0x80]
020506e0  bgt 0x0205047c
020506e4  add sp,sp,#0x84
020506e8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,pc}
