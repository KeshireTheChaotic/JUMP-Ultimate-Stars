021b19e0  stmdb sp!,{r4,lr}
021b19e4  ldr r0,[r1,#0x68]
021b19e8  mov r4,r2
021b19ec  bl 0x0200c954
021b19f0  ldr r1,[0x21b1a00]
021b19f4  bl 0x0200c5ac
021b19f8  str r0,[r4,#0x0]
021b19fc  ldmia sp!,{r4,pc}
