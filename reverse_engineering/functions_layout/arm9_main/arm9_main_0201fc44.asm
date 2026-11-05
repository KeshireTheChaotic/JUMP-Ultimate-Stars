0201fc44  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0201fc48  mov r6,r0
0201fc4c  mov r0,r6
0201fc50  mov r5,r1
0201fc54  ldr r1,[r0,#0x0]
0201fc58  movs r4,r2
0201fc5c  ldr r1,[r1,#0xd0]
0201fc60  ldreq r4,[r6,#0x1c]
0201fc64  blx r1
0201fc68  bl 0x0201e6d4
0201fc6c  mov r12,#0x0
0201fc70  ldrb r3,[r0,#0x6]
0201fc74  mov r2,r12
0201fc78  b 0x0201fcc0
0201fc7c  ldr r0,[r6,#0x5c]
0201fc80  mov r7,r2
0201fc84  ldr lr,[r0,r12,lsl #0x2]
0201fc88  ldrh r8,[lr,#0x52]
0201fc8c  b 0x0201fcb4
0201fc90  ldr r1,[lr,#0x4c]
0201fc94  add r0,r1,r7, lsl #0x4
0201fc98  ldr r0,[r0,#0x4]
0201fc9c  cmp r0,r5
0201fca0  ldreq r0,[r1,r7,lsl #0x4]
0201fca4  cmpeq r0,r4
0201fca8  moveq r0,#0x1
0201fcac  ldmiaeq sp!,{r4,r5,r6,r7,r8,pc}
0201fcb0  add r7,r7,#0x1
0201fcb4  cmp r7,r8
0201fcb8  blt 0x0201fc90
0201fcbc  add r12,r12,#0x1
0201fcc0  cmp r12,r3
0201fcc4  bcc 0x0201fc7c
0201fcc8  mov r0,#0x0
0201fccc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
