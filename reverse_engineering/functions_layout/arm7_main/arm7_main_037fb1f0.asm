037fb1f0  stmdb sp!,{r4,r5,r6,lr}
037fb1f4  mov r6,r0
037fb1f8  mov r5,r1
037fb1fc  ldr r0,[0x37fb260]
037fb200  ldr r0,[r0,#0x0]
037fb204  add r0,r0,#0x188
037fb208  add r1,r5,#0x22
037fb20c  bl 0x037f8910
037fb210  cmp r0,#0x0
037fb214  moveq r0,#0x0
037fb218  beq 0x037fb258
037fb21c  add r4,r0,#0x10
037fb220  add r0,r4,#0x8
037fb224  mov r1,r6
037fb228  add r2,r5,#0xc
037fb22c  bl 0x027e94a4
037fb230  sub r0,r5,#0x18
037fb234  strh r0,[r4,#0x6]
037fb238  ldrh r0,[r4,#0xe]
037fb23c  and r1,r0,#0xff
037fb240  ldrh r0,[r4,#0x12]
037fb244  and r0,r0,#0xff
037fb248  mov r0,r0, lsl #0x10
037fb24c  orr r0,r1,r0, lsr #0x8
037fb250  strh r0,[r4,#0xe]
037fb254  mov r0,r4
037fb258  ldmia sp!,{r4,r5,r6,lr}
037fb25c  bx lr
