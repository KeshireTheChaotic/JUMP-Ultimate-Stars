020123d8  stmdb sp!,{r3,lr}
020123dc  ldrb r1,[r0,#0x29]
020123e0  cmp r1,#0x0
020123e4  ldrb r1,[r0,#0x28]
020123e8  beq 0x02012410
020123ec  cmp r1,#0x0
020123f0  bne 0x02012408
020123f4  ldr r1,[r0,#0x1c]
020123f8  ldrb r1,[r1,#0x28]
020123fc  mov r1,r1, lsl #0x1f
02012400  movs r1,r1, lsr #0x1f
02012404  ldmiane sp!,{r3,pc}
02012408  bl 0x0201199c
0201240c  ldmia sp!,{r3,pc}
02012410  cmp r1,#0x0
02012414  ldmiane sp!,{r3,pc}
02012418  ldr r1,[r0,#0x1c]
0201241c  cmp r1,#0x0
02012420  ldmiaeq sp!,{r3,pc}
02012424  ldrb r1,[r1,#0x28]
02012428  mov r1,r1, lsl #0x1f
0201242c  movs r1,r1, lsr #0x1f
02012430  ldmiaeq sp!,{r3,pc}
02012434  bl 0x020119ec
02012438  ldmia sp!,{r3,pc}
