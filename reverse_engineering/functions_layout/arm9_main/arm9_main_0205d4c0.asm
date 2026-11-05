0205d4c0  stmdb sp!,{r4,r5,r6,lr}
0205d4c4  mov r6,r1
0205d4c8  mov r5,r2
0205d4cc  mov r4,r3
0205d4d0  bl 0x0205c54c
0205d4d4  cmp r0,#0x0
0205d4d8  moveq r0,#0x5
0205d4dc  ldmiaeq sp!,{r4,r5,r6,pc}
0205d4e0  ands r1,r6,#0x4
0205d4e4  beq 0x0205d538
0205d4e8  ldrb r1,[r0,#0x3]
0205d4ec  ands r1,r1,#0x1
0205d4f0  beq 0x0205d510
0205d4f4  ldr r0,[r0,#0x0]
0205d4f8  mov r1,r5
0205d4fc  mov r0,r0, lsl #0x8
0205d500  mov r2,r4
0205d504  mov r0,r0, lsr #0x8
0205d508  bl 0x0205d120
0205d50c  b 0x0205d528
0205d510  ldr r0,[r0,#0x0]
0205d514  mov r1,r5
0205d518  mov r0,r0, lsl #0x8
0205d51c  mov r2,r4
0205d520  mov r0,r0, lsr #0x8
0205d524  bl 0x0205d240
0205d528  cmp r0,#0x0
0205d52c  bne 0x0205d548
0205d530  mov r0,#0x9
0205d534  ldmia sp!,{r4,r5,r6,pc}
0205d538  ldr r0,[r0,#0x0]
0205d53c  mov r0,r0, lsl #0x8
0205d540  mov r0,r0, lsr #0x8
0205d544  bl 0x0205c3bc
0205d548  ldr r1,[sp,#0x10]
0205d54c  cmp r1,#0x0
0205d550  strne r0,[r1,#0x0]
0205d554  mov r0,#0x0
0205d558  ldmia sp!,{r4,r5,r6,pc}
