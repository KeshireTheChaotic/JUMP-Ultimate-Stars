02046b08  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02046b0c  ldr r0,[0x2046bc0]
02046b10  ldr r0,[r0,#0xad0]
02046b14  ldr r1,[r0,#0x0]
02046b18  ldr r1,[r1,#0xa0]
02046b1c  blx r1
02046b20  ldr r0,[0x2046bc0]
02046b24  ldr r0,[r0,#0xadc]
02046b28  ldr r1,[r0,#0x0]
02046b2c  ldr r1,[r1,#0xa0]
02046b30  blx r1
02046b34  bl 0x02035fc0
02046b38  mov r6,#0x20
02046b3c  ldr r7,[0x2046bc4]
02046b40  ldr r8,[0x2046bc8]
02046b44  ldr r4,[0x2046bcc]
02046b48  ldr r5,[0x2046bd0]
02046b4c  ldr r9,[0x2046bd4]
02046b50  mov r10,#0x0
02046b54  mov r11,r6
02046b58  ldr r0,[r9,r10,lsl #0x2]
02046b5c  cmp r0,#0x0
02046b60  ldrne r2,[r8,r10,lsl #0x2]
02046b64  ldrne r1,[r2,#0x95c]
02046b68  cmpne r1,#0x0
02046b6c  ldrbne r1,[r2,#0x956]
02046b70  cmpne r1,#0x0
02046b74  beq 0x02046b84
02046b78  mov r1,r7
02046b7c  mov r2,r6
02046b80  bl 0x02045570
02046b84  ldr r0,[r5,r10,lsl #0x2]
02046b88  cmp r0,#0x0
02046b8c  ldrne r2,[r4,r10,lsl #0x2]
02046b90  ldrne r1,[r2,#0x95c]
02046b94  cmpne r1,#0x0
02046b98  ldrbne r1,[r2,#0x956]
02046b9c  cmpne r1,#0x0
02046ba0  beq 0x02046bb0
02046ba4  mov r1,r7
02046ba8  mov r2,r11
02046bac  bl 0x02045570
02046bb0  add r10,r10,#0x1
02046bb4  cmp r10,#0x4
02046bb8  bcc 0x02046b58
02046bbc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
