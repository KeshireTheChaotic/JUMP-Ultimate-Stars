0201957c  stmdb sp!,{r3,r4,r5,lr}
02019580  ldr r1,[0x20195dc]
02019584  mov r4,r0
02019588  str r1,[r4,#0x0]
0201958c  mov r5,#0x0
02019590  b 0x020195ac
02019594  add r0,r4,r5, lsl #0x2
02019598  ldr r0,[r0,#0xc]
0201959c  ldr r1,[r0,#0x0]
020195a0  ldr r1,[r1,#0xc]
020195a4  blx r1
020195a8  add r5,r5,#0x1
020195ac  ldr r0,[r4,#0x8]
020195b0  mov r0,r0, lsl #0x4
020195b4  cmp r5,r0, lsr #0x1d
020195b8  bcc 0x02019594
020195bc  ldr r0,[r4,#0x18]
020195c0  cmp r0,#0x0
020195c4  beq 0x020195d4
020195c8  ldr r1,[r0,#0x0]
020195cc  ldr r1,[r1,#0xc]
020195d0  blx r1
020195d4  mov r0,r4
020195d8  ldmia sp!,{r3,r4,r5,pc}
