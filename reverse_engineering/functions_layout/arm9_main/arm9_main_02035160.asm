02035160  stmdb sp!,{r3,lr}
02035164  ldr r2,[r0,#0x4]
02035168  cmp r2,#0x0
0203516c  ldrne r0,[r0,#0x8]
02035170  addne r0,r0,r1, lsl #0x3
02035174  ldmiane sp!,{r3,pc}
02035178  mov r2,#0x0
0203517c  bl 0x02019b54
02035180  ldmia sp!,{r3,pc}
