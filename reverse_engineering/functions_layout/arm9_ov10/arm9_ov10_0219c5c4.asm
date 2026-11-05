0219c5c4  stmdb sp!,{r4,r5,r6,lr}
0219c5c8  ldr r4,[0x219c5fc]
0219c5cc  mov r6,#0x0
0219c5d0  mov r5,#0x200
0219c5d4  ldr r0,[r4,#0x0]
0219c5d8  mov r2,r5
0219c5dc  add r1,r0,#0xdc
0219c5e0  and r0,r6,#0xff
0219c5e4  add r1,r1,r6, lsl #0x9
0219c5e8  blx 0x0217ecb8
0219c5ec  add r6,r6,#0x1
0219c5f0  cmp r6,#0x4
0219c5f4  blt 0x0219c5d4
0219c5f8  ldmia sp!,{r4,r5,r6,pc}
