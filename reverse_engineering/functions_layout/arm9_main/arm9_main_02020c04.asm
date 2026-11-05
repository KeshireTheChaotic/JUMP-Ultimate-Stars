02020c04  stmdb sp!,{r4,r5,r6,lr}
02020c08  mov r6,#0x0
02020c0c  ldr r5,[0x2020c3c]
02020c10  ldr r4,[0x2020c40]
02020c14  b 0x02020c2c
02020c18  ldr r0,[r5,r6,lsl #0x2]
02020c1c  cmp r0,#0x0
02020c20  beq 0x02020c28
02020c24  bl 0x02020b34
02020c28  add r6,r6,#0x1
02020c2c  ldr r0,[r4,#0x1c4]
02020c30  cmp r6,r0
02020c34  bcc 0x02020c18
02020c38  ldmia sp!,{r4,r5,r6,pc}
