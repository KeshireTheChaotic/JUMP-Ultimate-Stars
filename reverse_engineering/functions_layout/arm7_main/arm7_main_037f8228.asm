037f8228  stmdb sp!,{r4,lr}
037f822c  sub sp,sp,#0x210
037f8230  mov r0,#0x20
037f8234  mov r1,#0x2
037f8238  add r2,sp,#0x4
037f823c  bl 0x027f6584
037f8240  ldr r0,[sp,#0x4]
037f8244  mov r0,r0, lsl #0x3
037f8248  str r0,[sp,#0x4]
037f824c  mov r1,#0x100
037f8250  add r2,sp,#0x10
037f8254  bl 0x027f6584
037f8258  ldr r0,[sp,#0x4]
037f825c  add r0,r0,#0x100
037f8260  mov r1,#0x100
037f8264  add r2,sp,#0x110
037f8268  bl 0x027f6584
037f826c  add r0,sp,#0x10
037f8270  bl 0x037f802c
037f8274  cmp r0,#0x3
037f8278  blt 0x037f8290
037f827c  mvn r0,#0x0
037f8280  ldr r1,[0x37f83a4]
037f8284  mov r2,#0x74
037f8288  bl 0x037fe67c
037f828c  b 0x037f834c
037f8290  cmp r0,#0x0
037f8294  beq 0x037f833c
037f8298  mov r2,r0, lsl #0x8
037f829c  ldr r1,[0x37f83a8]
037f82a0  add r1,sp,r1
037f82a4  ldrb r1,[r1,r0,lsl #0x8]
037f82a8  cmp r1,#0xa
037f82ac  bcs 0x037f82dc
037f82b0  mov r12,#0xa
037f82b4  mov r3,#0x0
037f82b8  add r1,sp,#0x10
037f82bc  add r2,r1,r2
037f82c0  b 0x037f82d0
037f82c4  add r1,r2,r12, lsl #0x1
037f82c8  strh r3,[r1,#-0xfc]
037f82cc  sub r12,r12,#0x1
037f82d0  ldrb r1,[r2,#-0xe6]
037f82d4  cmp r12,r1
037f82d8  bgt 0x037f82c4
037f82dc  mov r2,r0, lsl #0x8
037f82e0  ldr r1,[0x37f83ac]
037f82e4  add r1,sp,r1
037f82e8  ldrb r1,[r1,r0,lsl #0x8]
037f82ec  cmp r1,#0x1a
037f82f0  bcs 0x037f8320
037f82f4  mov r12,#0x1a
037f82f8  mov r3,#0x0
037f82fc  add r1,sp,#0x10
037f8300  add r2,r1,r2
037f8304  b 0x037f8314
037f8308  add r1,r2,r12, lsl #0x1
037f830c  strh r3,[r1,#-0xe6]
037f8310  sub r12,r12,#0x1
037f8314  ldrb r1,[r2,#-0xb0]
037f8318  cmp r12,r1
037f831c  bgt 0x037f8308
037f8320  add r1,sp,#0x10
037f8324  sub r0,r0,#0x1
037f8328  add r0,r1,r0, lsl #0x8
037f832c  ldr r1,[0x37f83a4]
037f8330  mov r2,#0x74
037f8334  bl 0x037fe690
037f8338  b 0x037f834c
037f833c  mov r0,#0x0
037f8340  ldr r1,[0x37f83a4]
037f8344  mov r2,#0x74
037f8348  bl 0x037fe67c
037f834c  mov r0,#0x36
037f8350  mov r1,#0x6
037f8354  add r2,sp,#0x8
037f8358  bl 0x027f6584
037f835c  ldr r0,[0x37f83a4]
037f8360  add r4,r0,#0x74
037f8364  add r0,sp,#0x8
037f8368  mov r1,r4
037f836c  mov r2,#0x6
037f8370  bl 0x037fe788
037f8374  mov r0,#0x3c
037f8378  mov r1,#0x2
037f837c  add r2,sp,#0x0
037f8380  bl 0x027f6584
037f8384  ldrh r0,[sp,#0x0]
037f8388  mov r0,r0, lsl #0xf
037f838c  mov r0,r0, lsr #0x10
037f8390  bl 0x03807f48
037f8394  strh r0,[r4,#0x6]
037f8398  add sp,sp,#0x210
037f839c  ldmia sp!,{r4,lr}
037f83a0  bx lr
