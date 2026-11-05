0214e1fc  stmdb sp!,{r4,lr}
0214e200  mov r4,r0
0214e204  mov r0,#0x3
0214e208  mov r1,#0x1
0214e20c  bl 0x02073ebc
0214e210  mov r0,#0x1
0214e214  strb r0,[r4,#0x54]
0214e218  ldmia sp!,{r4,pc}
