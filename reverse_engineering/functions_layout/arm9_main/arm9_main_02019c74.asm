02019c74  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02019c78  mov r5,r0
02019c7c  mov r4,r2
02019c80  add r0,r5,r4, lsl #0x2
02019c84  ldr r0,[r0,#0xc]
02019c88  mov r7,r3
02019c8c  cmp r0,#0x0
02019c90  beq 0x02019ca4
02019c94  ldr r0,[r0,#0x8]
02019c98  cmp r1,r0
02019c9c  moveq r0,#0x0
02019ca0  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
02019ca4  mov r0,r1
02019ca8  bl 0x02035e88
02019cac  mov r6,r0
02019cb0  cmp r7,#0x0
02019cb4  beq 0x02019ccc
02019cb8  ldr r2,[r0,#0x0]
02019cbc  mov r1,r7
02019cc0  ldr r2,[r2,#0x5c]
02019cc4  blx r2
02019cc8  mov r6,r0
02019ccc  add r0,r5,r4, lsl #0x2
02019cd0  ldr r0,[r0,#0xc]
02019cd4  ldr r1,[r0,#0x0]
02019cd8  ldr r1,[r1,#0xc]
02019cdc  blx r1
02019ce0  add r0,r5,r4, lsl #0x2
02019ce4  str r6,[r0,#0xc]
02019ce8  ldr r1,[r5,#0x8]
02019cec  add r0,r4,#0x1
02019cf0  mov r1,r1, lsl #0x4
02019cf4  cmp r0,r1, lsr #0x1d
02019cf8  mov r2,r1, lsr #0x1d
02019cfc  ldr r1,[r5,#0x8]
02019d00  movcs r2,r0
02019d04  mov r0,r2, lsl #0x1d
02019d08  bic r1,r1,#0xe000000
02019d0c  orr r0,r1,r0, lsr #0x4
02019d10  str r0,[r5,#0x8]
02019d14  mov r0,#0x1
02019d18  ldmia sp!,{r3,r4,r5,r6,r7,pc}
