02159a40  stmdb sp!,{r3,r4,r5,lr}
02159a44  sub sp,sp,#0x8
02159a48  mov r5,r0
02159a4c  ldr r4,[r5,#0x4]
02159a50  ldr r0,[r4,#0x94]
02159a54  cmp r0,#0x0
02159a58  beq 0x02159a60
02159a5c  bl 0x0214ed84
02159a60  ldr r0,[r5,#0x4]
02159a64  ldr r0,[r0,#0x9c]
02159a68  cmp r0,#0x0
02159a6c  beq 0x02159a74
02159a70  bl 0x0214ed84
02159a74  ldrsh r0,[r4,#0xa2]
02159a78  add r1,sp,#0x4
02159a7c  add r2,sp,#0x0
02159a80  mov r0,r0, lsl #0xc
02159a84  str r0,[sp,#0x0]
02159a88  ldrsh r3,[r4,#0xa0]
02159a8c  mov r0,r5
02159a90  mov r3,r3, lsl #0xc
02159a94  str r3,[sp,#0x4]
02159a98  bl 0x0214f418
02159a9c  add sp,sp,#0x8
02159aa0  ldmia sp!,{r3,r4,r5,pc}
