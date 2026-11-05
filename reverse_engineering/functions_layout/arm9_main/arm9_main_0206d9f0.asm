0206d9f0  stmdb sp!,{r4,lr}
0206d9f4  ldr r1,[0x206da40]
0206d9f8  mov r4,r0
0206d9fc  ldr r2,[r1,#0x10]
0206da00  cmp r2,r4
0206da04  ldmiaeq sp!,{r4,pc}
0206da08  mvn r0,#0x0
0206da0c  cmp r2,r0
0206da10  beq 0x0206da24
0206da14  ldr r1,[0x206da44]
0206da18  mov r0,#0x0
0206da1c  ldr r1,[r1,r2,lsl #0x2]
0206da20  blx 0x02064968
0206da24  ldr r1,[0x206da44]
0206da28  mov r0,#0x0
0206da2c  ldr r1,[r1,r4,lsl #0x2]
0206da30  blx 0x02064998
0206da34  ldr r0,[0x206da40]
0206da38  str r4,[r0,#0x10]
0206da3c  ldmia sp!,{r4,pc}
