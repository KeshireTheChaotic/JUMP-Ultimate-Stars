0202c090  stmdb sp!,{r3,lr}
0202c094  mov r1,#0x0
0202c098  strb r1,[r0,#0x74]
0202c09c  ldr r1,[r0,#0x70]
0202c0a0  cmp r1,#0x0
0202c0a4  ldmiaeq sp!,{r3,pc}
0202c0a8  sub r1,r1,#0x1
0202c0ac  add r0,r0,r1, lsl #0x2
0202c0b0  ldr r0,[r0,#0x50]
0202c0b4  ldr r0,[r0,#0x4]
0202c0b8  ldr r1,[r0,#0x0]
0202c0bc  ldr r1,[r1,#0x4c]
0202c0c0  blx r1
0202c0c4  ldmia sp!,{r3,pc}
