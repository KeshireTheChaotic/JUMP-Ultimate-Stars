03801ef0  stmdb sp!,{r4,r5,r6,r7,lr}
03801ef4  sub sp,sp,#0x4
03801ef8  mov r6,r1
03801efc  ldr r3,[0x3801f64]
03801f00  mov r1,#0x24
03801f04  mla r5,r0,r1,r3
03801f08  mov r4,#0x0
03801f0c  mov r0,r2, lsl #0x10
03801f10  mov r7,r0, lsr #0x10
03801f14  b 0x03801f48
03801f18  ands r0,r6,#0x1
03801f1c  beq 0x03801f40
03801f20  mov r0,r5
03801f24  mov r1,r4
03801f28  bl 0x03801770
03801f2c  cmp r0,#0x0
03801f30  strhne r7,[r0,#0x1e]
03801f34  ldrbne r1,[r0,#0x0]
03801f38  orrne r1,r1,#0x80
03801f3c  strbne r1,[r0,#0x0]
03801f40  add r4,r4,#0x1
03801f44  mov r6,r6, lsr #0x1
03801f48  cmp r4,#0x10
03801f4c  bge 0x03801f58
03801f50  cmp r6,#0x0
03801f54  bne 0x03801f18
03801f58  add sp,sp,#0x4
03801f5c  ldmia sp!,{r4,r5,r6,r7,lr}
03801f60  bx lr
