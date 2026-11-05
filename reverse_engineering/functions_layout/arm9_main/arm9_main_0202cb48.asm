0202cb48  stmdb sp!,{r4,lr}
0202cb4c  ldr r3,[r0,#0x0]
0202cb50  mov r4,r2
0202cb54  ldr r3,[r3,#0x1c]
0202cb58  blx r3
0202cb5c  ldr r0,[r0,#0x0]
0202cb60  str r0,[r4,#0x0]
0202cb64  ldmia sp!,{r4,pc}
