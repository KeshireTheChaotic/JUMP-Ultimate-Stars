02083cd8  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02083cdc  mov r7,r0
02083ce0  mov r6,r1
02083ce4  ldr r4,[r7,#0x84]
02083ce8  mov r5,#0x0
02083cec  ldr r1,[0x2083d68]
02083cf0  b 0x02083d04
02083cf4  ldr r0,[r1,r5,lsl #0x2]
02083cf8  tst r3,r0
02083cfc  bne 0x02083d34
02083d00  add r5,r5,#0x1
02083d04  cmp r5,#0xa
02083d08  blt 0x02083cf4
02083d0c  mov r5,#0x0
02083d10  ldr r1,[0x2083d6c]
02083d14  b 0x02083d28
02083d18  ldr r0,[r1,r5,lsl #0x2]
02083d1c  tst r2,r0
02083d20  bne 0x02083d34
02083d24  add r5,r5,#0x1
02083d28  cmp r5,#0xa
02083d2c  blt 0x02083d18
02083d30  mvn r5,#0x0
02083d34  ldr r0,[r6,#0x2c]
02083d38  mov r1,r4
02083d3c  bic r0,r0,#0xff0000
02083d40  orr r2,r0,r5, lsl #0x10
02083d44  add r0,r7,#0x84
02083d48  str r2,[r6,#0x2c]
02083d4c  bl 0x02037c24
02083d50  add r0,r7,#0x24
02083d54  mov r1,r4
02083d58  add r0,r0,r5, lsl #0x3
02083d5c  bl 0x02037b98
02083d60  str r6,[r4,#0x8]
02083d64  ldmia sp!,{r3,r4,r5,r6,r7,pc}
