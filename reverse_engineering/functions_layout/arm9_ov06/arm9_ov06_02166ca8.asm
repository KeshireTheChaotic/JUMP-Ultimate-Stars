02166ca8  stmdb sp!,{r4,r5,r6,lr}
02166cac  mov r5,#0x0
02166cb0  mov r6,r0
02166cb4  mov r4,r5
02166cb8  b 0x02166cdc
02166cbc  ldr r0,[r6,#0x0]
02166cc0  ldr r0,[r0,r5,lsl #0x2]
02166cc4  cmp r0,#0x0
02166cc8  beq 0x02166cd8
02166ccc  bl 0x02083648
02166cd0  ldr r0,[r6,#0x0]
02166cd4  str r4,[r0,r5,lsl #0x2]
02166cd8  add r5,r5,#0x1
02166cdc  ldrb r0,[r6,#0x4]
02166ce0  cmp r5,r0
02166ce4  blt 0x02166cbc
02166ce8  ldr r0,[r6,#0x0]
02166cec  cmp r0,#0x0
02166cf0  beq 0x02166cf8
02166cf4  bl 0x0201b268
02166cf8  mov r0,r6
02166cfc  bl 0x0201b244
02166d00  ldmia sp!,{r4,r5,r6,pc}
