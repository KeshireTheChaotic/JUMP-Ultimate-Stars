0207d2dc  stmdb sp!,{r4,lr}
0207d2e0  ldr r12,[r0,#0x134]
0207d2e4  mov r4,r3
0207d2e8  blx r12
0207d2ec  and r2,r0,#0xff00
0207d2f0  ldr r1,[sp,#0x8]
0207d2f4  strb r0,[r4,#0x0]
0207d2f8  mov r2,r2, asr #0x8
0207d2fc  tst r0,#0xff0000
0207d300  movne r0,#0x1
0207d304  strb r2,[r1,#0x0]
0207d308  moveq r0,#0x0
0207d30c  ldmia sp!,{r4,pc}
