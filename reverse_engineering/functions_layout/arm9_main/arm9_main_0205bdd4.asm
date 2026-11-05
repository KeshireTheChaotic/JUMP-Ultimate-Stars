0205bdd4  stmdb sp!,{r4,lr}
0205bdd8  mov r4,r0
0205bddc  ldr r0,[r4,#0x40]
0205bde0  mov r2,#0x1
0205bde4  mov r1,#0x0
0205bde8  mov r2,r2, lsl r0
0205bdec  ldr r0,[r4,#0x44]
0205bdf0  mov r3,r1
0205bdf4  bl 0x02056954
0205bdf8  ldr r0,[r4,#0x24]
0205bdfc  mov r0,r0, lsl #0x1e
0205be00  movs r0,r0, asr #0x1f
0205be04  ldmiane sp!,{r4,pc}
0205be08  add r0,r4,#0x8
0205be0c  blx 0x020614ac
0205be10  add r0,r4,#0x14
0205be14  blx 0x0206149c
0205be18  ldr r0,[r4,#0x24]
0205be1c  orr r0,r0,#0x2
0205be20  str r0,[r4,#0x24]
0205be24  ldmia sp!,{r4,pc}
