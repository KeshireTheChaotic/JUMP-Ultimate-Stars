027ec4a4  stmdb sp!,{r4,lr}
027ec4a8  mov r4,r0
027ec4ac  bl 0x027ec2bc
027ec4b0  cmp r0,#0x40
027ec4b4  bne 0x027ec4d8
027ec4b8  ldr r0,[0x27ec4e0]
027ec4bc  ldr r0,[r0,#0x0]
027ec4c0  add r0,r0,#0x500
027ec4c4  ldrh r2,[r0,#0x30]
027ec4c8  mov r1,#0x1
027ec4cc  mvn r1,r1, lsl r4
027ec4d0  and r1,r2,r1
027ec4d4  strh r1,[r0,#0x30]
027ec4d8  ldmia sp!,{r4,lr}
027ec4dc  bx lr
