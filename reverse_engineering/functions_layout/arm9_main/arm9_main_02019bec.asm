02019bec  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02019bf0  mov r5,r0
02019bf4  mov r7,r3
02019bf8  mov r0,r1
02019bfc  mov r4,r2
02019c00  bl 0x02035c90
02019c04  mov r6,r0
02019c08  cmp r7,#0x0
02019c0c  beq 0x02019c24
02019c10  ldr r2,[r0,#0x0]
02019c14  mov r1,r7
02019c18  ldr r2,[r2,#0x5c]
02019c1c  blx r2
02019c20  mov r6,r0
02019c24  add r0,r5,r4, lsl #0x2
02019c28  ldr r0,[r0,#0xc]
02019c2c  ldr r1,[r0,#0x0]
02019c30  ldr r1,[r1,#0xc]
02019c34  blx r1
02019c38  add r0,r5,r4, lsl #0x2
02019c3c  str r6,[r0,#0xc]
02019c40  ldr r1,[r5,#0x8]
02019c44  add r0,r4,#0x1
02019c48  mov r1,r1, lsl #0x4
02019c4c  cmp r0,r1, lsr #0x1d
02019c50  mov r2,r1, lsr #0x1d
02019c54  ldr r1,[r5,#0x8]
02019c58  movcs r2,r0
02019c5c  mov r0,r2, lsl #0x1d
02019c60  bic r1,r1,#0xe000000
02019c64  orr r0,r1,r0, lsr #0x4
02019c68  str r0,[r5,#0x8]
02019c6c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
