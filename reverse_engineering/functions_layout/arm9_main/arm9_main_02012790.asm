02012790  stmdb sp!,{r4,lr}
02012794  mov r0,r1
02012798  ldr r1,[r0,#0x0]
0201279c  mov r4,r2
020127a0  ldr r1,[r1,#0x68]
020127a4  blx r1
020127a8  strb r0,[r4,#0x0]
020127ac  ldmia sp!,{r4,pc}
