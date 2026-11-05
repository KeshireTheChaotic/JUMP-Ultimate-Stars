0202dfac  stmdb sp!,{r4,lr}
0202dfb0  ldr r2,[0x202e004]
0202dfb4  ldr r12,[0x202e008]
0202dfb8  ldr r3,[r2,#0x164]
0202dfbc  tst r3,#0x1
0202dfc0  orreq r3,r3,#0x1
0202dfc4  streq r3,[r2,#0x164]
0202dfc8  ldr r2,[0x202e004]
0202dfcc  ldr r3,[r0,#0x0]
0202dfd0  ldr lr,[r2,#0x298]
0202dfd4  ldr r3,[r3,#0x20]
0202dfd8  add lr,lr,#0x1
0202dfdc  and r4,lr,#0x3
0202dfe0  str r4,[r2,#0x298]
0202dfe4  mov r4,lr, lsl #0x1e
0202dfe8  add r2,r12,r4, lsr #0x1b
0202dfec  blx r3
0202dff0  ldr r0,[0x202e004]
0202dff4  ldr r1,[0x202e008]
0202dff8  ldr r0,[r0,#0x298]
0202dffc  add r0,r1,r0, lsl #0x3
0202e000  ldmia sp!,{r4,pc}
