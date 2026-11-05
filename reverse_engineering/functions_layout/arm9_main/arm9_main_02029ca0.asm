02029ca0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02029ca4  mov r6,#0x0
02029ca8  mov r4,r0
02029cac  ldrh r7,[sp,#0x20]
02029cb0  mov r5,r6
02029cb4  b 0x02029d20
02029cb8  ldr r0,[r1,r6,lsl #0x2]
02029cbc  cmp r7,r0
02029cc0  ldreq r0,[r4,#0x10]
02029cc4  moveq r8,r6, lsl #0x1
02029cc8  addeq r0,r0,r2, lsl #0x1
02029ccc  strheq r5,[r8,r0]
02029cd0  beq 0x02029d1c
02029cd4  mov lr,r6, lsl #0x1
02029cd8  mov r0,lr, lsl #0x1
02029cdc  ldrh r12,[r1,r0]
02029ce0  add r0,r1,lr, lsl #0x1
02029ce4  ldrh r0,[r0,#0x2]
02029ce8  mov r8,r12, lsr #0x8
02029cec  and r8,r8,#0xff
02029cf0  mov r9,r8, asr #0x3
02029cf4  and r12,r12,#0xff
02029cf8  ldr r8,[r4,#0x10]
02029cfc  and r10,r0,#0xff
02029d00  mov r0,r9, lsl #0x5
02029d04  mov r9,r12, asr #0x3
02029d08  orr r0,r0,r10, asr #0x3
02029d0c  orr r0,r0,r9, lsl #0xa
02029d10  orr r9,r0,#0x8000
02029d14  add r0,r8,r2, lsl #0x1
02029d18  strh r9,[lr,r0]
02029d1c  add r6,r6,#0x1
02029d20  cmp r6,r3
02029d24  bcc 0x02029cb8
02029d28  mov r0,r4
02029d2c  bl 0x02029dc4
02029d30  mov r0,#0x1
02029d34  strb r0,[r4,#0x1c]
02029d38  mov r0,#0x0
02029d3c  strb r0,[r4,#0xf]
02029d40  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
