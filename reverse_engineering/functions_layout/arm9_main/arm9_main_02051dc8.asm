02051dc8  stmdb sp!,{r4,lr}
02051dcc  mov r3,#0xc
02051dd0  mul r4,r0,r3
02051dd4  ldr r12,[0x2051e08]
02051dd8  add r0,r0,#0x3
02051ddc  mov r3,#0x1
02051de0  mov r0,r3, lsl r0
02051de4  ldr r3,[0x2051e0c]
02051de8  str r1,[r12,r4]
02051dec  str r2,[r3,r4]
02051df0  bl 0x02051d5c
02051df4  ldr r0,[0x2051e10]
02051df8  mov r1,#0x1
02051dfc  str r1,[r0,r4]
02051e00  ldmia sp!,{r4,lr}
02051e04  bx lr
