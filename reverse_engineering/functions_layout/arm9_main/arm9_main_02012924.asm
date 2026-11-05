02012924  stmdb sp!,{r3,lr}
02012928  mov r0,r1
0201292c  ldr r3,[r0,#0x0]
02012930  ldrb r1,[r2,#0x0]
02012934  ldr r3,[r3,#0xac]
02012938  blx r3
0201293c  ldmia sp!,{r3,pc}
