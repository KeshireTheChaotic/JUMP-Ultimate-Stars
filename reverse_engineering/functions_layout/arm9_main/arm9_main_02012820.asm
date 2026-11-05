02012820  stmdb sp!,{r4,lr}
02012824  mov r0,r1
02012828  ldr r1,[r0,#0x0]
0201282c  mov r4,r2
02012830  ldr r1,[r1,#0x74]
02012834  blx r1
02012838  str r0,[r4,#0x0]
0201283c  ldmia sp!,{r4,pc}
