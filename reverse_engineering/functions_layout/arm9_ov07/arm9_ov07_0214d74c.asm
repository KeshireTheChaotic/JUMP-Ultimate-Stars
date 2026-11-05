0214d74c  stmdb sp!,{r3,r4,r5,lr}
0214d750  ldr r0,[0x214d7c4]
0214d754  mov r1,#0x0
0214d758  str r1,[r0,#0x8]
0214d75c  blx 0x0208a49c
0214d760  bl 0x02089b54
0214d764  mov r5,r0
0214d768  mov r1,r5, lsl #0x10
0214d76c  ldr r0,[0x214d7c8]
0214d770  mov r1,r1, lsr #0x10
0214d774  bl 0x0214ce34
0214d778  ldr r4,[0x214d7cc]
0214d77c  b 0x0214d794
0214d780  bl 0x0214d4f8
0214d784  cmp r0,#0x7
0214d788  ldmiaeq sp!,{r3,r4,r5,pc}
0214d78c  ldr r0,[r4,#0x0]
0214d790  blx r0
0214d794  bl 0x0214d4f8
0214d798  cmp r0,#0x2
0214d79c  bne 0x0214d780
0214d7a0  ldr r1,[0x214d7d0]
0214d7a4  mov r2,#0x1
0214d7a8  mov r0,#0x2
0214d7ac  str r2,[r1,#0x0]
0214d7b0  blx 0x0208a4c4
0214d7b4  mov r0,r5, lsl #0x10
0214d7b8  mov r0,r0, lsr #0x10
0214d7bc  blx 0x0208a4d0
0214d7c0  ldmia sp!,{r3,r4,r5,pc}
