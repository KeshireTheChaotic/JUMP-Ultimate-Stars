021597cc  stmdb sp!,{r4,r5,r6,lr}
021597d0  mov r6,r0
021597d4  mov r5,r1
021597d8  mov r4,#0x0
021597dc  cmp r4,#0x0
021597e0  bne 0x021597f0
021597e4  ldr r0,[r6,#0xc]
021597e8  cmp r0,#0x0
021597ec  bne 0x02159800
021597f0  add r0,r6,r4, lsl #0x2
021597f4  ldr r0,[r0,#0x50]
021597f8  mov r1,r5
021597fc  bl 0x02159810
02159800  add r4,r4,#0x1
02159804  cmp r4,#0x3
02159808  ble 0x021597dc
0215980c  ldmia sp!,{r4,r5,r6,pc}
