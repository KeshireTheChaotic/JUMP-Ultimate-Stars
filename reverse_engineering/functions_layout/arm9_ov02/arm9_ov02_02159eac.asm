02159eac  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02159eb0  mov r4,r0
02159eb4  ldr r6,[r4,#0x348]
02159eb8  mov r7,#0x0
02159ebc  mov r5,#0x1
02159ec0  ldrb r0,[r4,#0x4da]
02159ec4  tst r0,r5, lsl r7
02159ec8  addne r0,r4,r7, lsl #0x2
02159ecc  ldrne r0,[r0,#0x1c0]
02159ed0  cmpne r0,#0x0
02159ed4  beq 0x02159ee0
02159ed8  mov r1,r6
02159edc  bl 0x0214d678
02159ee0  add r7,r7,#0x1
02159ee4  cmp r7,#0x4
02159ee8  blt 0x02159ec0
02159eec  ldrb r0,[r4,#0x4da]
02159ef0  tst r0,#0x10
02159ef4  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
02159ef8  mov r5,#0x0
02159efc  add r0,r4,r5, lsl #0x2
02159f00  ldr r0,[r0,#0x1d0]
02159f04  cmp r0,#0x0
02159f08  beq 0x02159f14
02159f0c  mov r1,r6
02159f10  bl 0x0214d678
02159f14  add r5,r5,#0x1
02159f18  cmp r5,#0xa
02159f1c  blt 0x02159efc
02159f20  ldmia sp!,{r3,r4,r5,r6,r7,pc}
