0215fc78  stmdb sp!,{r3,lr}
0215fc7c  ldr r3,[r0,#0xc]
0215fc80  mov r2,#0x1
0215fc84  tst r3,r2, lsl r1
0215fc88  ldmiaeq sp!,{r3,pc}
0215fc8c  ldr r2,[0x215fc9c]
0215fc90  ldr r2,[r2,r1,lsl #0x2]
0215fc94  blx r2
0215fc98  ldmia sp!,{r3,pc}
