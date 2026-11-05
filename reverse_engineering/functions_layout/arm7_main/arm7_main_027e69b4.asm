027e69b4  stmdb sp!,{r4,r5,r6,lr}
027e69b8  mov r6,r0
027e69bc  mov r5,r1
027e69c0  mov r4,r3
027e69c4  ands r0,r5,#0x8000
027e69c8  ldrne r0,[0x27e6a58]
027e69cc  andne r5,r5,r0
027e69d0  addeq r0,r5,#0x1c
027e69d4  moveq r0,r0, lsl #0x2
027e69d8  addeq r5,r0,#0x66
027e69dc  mov r0,r2
027e69e0  bl 0x03804440
027e69e4  add r1,r6,#0x22
027e69e8  mov r1,r1, lsl #0x2
027e69ec  add r1,r1,#0x60
027e69f0  mul r0,r5,r0
027e69f4  add r0,r0,#0x388
027e69f8  add r3,r1,r0
027e69fc  ldr r0,[0x27e6a5c]
027e6a00  ldrh r1,[r0,#0x0]
027e6a04  sub r0,r4,#0x2
027e6a08  subs r4,r0,r1
027e6a0c  bpl 0x027e6a1c
027e6a10  ldr r0,[0x27e6a60]
027e6a14  adds r4,r4,r0
027e6a18  bmi 0x027e6a14
027e6a1c  mov r0,#0x7f
027e6a20  mul r2,r4,r0
027e6a24  ldr r1,[0x27e6a64]
027e6a28  smull r0,r4,r1,r2
027e6a2c  mov r4,r4, asr #0x3
027e6a30  mov r0,r2, lsr #0x1f
027e6a34  add r4,r0,r4
027e6a38  mov r0,#0xa
027e6a3c  mul r0,r4,r0
027e6a40  cmp r0,r3
027e6a44  movcc r4,#0x0
027e6a48  mov r0,r4, lsl #0x10
027e6a4c  mov r0,r0, lsr #0x10
027e6a50  ldmia sp!,{r4,r5,r6,lr}
027e6a54  bx lr
