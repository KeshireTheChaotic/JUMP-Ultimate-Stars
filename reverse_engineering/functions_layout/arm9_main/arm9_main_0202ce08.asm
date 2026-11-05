0202ce08  stmdb sp!,{r4,lr}
0202ce0c  ldr r3,[r0,#0x0]
0202ce10  mov r4,r2
0202ce14  ldr r3,[r3,#0x1c]
0202ce18  blx r3
0202ce1c  ldrsb r0,[r0,#0x0]
0202ce20  strb r0,[r4,#0x0]
0202ce24  ldmia sp!,{r4,pc}
