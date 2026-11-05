0215fef0  stmdb sp!,{r4,lr}
0215fef4  mov r4,r0
0215fef8  bl 0x02054b44
0215fefc  and r0,r0,#0x3
0215ff00  str r0,[r4,#0x0]
0215ff04  bl 0x02054b44
0215ff08  mov r0,r0, lsr #0x2
0215ff0c  orr r0,r0,r1, lsl #0x1e
0215ff10  and r0,r0,#0x3
0215ff14  str r0,[r4,#0x4]
0215ff18  mov r3,#0x0
0215ff1c  str r3,[r4,#0x8]
0215ff20  ldr r0,[0x215ff38]
0215ff24  add r1,r4,#0x10
0215ff28  mov r2,#0x40
0215ff2c  str r3,[r4,#0xc]
0215ff30  bl 0x02051760
0215ff34  ldmia sp!,{r4,pc}
