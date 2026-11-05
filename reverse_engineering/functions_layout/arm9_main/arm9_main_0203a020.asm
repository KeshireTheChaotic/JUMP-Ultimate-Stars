0203a020  stmdb sp!,{r4,lr}
0203a024  mul r2,r1,r2
0203a028  mov r4,r0
0203a02c  mov r0,r2, lsr #0x1
0203a030  bl 0x0201a228
0203a034  str r0,[r4,#0xc]
0203a038  mov r0,#0x1
0203a03c  strb r0,[r4,#0x10]
0203a040  ldmia sp!,{r4,pc}
