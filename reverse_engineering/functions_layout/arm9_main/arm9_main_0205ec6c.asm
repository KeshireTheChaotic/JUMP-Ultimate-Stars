0205ec6c  stmdb sp!,{r4,r5,r6,lr}
0205ec70  mov r6,r0
0205ec74  ldr r0,[r6,#0x0]
0205ec78  sub r2,r2,#0x1
0205ec7c  mvn r3,r2
0205ec80  add r2,r2,r0
0205ec84  and r5,r3,r2
0205ec88  ldr r2,[r6,#0x4]
0205ec8c  add r4,r1,r5
0205ec90  cmp r4,r2
0205ec94  movhi r0,#0x0
0205ec98  ldmiahi sp!,{r4,r5,r6,pc}
0205ec9c  ldr r1,[r6,#-0x4]
0205eca0  sub r2,r4,r0
0205eca4  and r1,r1,#0xff
0205eca8  mov r1,r1, lsl #0x10
0205ecac  mov r1,r1, lsr #0x10
0205ecb0  ands r1,r1,#0x1
0205ecb4  beq 0x0205ecc4
0205ecb8  mov r1,r0
0205ecbc  mov r0,#0x0
0205ecc0  bl 0x0205174c
0205ecc4  mov r0,r5
0205ecc8  str r4,[r6,#0x0]
0205eccc  ldmia sp!,{r4,r5,r6,pc}
