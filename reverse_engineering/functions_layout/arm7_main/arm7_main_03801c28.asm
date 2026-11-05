03801c28  stmdb sp!,{r4,r5,lr}
03801c2c  sub sp,sp,#0x4
03801c30  mov r5,r0
03801c34  ldr r0,[r5,#0x28]
03801c38  bl 0x03801c78
03801c3c  mov r4,r0
03801c40  ldr r0,[r5,#0x28]
03801c44  add r0,r0,#0x1
03801c48  str r0,[r5,#0x28]
03801c4c  ldr r0,[r5,#0x28]
03801c50  bl 0x03801c78
03801c54  ldr r1,[r5,#0x28]
03801c58  add r1,r1,#0x1
03801c5c  str r1,[r5,#0x28]
03801c60  orr r0,r4,r0, lsl #0x8
03801c64  mov r0,r0, lsl #0x10
03801c68  mov r0,r0, lsr #0x10
03801c6c  add sp,sp,#0x4
03801c70  ldmia sp!,{r4,r5,lr}
03801c74  bx lr
