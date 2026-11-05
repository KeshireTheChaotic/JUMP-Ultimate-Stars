0203a894  stmdb sp!,{r4,lr}
0203a898  mov r4,r0
0203a89c  bl 0x0203a7e0
0203a8a0  add r0,r4,#0x24
0203a8a4  blx 0x0203a880
0203a8a8  ldr r1,[0x203a8cc]
0203a8ac  ldr r0,[0x203a8d0]
0203a8b0  str r1,[r4,#0x0]
0203a8b4  str r0,[r4,#0x24]
0203a8b8  ldrh r1,[r4,#0x8]
0203a8bc  mov r0,r4
0203a8c0  mov r1,r1, lsl #0x1
0203a8c4  str r1,[r4,#0x34]
0203a8c8  ldmia sp!,{r4,pc}
