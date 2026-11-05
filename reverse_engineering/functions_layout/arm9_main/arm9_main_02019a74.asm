02019a74  stmdb sp!,{r3,r4,lr}
02019a78  sub sp,sp,#0x4
02019a7c  ldr r2,[0x2019aac]
02019a80  mov r4,r0
02019a84  add r0,sp,#0x0
02019a88  bl 0x020199f8
02019a8c  add r0,sp,#0x0
02019a90  ldr r1,[r0,#0x0]
02019a94  mov r0,r1, asr #0xb
02019a98  add r0,r1,r0, lsr #0x14
02019a9c  mov r0,r0, asr #0xc
02019aa0  strh r0,[r4,#0x12]
02019aa4  add sp,sp,#0x4
02019aa8  ldmia sp!,{r3,r4,pc}
