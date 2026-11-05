0204a838  stmdb sp!,{r4,lr}
0204a83c  mov r4,r0
0204a840  bl 0x0204a7f8
0204a844  ldrb r1,[r4,#0x4b]
0204a848  ldrh r3,[r0,#0x0]
0204a84c  ldrb r0,[r4,#0x4a]
0204a850  ldr r2,[0x204a864]
0204a854  rsb r1,r1,#0x10
0204a858  mov r0,r3, asr r0
0204a85c  and r0,r0,r2, asr r1
0204a860  ldmia sp!,{r4,pc}
