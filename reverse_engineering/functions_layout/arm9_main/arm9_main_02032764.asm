02032764  stmdb sp!,{r3,r4,r5,lr}
02032768  mov r5,r0
0203276c  mov r4,r1
02032770  ldr r0,[r5,#0x4]
02032774  bic r1,r4,#0xff000000
02032778  bl 0x020250f8
0203277c  ldr r0,[r5,#0x4]
02032780  mov r1,r4, lsr #0x18
02032784  ldr r0,[r0,#0x64]
02032788  strh r1,[r0,#0x4a]
0203278c  ldmia sp!,{r3,r4,r5,pc}
