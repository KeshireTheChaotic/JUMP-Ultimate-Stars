02151a5c  stmdb sp!,{r4,lr}
02151a60  ldr r0,[r0,#0x4]
02151a64  ldr r4,[r0,#0x10]
02151a68  ldr r0,[r4,#0x4]
02151a6c  ldr r0,[r0,#0x4]
02151a70  ldr r1,[r0,#0x0]
02151a74  ldr r1,[r1,#0x128]
02151a78  blx r1
02151a7c  cmp r0,#0x0
02151a80  ldr r1,[r4,#0x4]
02151a84  movne r3,#0x1
02151a88  ldr r0,[r1,#0x4]
02151a8c  moveq r3,#0x0
02151a90  ldr r0,[r0,#0x50]
02151a94  ldr r12,[r0,#0x10]
02151a98  ldr r1,[r0,#0xc]
02151a9c  mov r2,r12, asr #0xb
02151aa0  mov r0,r1, asr #0xb
02151aa4  add r1,r1,r0, lsr #0x14
02151aa8  add r2,r12,r2, lsr #0x14
02151aac  mov r0,r4
02151ab0  mov r1,r1, asr #0xc
02151ab4  mov r2,r2, asr #0xc
02151ab8  bl 0x021518c4
02151abc  ldmia sp!,{r4,pc}
