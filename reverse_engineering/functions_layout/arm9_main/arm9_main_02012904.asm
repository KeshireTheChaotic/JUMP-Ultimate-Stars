02012904  stmdb sp!,{r4,lr}
02012908  mov r0,r1
0201290c  ldr r1,[r0,#0x0]
02012910  mov r4,r2
02012914  ldr r1,[r1,#0xa8]
02012918  blx r1
0201291c  strb r0,[r4,#0x0]
02012920  ldmia sp!,{r4,pc}
