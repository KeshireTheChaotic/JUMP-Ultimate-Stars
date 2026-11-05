02156b74  stmdb sp!,{r0,r1,r2,r3}
02156b78  stmdb sp!,{r3,r4,r5,lr}
02156b7c  sub sp,sp,#0x10
02156b80  mov r4,r0
02156b84  ldr r0,[r4,#0xc]
02156b88  ldrsh r1,[sp,#0x26]
02156b8c  cmp r0,#0x0
02156b90  ldrsh r5,[sp,#0x2a]
02156b94  beq 0x02156bbc
02156b98  ldrsh r0,[sp,#0x24]
02156b9c  mov r1,r1, lsl #0xc
02156ba0  str r1,[sp,#0x8]
02156ba4  mov r0,r0, lsl #0xc
02156ba8  str r0,[sp,#0xc]
02156bac  ldr r0,[r4,#0xc]
02156bb0  add r1,sp,#0xc
02156bb4  add r2,sp,#0x8
02156bb8  bl 0x02155884
02156bbc  ldrsh r0,[sp,#0x28]
02156bc0  mov r1,r5, lsl #0xc
02156bc4  str r1,[sp,#0x0]
02156bc8  mov r0,r0, lsl #0xc
02156bcc  str r0,[sp,#0x4]
02156bd0  ldr r0,[r4,#0x8]
02156bd4  add r1,sp,#0x4
02156bd8  add r2,sp,#0x0
02156bdc  bl 0x02155884
02156be0  add sp,sp,#0x10
02156be4  ldmia sp!,{r3,r4,r5,lr}
02156be8  add sp,sp,#0x10
02156bec  bx lr
