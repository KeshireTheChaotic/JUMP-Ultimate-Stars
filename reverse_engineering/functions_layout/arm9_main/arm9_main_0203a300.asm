0203a300  stmdb sp!,{r4,lr}
0203a304  mov r4,r0
0203a308  mov r0,r1, lsl #0x2
0203a30c  bl 0x0201a228
0203a310  str r0,[r4,#0xc]
0203a314  mov r0,#0x1
0203a318  strb r0,[r4,#0x10]
0203a31c  ldmia sp!,{r4,pc}
