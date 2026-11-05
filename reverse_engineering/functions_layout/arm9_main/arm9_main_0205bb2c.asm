0205bb2c  stmdb sp!,{r4,lr}
0205bb30  ldr r1,[r0,#0x24]
0205bb34  mov r1,r1, lsl #0x1e
0205bb38  movs r1,r1, asr #0x1f
0205bb3c  ldmiaeq sp!,{r4,pc}
0205bb40  ldr r2,[r0,#0x40]
0205bb44  mov r3,#0x1
0205bb48  mov r1,#0x0
0205bb4c  mov r2,r3, lsl r2
0205bb50  ldr r0,[r0,#0x44]
0205bb54  mov r3,r1
0205bb58  bl 0x020568e4
0205bb5c  bl 0x02056da4
0205bb60  mov r4,r0
0205bb64  mov r0,#0x1
0205bb68  bl 0x02056e74
0205bb6c  mov r0,r4
0205bb70  bl 0x02056de4
0205bb74  ldmia sp!,{r4,pc}
