02025504  stmdb sp!,{r3,lr}
02025508  mov r0,r1
0202550c  ldr r3,[r0,#0x0]
02025510  ldrb r1,[r2,#0x0]
02025514  ldr r3,[r3,#0x11c]
02025518  mov r2,#0x0
0202551c  blx r3
02025520  ldmia sp!,{r3,pc}
