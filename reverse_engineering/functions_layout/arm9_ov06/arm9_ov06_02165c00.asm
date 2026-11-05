02165c00  stmdb sp!,{r4,lr}
02165c04  mov r4,r1
02165c08  bl 0x02083648
02165c0c  ldr r2,[r4,#0xc]
02165c10  mov r1,#0x1
02165c14  ldrb r0,[r2,#0x14d]
02165c18  sub r0,r0,#0x1
02165c1c  strb r0,[r2,#0x14d]
02165c20  ldrb r0,[r4,#0x23]
02165c24  ldr r2,[r4,#0xc]
02165c28  mvn r0,r1, lsl r0
02165c2c  ldr r1,[r2,#0x148]
02165c30  and r0,r1,r0
02165c34  str r0,[r2,#0x148]
02165c38  ldmia sp!,{r4,pc}
