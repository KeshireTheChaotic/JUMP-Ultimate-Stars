02083be0  cmp r2,#0x0
02083be4  beq 0x02083c10
02083be8  ldr r3,[0x2083c3c]
02083bec  sub r12,r2,#0x1
02083bf0  mov r2,#0x18
02083bf4  mla r2,r12,r2,r3
02083bf8  ldr r3,[r0,#0x10]
02083bfc  ldr r0,[r2,r1,lsl #0x2]
02083c00  ldr r1,[r3,#0x44]
02083c04  orr r0,r1,r0
02083c08  str r0,[r3,#0x44]
02083c0c  bx lr
02083c10  ldr r3,[0x2083c3c]
02083c14  ldr r2,[0x2083c40]
02083c18  ldr r12,[r0,#0x10]
02083c1c  ldr r3,[r3,r1,lsl #0x2]
02083c20  ldr r0,[r2,r1,lsl #0x2]
02083c24  ldr r1,[r12,#0x44]
02083c28  orr r0,r3,r0
02083c2c  mvn r0,r0
02083c30  and r0,r1,r0
02083c34  str r0,[r12,#0x44]
02083c38  bx lr
