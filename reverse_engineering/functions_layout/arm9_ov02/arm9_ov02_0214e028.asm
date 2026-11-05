0214e028  stmdb sp!,{r3,lr}
0214e02c  ldrb r0,[r0,#0x54]
0214e030  cmp r0,#0x0
0214e034  beq 0x0214e040
0214e038  bl 0x0207382c
0214e03c  ldmia sp!,{r3,pc}
0214e040  bl 0x02073840
0214e044  ldmia sp!,{r3,pc}
