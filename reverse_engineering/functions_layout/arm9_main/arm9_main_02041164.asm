02041164  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02041168  mov r5,r0
0204116c  ldr r3,[r5,#0xc]
02041170  mov r1,#0xc0
02041174  b 0x02041184
02041178  add r0,r5,r3, lsl #0x3
0204117c  strh r1,[r0,#0x10]
02041180  add r3,r3,#0x1
02041184  ldr r2,[r5,#0x0]
02041188  cmp r3,r2
0204118c  bcc 0x02041178
02041190  ldr r0,[r5,#0xc]
02041194  add r6,r5,#0x10
02041198  cmp r0,r2
0204119c  rsbcc r0,r0,#0x80
020411a0  rsbcs r0,r2,#0x80
020411a4  mov r4,r0, lsl #0x3
020411a8  ldr r0,[r5,#0x4]
020411ac  rsb r0,r0,#0x20
020411b0  cmp r4,r0, lsl #0x5
020411b4  mov r0,r0, lsl #0x5
020411b8  movcc r4,r0
020411bc  rsb r7,r4,#0x400
020411c0  mov r1,r4
020411c4  add r0,r6,r7
020411c8  str r2,[r5,#0xc]
020411cc  bl 0x0205401c
020411d0  ldr r0,[0x2041200]
020411d4  ldr r2,[r5,#0x8]
020411d8  ldr r0,[r0,#0x0]
020411dc  mov r3,r4
020411e0  add r1,r6,r7
020411e4  add r2,r2,r7
020411e8  bl 0x0205160c
020411ec  mov r0,#0x80
020411f0  str r0,[r5,#0x0]
020411f4  mov r0,#0x20
020411f8  str r0,[r5,#0x4]
020411fc  ldmia sp!,{r3,r4,r5,r6,r7,pc}
