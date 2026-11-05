0214d348  stmdb sp!,{r4,lr}
0214d34c  mov r4,r0
0214d350  strb r1,[r4,#0x57]
0214d354  ldr r0,[r4,#0x4]
0214d358  ldr r0,[r0,#0x4]
0214d35c  bl 0x02028330
0214d360  ldr r0,[r4,#0x4]
0214d364  ldr r1,[0x214d38c]
0214d368  ldr r0,[r0,#0x4]
0214d36c  bl 0x02028384
0214d370  ldrb r2,[r4,#0x56]
0214d374  ldr r1,[0x214d390]
0214d378  mov r0,r4
0214d37c  ldr r1,[r1,r2,lsl #0x2]
0214d380  blx r1
0214d384  blx 0x021b65bc
0214d388  ldmia sp!,{r4,pc}
