02020b34  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02020b38  mov r6,r0
02020b3c  ldr r1,[r6,#0x80]
02020b40  str r1,[r6,#0x84]
02020b44  ldr r1,[r0,#0x0]
02020b48  ldr r1,[r1,#0x124]
02020b4c  blx r1
02020b50  mov r5,#0x0
02020b54  str r5,[r6,#0x78]
02020b58  ldr r1,[r6,#0x7c]
02020b5c  ldr r0,[r6,#0x80]
02020b60  mov r7,r5
02020b64  and r0,r1,r0
02020b68  str r0,[r6,#0x7c]
02020b6c  mov r4,#0x1
02020b70  ldr r0,[r6,#0x80]
02020b74  tst r0,r4, lsl r5
02020b78  beq 0x02020bec
02020b7c  add r1,r6,r5, lsl #0x2
02020b80  ldr r0,[r1,#0x88]
02020b84  add r0,r0,#0x1
02020b88  str r0,[r1,#0x88]
02020b8c  ldr r0,[r6,#0x7c]
02020b90  tst r0,r4, lsl r5
02020b94  bne 0x02020bc4
02020b98  ldr r1,[r1,#0x88]
02020b9c  ldr r0,[r6,#0x70]
02020ba0  cmp r1,r0
02020ba4  bls 0x02020bf4
02020ba8  ldr r0,[r6,#0x7c]
02020bac  orr r0,r0,r4, lsl r5
02020bb0  str r0,[r6,#0x7c]
02020bb4  ldr r0,[r6,#0x78]
02020bb8  orr r0,r0,r4, lsl r5
02020bbc  str r0,[r6,#0x78]
02020bc0  b 0x02020bf4
02020bc4  ldr r2,[r1,#0x88]
02020bc8  ldr r0,[r6,#0x70]
02020bcc  ldr r1,[r6,#0x74]
02020bd0  sub r0,r2,r0
02020bd4  bl 0x0200d338
02020bd8  cmp r1,#0x0
02020bdc  ldreq r0,[r6,#0x78]
02020be0  orreq r0,r0,r4, lsl r5
02020be4  streq r0,[r6,#0x78]
02020be8  b 0x02020bf4
02020bec  add r0,r6,r5, lsl #0x2
02020bf0  str r7,[r0,#0x88]
02020bf4  add r5,r5,#0x1
02020bf8  cmp r5,#0x8
02020bfc  bcc 0x02020b70
02020c00  ldmia sp!,{r3,r4,r5,r6,r7,pc}
