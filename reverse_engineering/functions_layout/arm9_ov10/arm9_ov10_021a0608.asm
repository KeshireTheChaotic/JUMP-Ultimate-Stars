021a0608  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021a060c  sub sp,sp,#0x8
021a0610  mov r7,r0
021a0614  bl 0x0219b8ac
021a0618  mov r6,r0
021a061c  bl 0x0219b8cc
021a0620  mov r5,r0
021a0624  bl 0x0219b8ec
021a0628  mov r4,r0
021a062c  mov r2,r5, lsl #0xc
021a0630  add r1,sp,#0x4
021a0634  mov r0,r7
021a0638  str r2,[sp,#0x4]
021a063c  bl 0x021a0570
021a0640  mov r2,r4, lsl #0xc
021a0644  add r1,sp,#0x0
021a0648  mov r0,r7
021a064c  str r2,[sp,#0x0]
021a0650  bl 0x021a05cc
021a0654  ldr r0,[r7,#0x4]
021a0658  str r6,[r0,#0x80]
021a065c  add sp,sp,#0x8
021a0660  ldmia sp!,{r3,r4,r5,r6,r7,pc}
