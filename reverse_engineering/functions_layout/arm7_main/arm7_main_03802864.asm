03802864  stmdb sp!,{r4,lr}
03802868  ldr r1,[0x38028a0]
0380286c  add r4,r1,r0, lsl #0x6
03802870  ldrb r0,[r1,r0,lsl #0x6]
03802874  cmp r0,#0x0
03802878  beq 0x03802898
0380287c  add r0,r4,#0x14
03802880  bl 0x037fd998
03802884  ldrb r0,[r4,#0x1]
03802888  add r0,r0,#0x1
0380288c  strb r0,[r4,#0x1]
03802890  mov r0,#0x0
03802894  strb r0,[r4,#0x0]
03802898  ldmia sp!,{r4,lr}
0380289c  bx lr
