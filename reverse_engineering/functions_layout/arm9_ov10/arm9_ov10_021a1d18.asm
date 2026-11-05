021a1d18  stmdb sp!,{r4,r5,r6,lr}
021a1d1c  mov r6,r0
021a1d20  mov r5,r1
021a1d24  mov r4,#0x0
021a1d28  b 0x021a1d30
021a1d2c  add r4,r4,#0x1
021a1d30  mov r0,r4, lsl #0x1
021a1d34  ldrh r0,[r5,r0]
021a1d38  cmp r0,#0x0
021a1d3c  bne 0x021a1d2c
021a1d40  cmp r4,#0xa
021a1d44  movgt r4,#0xa
021a1d48  add r0,r6,#0x1c
021a1d4c  mov r1,#0x0
021a1d50  mov r2,#0x14
021a1d54  bl 0x020517fc
021a1d58  mov r0,r5
021a1d5c  add r1,r6,#0x1c
021a1d60  mov r2,r4, lsl #0x1
021a1d64  bl 0x02051890
021a1d68  ldrb r0,[r6,#0x35]
021a1d6c  orr r0,r0,#0x20
021a1d70  strb r0,[r6,#0x35]
021a1d74  ldmia sp!,{r4,r5,r6,pc}
