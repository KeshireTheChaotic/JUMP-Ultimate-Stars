02047ccc  stmdb sp!,{r3,r4,r5,lr}
02047cd0  mov r5,r0
02047cd4  mov r4,#0x0
02047cd8  b 0x02047cf8
02047cdc  ldr r0,[r5,#0x98]
02047ce0  ldr r0,[r0,r4,lsl #0x2]
02047ce4  ldr r0,[r0,#0x18]
02047ce8  cmp r0,#0x0
02047cec  beq 0x02047cf4
02047cf0  bl 0x020472a0
02047cf4  add r4,r4,#0x1
02047cf8  ldr r0,[r5,#0x9c]
02047cfc  cmp r4,r0
02047d00  bcc 0x02047cdc
02047d04  ldmia sp!,{r3,r4,r5,pc}
