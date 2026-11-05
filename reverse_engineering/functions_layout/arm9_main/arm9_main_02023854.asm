02023854  stmdb sp!,{r3,r4,r5,lr}
02023858  mov r5,r0
0202385c  ldrb r2,[r5,#0x29]
02023860  movs r4,r1
02023864  moveq r0,#0x1
02023868  movne r0,#0x0
0202386c  mov r1,r0, lsl #0x1f
02023870  bic r2,r2,#0x2
02023874  orr r1,r2,r1, lsr #0x1e
02023878  mov r0,r5
0202387c  strb r1,[r5,#0x29]
02023880  bl 0x02027edc
02023884  ldr r0,[r5,#0x64]
02023888  mov r1,r4
0202388c  bl 0x02014fd8
02023890  ldmia sp!,{r3,r4,r5,pc}
