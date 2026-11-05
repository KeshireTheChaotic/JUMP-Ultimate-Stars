020251f0  stmdb sp!,{r4,lr}
020251f4  ldr r0,[r1,#0x68]
020251f8  mov r4,r2
020251fc  ldr r1,[r0,#0x0]
02025200  ldr r1,[r1,#0xe4]
02025204  blx r1
02025208  strh r0,[r4,#0x0]
0202520c  ldmia sp!,{r4,pc}
