02163784  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02163788  ldr r4,[0x2163800]
0216378c  mov r3,#0xc
02163790  mla r7,r2,r3,r4
02163794  mov r10,r0
02163798  mov r9,r1
0216379c  mov r11,#0x0
021637a0  mov r4,r3
021637a4  b 0x021637f0
021637a8  mul r8,r9,r4
021637ac  mov r5,r11
021637b0  add r6,r10,r8
021637b4  b 0x021637e4
021637b8  ldr r0,[r7,r5,lsl #0x2]
021637bc  add r0,r6,r0, lsl #0x2
021637c0  ldr r0,[r0,#0xc8]
021637c4  bl 0x02152d80
021637c8  cmp r0,#0x0
021637cc  ldreq r0,[r7,r5,lsl #0x2]
021637d0  addeq r1,r10,r8
021637d4  addeq r0,r1,r0, lsl #0x2
021637d8  ldreq r0,[r0,#0xc8]
021637dc  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
021637e0  add r5,r5,#0x1
021637e4  cmp r5,#0x3
021637e8  blt 0x021637b8
021637ec  sub r9,r9,#0x1
021637f0  cmp r9,#0x0
021637f4  bge 0x021637a8
021637f8  ldr r0,[r10,#0xc4]
021637fc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
