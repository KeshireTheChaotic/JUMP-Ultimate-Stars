027e8c90  stmdb sp!,{r4,lr}
027e8c94  ldr r0,[0x27e8d10]
027e8c98  ldr r4,[r0,#0x0]
027e8c9c  mov r3,#0x0
027e8ca0  strh r3,[r4,#0x10]
027e8ca4  strh r3,[r4,#0x12]
027e8ca8  ldr r2,[0x27e8d14]
027e8cac  mov r1,r3, lsl #0x1
027e8cb0  add r0,r4,r3, lsl #0x1
027e8cb4  strh r2,[r0,#0x8]
027e8cb8  ldrh r0,[r0,#0x8]
027e8cbc  strh r0,[r4,r1]
027e8cc0  add r3,r3,#0x1
027e8cc4  cmp r3,#0x4
027e8cc8  bcc 0x027e8cac
027e8ccc  mov lr,#0x0
027e8cd0  ldr r12,[0x27e8d14]
027e8cd4  mov r2,lr
027e8cd8  ldr r1,[0x27e8d18]
027e8cdc  add r3,r4,lr, lsl #0x3
027e8ce0  strh r12,[r3,#0xbc]
027e8ce4  strh r2,[r3,#0xbe]
027e8ce8  ldr r0,[r1,lr,lsl #0x2]
027e8cec  str r0,[r3,#0xc0]
027e8cf0  add lr,lr,#0x1
027e8cf4  cmp lr,#0x18
027e8cf8  bcc 0x027e8cdc
027e8cfc  mov r0,#0x3
027e8d00  mov r1,#0xc
027e8d04  bl 0x037f85f8
027e8d08  ldmia sp!,{r4,lr}
027e8d0c  bx lr
