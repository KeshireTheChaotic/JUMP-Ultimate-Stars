02174ebc  stmdb sp!,{r4,r5,r6,lr}
02174ec0  mov r4,r2
02174ec4  mov r5,r1
02174ec8  mov r1,r4
02174ecc  mov r6,r0
02174ed0  bl 0x02175144
02174ed4  cmp r5,#0xd
02174ed8  blt 0x02174ef4
02174edc  sub r0,r5,#0xd
02174ee0  cmp r0,#0x1
02174ee4  ldrls r0,[r6,#0x4]
02174ee8  ldrsbls r0,[r0,#0x8]
02174eec  subls r0,r0,#0x3
02174ef0  addls r5,r5,r0, lsl #0x1
02174ef4  mov r0,r6
02174ef8  mov r1,r5
02174efc  mov r2,#0x0
02174f00  bl 0x021751cc
02174f04  cmp r0,#0x0
02174f08  moveq r0,#0x0
02174f0c  addne r1,r6,r4, lsl #0x2
02174f10  strne r0,[r1,#0x14]
02174f14  addne r0,r6,r4
02174f18  strbne r5,[r0,#0xc0]
02174f1c  movne r0,#0x1
02174f20  ldmia sp!,{r4,r5,r6,pc}
