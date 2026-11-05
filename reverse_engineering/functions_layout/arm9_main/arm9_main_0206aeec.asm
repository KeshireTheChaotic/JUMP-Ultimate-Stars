0206aeec  stmdb sp!,{r4,lr}
0206aef0  mov r4,r0
0206aef4  strb r1,[r4,#0xc]
0206aef8  ldr r0,[r4,#0x0]
0206aefc  ldr r2,[0x206af18]
0206af00  ldr r0,[r0,#0x4]
0206af04  ldr r1,[r2,r1,lsl #0x2]
0206af08  bl 0x02028384
0206af0c  mov r0,r4
0206af10  bl 0x0206af1c
0206af14  ldmia sp!,{r4,pc}
