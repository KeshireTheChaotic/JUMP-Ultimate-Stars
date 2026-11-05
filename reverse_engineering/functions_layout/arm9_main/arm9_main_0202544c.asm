0202544c  stmdb sp!,{r3,lr}
02025450  mov r0,r1
02025454  ldr r3,[r0,#0x0]
02025458  ldrb r1,[r2,#0x0]
0202545c  ldr r3,[r3,#0x10c]
02025460  blx r3
02025464  ldmia sp!,{r3,pc}
