021a0500  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021a0504  sub sp,sp,#0x8
021a0508  mov r4,r0
021a050c  ldr r0,[r4,#0x4]
021a0510  ldr r5,[r0,#0x10]
021a0514  mov r0,r5
021a0518  bl 0x0219b93c
021a051c  mov r7,r0
021a0520  mov r0,r5
021a0524  bl 0x0219b96c
021a0528  mov r6,r0
021a052c  mov r0,r5
021a0530  bl 0x0219b99c
021a0534  mov r5,r0
021a0538  mov r2,r6, lsl #0xc
021a053c  add r1,sp,#0x4
021a0540  mov r0,r4
021a0544  str r2,[sp,#0x4]
021a0548  bl 0x021a0570
021a054c  mov r2,r5, lsl #0xc
021a0550  add r1,sp,#0x0
021a0554  mov r0,r4
021a0558  str r2,[sp,#0x0]
021a055c  bl 0x021a05cc
021a0560  ldr r0,[r4,#0x4]
021a0564  str r7,[r0,#0x80]
021a0568  add sp,sp,#0x8
021a056c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
