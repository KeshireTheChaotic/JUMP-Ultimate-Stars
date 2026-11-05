02077c0c  stmdb sp!,{r4,lr}
02077c10  ldr r2,[0x2077cb4]
02077c14  ldr r3,[r1,#0x34]
02077c18  ldr r2,[r2,#0x0]
02077c1c  ldrb r4,[r1,#0x41]
02077c20  ldr r12,[r2,#0x40]
02077c24  mov r2,#0x3c
02077c28  mla r2,r4,r2,r12
02077c2c  ldrsb r3,[r3,#0x8]
02077c30  sub r12,r3,#0x3
02077c34  add r3,r2,r12, lsl #0x2
02077c38  ldrb r3,[r3,#0x11]
02077c3c  add r4,r2,r12, lsl #0x2
02077c40  add r12,r2,r12, lsl #0x1
02077c44  cmp r3,#0x0
02077c48  moveq r3,#0x4
02077c4c  strb r3,[r1,#0x49]
02077c50  ldrb lr,[r4,#0x10]
02077c54  add r3,r0,#0x500
02077c58  mov lr,lr, lsl #0x6
02077c5c  strh lr,[r1,#0x16]
02077c60  ldrsh lr,[r1,#0x16]
02077c64  strh lr,[r1,#0x18]
02077c68  ldrsb lr,[r2,#0x2]
02077c6c  strb lr,[r1,#0x10]
02077c70  ldrsb lr,[r2,#0x1]
02077c74  strb lr,[r1,#0x11]
02077c78  ldrb lr,[r2,#0x0]
02077c7c  strb lr,[r1,#0x13]
02077c80  ldrb lr,[r4,#0x12]
02077c84  strb lr,[r1,#0x14]
02077c88  ldrb lr,[r4,#0x13]
02077c8c  strb lr,[r1,#0x15]
02077c90  ldrh r2,[r2,#0x30]
02077c94  strh r2,[r1,#0x2e]
02077c98  ldrh r2,[r12,#0x32]
02077c9c  strh r2,[r1,#0x30]
02077ca0  ldrsb r2,[r3,#0xe3]
02077ca4  add r1,r2,#0x1
02077ca8  strb r1,[r0,#0x5e3]
02077cac  mov r0,r2
02077cb0  ldmia sp!,{r4,pc}
