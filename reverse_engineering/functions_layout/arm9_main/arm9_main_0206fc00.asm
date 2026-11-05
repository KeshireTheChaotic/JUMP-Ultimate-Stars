0206fc00  stmdb sp!,{r3,r4,r5,lr}
0206fc04  mov r4,r1
0206fc08  mov r5,r0
0206fc0c  mov r0,r4
0206fc10  bl 0x02166ef8
0206fc14  cmp r0,#0x3
0206fc18  addls pc,pc,r0, lsl #0x2
0206fc1c  b 0x0206fca0
0206fca0  str r4,[r5,#0x4]
0206fca4  ldmia sp!,{r3,r4,r5,pc}
