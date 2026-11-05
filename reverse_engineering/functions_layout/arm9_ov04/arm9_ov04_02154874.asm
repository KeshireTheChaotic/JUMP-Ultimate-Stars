02154874  stmdb sp!,{r4,lr}
02154878  ldr r0,[r0,#0x4]
0215487c  mov r2,#0x1
02154880  ldr r4,[r0,#0x10]
02154884  ldr r0,[r4,#0x2c]
02154888  ldr r0,[r0,#0x0]
0215488c  ldr r1,[r0,#0x4]
02154890  ldrb r0,[r1,#0x28]
02154894  mov r0,r0, lsl #0x1e
02154898  movs r0,r0, lsr #0x1f
0215489c  ldreq r0,[r1,#0x34]
021548a0  ldreq r0,[r0,#0x244]
021548a4  cmpeq r0,#0x0
021548a8  moveq r2,#0x0
021548ac  cmp r2,#0x0
021548b0  ldmiaeq sp!,{r4,pc}
021548b4  mov r0,r4
021548b8  mov r1,#0x0
021548bc  bl 0x02154750
021548c0  ldr r0,[r4,#0x0]
021548c4  ldr r1,[0x21548d4]
021548c8  ldr r0,[r0,#0x4]
021548cc  bl 0x02028384
021548d0  ldmia sp!,{r4,pc}
