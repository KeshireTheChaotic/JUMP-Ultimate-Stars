0202e5f0  stmdb sp!,{r4,lr}
0202e5f4  mov r4,r1
0202e5f8  mov r0,r2
0202e5fc  mov r1,#0x0
0202e600  bl 0x0203837c
0202e604  add r0,r0,r0, lsr #0x1f
0202e608  mov r0,r0, asr #0x1
0202e60c  strh r0,[r4,#0x0]
0202e610  mov r0,#0x0
0202e614  ldmia sp!,{r4,pc}
