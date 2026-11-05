0215308c  stmdb sp!,{r4,lr}
02153090  mov r4,r0
02153094  bl 0x02086d80
02153098  mov r1,#0x1
0215309c  mov r0,r1, lsl r0
021530a0  ldrb r1,[r4,#0xbf]
021530a4  sub r0,r0,#0x1
021530a8  cmp r1,r0
021530ac  ldmiane sp!,{r4,pc}
021530b0  ldr r0,[0x21530d0]
021530b4  ldr r0,[r0,#0x0]
021530b8  blx r0
021530bc  bl 0x02087160
021530c0  mov r0,#0x1
021530c4  strb r0,[r4,#0xbe]
021530c8  bl 0x020876ac
021530cc  ldmia sp!,{r4,pc}
