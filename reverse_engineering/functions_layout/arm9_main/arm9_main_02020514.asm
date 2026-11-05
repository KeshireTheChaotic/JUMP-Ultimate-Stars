02020514  stmdb sp!,{r4,r5,r6,lr}
02020518  ldr r6,[r0,#0x28]
0202051c  mov r4,r1
02020520  mov r0,r6
02020524  ldr r2,[r0,#0x0]
02020528  mov r1,#0x0
0202052c  ldr r2,[r2,#0x2c]
02020530  blx r2
02020534  mov r5,r0
02020538  mov r0,r6
0202053c  ldr r1,[r0,#0x0]
02020540  ldr r1,[r1,#0x28]
02020544  blx r1
02020548  add r2,r5,r0
0202054c  ldrb r0,[r2,#0x7]
02020550  ldrb r1,[r2,#0x6]
02020554  mov r0,r0, lsl #0x2
02020558  add r0,r0,r1, lsl #0x2
0202055c  add r0,r2,r0
02020560  add r0,r0,r4, lsl #0x1
02020564  ldrh r0,[r0,#0xc]
02020568  add r0,r2,r0
0202056c  ldmia sp!,{r4,r5,r6,pc}
