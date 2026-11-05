0217aa8c  stmdb sp!,{r3,lr}
0217aa90  ldr r12,[r0,#0x4c]
0217aa94  mov r3,#0x1
0217aa98  tst r12,r3, lsl r2
0217aa9c  movne r0,#0x0
0217aaa0  ldmiane sp!,{r3,pc}
0217aaa4  strb r3,[r0,#0x39]
0217aaa8  mov r3,#0x0
0217aaac  strb r3,[r0,#0x3e]
0217aab0  strb r1,[r0,#0x38]
0217aab4  strb r2,[r0,#0x3a]
0217aab8  ldr r0,[r0,#0x24]
0217aabc  and r1,r2,#0xff
0217aac0  ldr r0,[r0,#0x0]
0217aac4  mov r2,r3
0217aac8  bl 0x02174ebc
0217aacc  mov r0,#0x1
0217aad0  ldmia sp!,{r3,pc}
