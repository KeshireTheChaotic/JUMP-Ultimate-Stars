02022454  stmdb sp!,{r3,lr}
02022458  ldr r0,[r0,#0xc]
0202245c  ldr r1,[r0,#0x0]
02022460  ldr r1,[r1,#0x54]
02022464  blx r1
02022468  ldmia sp!,{r3,pc}
