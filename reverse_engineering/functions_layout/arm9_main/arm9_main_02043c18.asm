02043c18  stmdb sp!,{r3,r4,r5,lr}
02043c1c  mov r5,r0
02043c20  ldr r0,[r5,#0x1c]
02043c24  mov r4,r1
02043c28  ldr r1,[r0,#0x0]
02043c2c  ldr r1,[r1,#0x14]
02043c30  blx r1
02043c34  cmp r0,#0x0
02043c38  movne r0,#0x0
02043c3c  ldmiane sp!,{r3,r4,r5,pc}
02043c40  ldr r1,[r5,#0x1c]
02043c44  mov r0,r4, lsl #0x1
02043c48  ldr r1,[r1,#0x8]
02043c4c  ldrh r0,[r1,r0]
02043c50  bic r0,r0,#0x1
02043c54  ldrh r0,[r1,r0]
02043c58  ldmia sp!,{r3,r4,r5,pc}
