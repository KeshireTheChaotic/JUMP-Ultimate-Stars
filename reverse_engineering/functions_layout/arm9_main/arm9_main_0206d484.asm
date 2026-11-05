0206d484  stmdb sp!,{r3,lr}
0206d488  ldrb r3,[r0,#0x5c]
0206d48c  ldr r2,[0x206d49c]
0206d490  ldr r2,[r2,r3,lsl #0x2]
0206d494  blx r2
0206d498  ldmia sp!,{r3,pc}
