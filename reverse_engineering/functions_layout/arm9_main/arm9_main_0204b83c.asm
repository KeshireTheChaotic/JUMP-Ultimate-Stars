0204b83c  ldr r3,[r0,#0x34]
0204b840  mov r2,#0x1000
0204b844  str r3,[r1,#0x0]
0204b848  ldr r0,[r0,#0x38]
0204b84c  stmib r1,{r0,r2}
0204b850  bx lr
