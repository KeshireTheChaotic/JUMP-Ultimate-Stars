0203ae44  stmdb sp!,{r4,lr}
0203ae48  mov r4,r0
0203ae4c  bl 0x02031a9c
0203ae50  ldr r1,[0x203ae60]
0203ae54  mov r0,r4
0203ae58  str r1,[r4,#0x0]
0203ae5c  ldmia sp!,{r4,pc}
