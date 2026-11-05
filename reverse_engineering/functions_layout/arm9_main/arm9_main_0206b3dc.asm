0206b3dc  stmdb sp!,{r4,lr}
0206b3e0  sub sp,sp,#0x240
0206b3e4  mov r4,r0
0206b3e8  ldrh r2,[r4,#0xe]
0206b3ec  ldrb r3,[r4,#0x10]
0206b3f0  ldr r0,[r4,#0x4]
0206b3f4  add r1,sp,#0x40
0206b3f8  bl 0x0206ae7c
0206b3fc  ldrb lr,[r4,#0x16]
0206b400  mov r12,#0x0
0206b404  add r2,sp,#0x40
0206b408  add r0,sp,#0x0
0206b40c  b 0x0206b420
0206b410  mov r3,r12, lsl #0x1
0206b414  ldrh r1,[r2,r3]
0206b418  add r12,r12,#0x1
0206b41c  strh r1,[r0,r3]
0206b420  cmp r12,lr
0206b424  blt 0x0206b410
0206b428  mov r3,#0x0
0206b42c  add r2,sp,#0x40
0206b430  b 0x0206b44c
0206b434  add r0,r3,r1
0206b438  mov r0,r0, lsl #0x1
0206b43c  ldrh r1,[r2,r0]
0206b440  mov r0,r3, lsl #0x1
0206b444  add r3,r3,#0x1
0206b448  strh r1,[r2,r0]
0206b44c  ldrb r1,[r4,#0x16]
0206b450  ldrb r0,[r4,#0x10]
0206b454  sub r0,r0,r1
0206b458  cmp r3,r0
0206b45c  blt 0x0206b434
0206b460  mov r12,#0x0
0206b464  add r3,sp,#0x0
0206b468  add r0,sp,#0x40
0206b46c  b 0x0206b490
0206b470  ldrb r1,[r4,#0x10]
0206b474  mov r2,r12, lsl #0x1
0206b478  ldrh r2,[r3,r2]
0206b47c  sub r1,r1,lr
0206b480  add r1,r12,r1
0206b484  mov r1,r1, lsl #0x1
0206b488  strh r2,[r0,r1]
0206b48c  add r12,r12,#0x1
0206b490  ldrb lr,[r4,#0x16]
0206b494  cmp r12,lr
0206b498  blt 0x0206b470
0206b49c  ldr r0,[r4,#0x4]
0206b4a0  ldrh r2,[r4,#0xe]
0206b4a4  ldrb r3,[r4,#0x10]
0206b4a8  ldr r0,[r0,#0x4]
0206b4ac  add r1,sp,#0x40
0206b4b0  bl 0x02029c68
0206b4b4  add sp,sp,#0x240
0206b4b8  ldmia sp!,{r4,pc}
