0202ccf4  stmdb sp!,{r4,lr}
0202ccf8  mov r4,r0
0202ccfc  mov r0,r1
0202cd00  ldr r3,[r0,#0x0]
0202cd04  mov r1,r2
0202cd08  ldr r3,[r3,#0x1c]
0202cd0c  blx r3
0202cd10  ldrsb r0,[r0,#0x0]
0202cd14  mov r0,r0, lsl #0xc
0202cd18  str r0,[r4,#0x0]
0202cd1c  ldmia sp!,{r4,pc}
