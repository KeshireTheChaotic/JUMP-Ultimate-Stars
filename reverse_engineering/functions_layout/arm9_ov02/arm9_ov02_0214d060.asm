0214d060  stmdb sp!,{r3,r4,r5,lr}
0214d064  mov r5,r0
0214d068  ldr r0,[r5,#0x4]
0214d06c  ldr r4,[r0,#0x10]
0214d070  mov r0,r4
0214d074  bl 0x0214e028
0214d078  cmp r0,#0x0
0214d07c  ldmiaeq sp!,{r3,r4,r5,pc}
0214d080  ldrb r2,[r4,#0x56]
0214d084  ldr r1,[0x214d104]
0214d088  ldr r0,[r4,#0x8]
0214d08c  ldr r1,[r1,r2,lsl #0x2]
0214d090  blx r1
0214d094  mov r0,#0x0
0214d098  str r0,[r4,#0x8]
0214d09c  ldrb r2,[r4,#0x57]
0214d0a0  ldr r1,[0x214d108]
0214d0a4  mov r0,r4
0214d0a8  ldr r1,[r1,r2,lsl #0x2]
0214d0ac  blx r1
0214d0b0  ldr r0,[0x214d10c]
0214d0b4  ldr r0,[r0,#0x0]
0214d0b8  blx r0
0214d0bc  ldr r0,[0x214d10c]
0214d0c0  ldr r0,[r0,#0x0]
0214d0c4  blx r0
0214d0c8  ldr r0,[r5,#0x4]
0214d0cc  ldr r1,[0x214d110]
0214d0d0  bl 0x02028384
0214d0d4  ldrb r2,[r4,#0x57]
0214d0d8  ldr r1,[0x214d114]
0214d0dc  mov r0,r4
0214d0e0  strb r2,[r4,#0x56]
0214d0e4  ldr r1,[r1,r2,lsl #0x2]
0214d0e8  blx r1
0214d0ec  str r0,[r4,#0x8]
0214d0f0  ldrb r2,[r4,#0x56]
0214d0f4  ldr r1,[0x214d118]
0214d0f8  ldr r1,[r1,r2,lsl #0x2]
0214d0fc  blx r1
0214d100  ldmia sp!,{r3,r4,r5,pc}
