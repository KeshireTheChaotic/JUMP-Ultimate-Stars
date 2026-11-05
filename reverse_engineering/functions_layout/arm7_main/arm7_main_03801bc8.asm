03801bc8  stmdb sp!,{r4,r5,lr}
03801bcc  sub sp,sp,#0x4
03801bd0  mov r4,r0
03801bd4  ldr r0,[r4,#0x28]
03801bd8  bl 0x03801c78
03801bdc  mov r5,r0
03801be0  ldr r0,[r4,#0x28]
03801be4  add r0,r0,#0x1
03801be8  str r0,[r4,#0x28]
03801bec  ldr r0,[r4,#0x28]
03801bf0  bl 0x03801c78
03801bf4  ldr r1,[r4,#0x28]
03801bf8  add r1,r1,#0x1
03801bfc  str r1,[r4,#0x28]
03801c00  orr r5,r5,r0, lsl #0x8
03801c04  ldr r0,[r4,#0x28]
03801c08  bl 0x03801c78
03801c0c  ldr r1,[r4,#0x28]
03801c10  add r1,r1,#0x1
03801c14  str r1,[r4,#0x28]
03801c18  orr r0,r5,r0, lsl #0x10
03801c1c  add sp,sp,#0x4
03801c20  ldmia sp!,{r4,r5,lr}
03801c24  bx lr
