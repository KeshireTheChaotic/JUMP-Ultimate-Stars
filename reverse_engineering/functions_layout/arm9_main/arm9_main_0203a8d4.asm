0203a8d4  stmdb sp!,{r4,lr}
0203a8d8  mov r4,r0
0203a8dc  bl 0x0203a808
0203a8e0  add r0,r4,#0x24
0203a8e4  blx 0x0203a880
0203a8e8  ldr r1,[0x203a90c]
0203a8ec  ldr r0,[0x203a910]
0203a8f0  str r1,[r4,#0x0]
0203a8f4  str r0,[r4,#0x24]
0203a8f8  ldrh r1,[r4,#0x8]
0203a8fc  mov r0,r4
0203a900  mov r1,r1, lsl #0x1
0203a904  str r1,[r4,#0x34]
0203a908  ldmia sp!,{r4,pc}
