0204a868  stmdb sp!,{r4,lr}
0204a86c  mov r4,r0
0204a870  bl 0x0204a7f8
0204a874  ldrb r1,[r4,#0x49]
0204a878  ldrh r3,[r0,#0x0]
0204a87c  ldrb r0,[r4,#0x48]
0204a880  ldr r2,[0x204a894]
0204a884  rsb r1,r1,#0x10
0204a888  mov r0,r3, asr r0
0204a88c  and r0,r0,r2, asr r1
0204a890  ldmia sp!,{r4,pc}
