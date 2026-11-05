0202dde8  stmdb sp!,{r4,lr}
0202ddec  ldr r3,[r0,#0x0]
0202ddf0  mov r4,r2
0202ddf4  ldr r3,[r3,#0x1c]
0202ddf8  blx r3
0202ddfc  ldr r0,[r0,#0x0]
0202de00  str r0,[r4,#0x0]
0202de04  ldmia sp!,{r4,pc}
