02042988  stmdb sp!,{r4,r5,r6,lr}
0204298c  ldr r6,[0x2042b40]
02042990  mov r0,#0x1
02042994  str r0,[r6,#0x3a4]
02042998  ldrb r0,[r6,#0xa]
0204299c  cmp r0,#0x0
020429a0  beq 0x02042a5c
020429a4  ldrb r0,[r6,#0x2]
020429a8  cmp r0,#0x0
020429ac  beq 0x02042a48
020429b0  ldr r4,[r6,#0x4b8]
020429b4  b 0x02042a40
020429b8  ldr r0,[r6,#0x3d8]
020429bc  ldr r5,[r4,#0x0]
020429c0  add r1,r4,r0, lsl #0x2
020429c4  eor r0,r0,#0x1
020429c8  ldr r1,[r1,#0xc]
020429cc  add r0,r4,r0, lsl #0x2
020429d0  str r1,[r0,#0xc]
020429d4  ldr r0,[r6,#0x3d8]
020429d8  add r1,r4,r0, lsl #0x2
020429dc  eor r0,r0,#0x1
020429e0  ldr r1,[r1,#0x14]
020429e4  add r0,r4,r0, lsl #0x2
020429e8  str r1,[r0,#0x14]
020429ec  ldr r0,[r6,#0x3d8]
020429f0  add r1,r4,r0, lsl #0x2
020429f4  eor r0,r0,#0x1
020429f8  ldr r1,[r1,#0x1c]
020429fc  add r0,r4,r0, lsl #0x2
02042a00  str r1,[r0,#0x1c]
02042a04  ldr r1,[r6,#0x3d8]
02042a08  ldr r2,[r4,#0x34]
02042a0c  eor r0,r1,#0x1
02042a10  add r3,r4,r1, lsl #0x2
02042a14  add r1,r4,r0, lsl #0x2
02042a18  ldr r0,[r3,#0x24]
02042a1c  ldr r1,[r1,#0x24]
02042a20  bl 0x02051730
02042a24  ldr r0,[r6,#0x3d8]
02042a28  add r1,r4,r0, lsl #0x2
02042a2c  eor r0,r0,#0x1
02042a30  add r0,r4,r0, lsl #0x2
02042a34  ldr r1,[r1,#0x2c]
02042a38  mov r4,r5
02042a3c  str r1,[r0,#0x2c]
02042a40  cmp r4,#0x0
02042a44  bne 0x020429b8
02042a48  ldr r0,[0x2042b40]
02042a4c  ldr r1,[r0,#0x3a0]
02042a50  str r1,[r0,#0x338]
02042a54  ldr r1,[r0,#0x3d8]
02042a58  str r1,[r0,#0x384]
02042a5c  ldr r1,[0x2042b40]
02042a60  mov r0,#0xc
02042a64  ldr r3,[r1,#0x338]
02042a68  ldr r2,[0x2042b44]
02042a6c  mul r0,r3,r0
02042a70  ldr r0,[r2,r0]
02042a74  str r0,[r1,#0x214]
02042a78  ldr r0,[r0,#0x0]
02042a7c  cmp r0,#0x0
02042a80  ldreq r1,[0x2042b48]
02042a84  ldrheq r0,[r1,#0x0]
02042a88  biceq r0,r0,#0x20
02042a8c  strheq r0,[r1,#0x0]
02042a90  beq 0x02042ac0
02042a94  ldr r2,[0x2042b48]
02042a98  ldrh r0,[r2,#0x0]
02042a9c  orr r0,r0,#0x20
02042aa0  strh r0,[r2,#0x0]
02042aa4  ldr r2,[r1,#0x214]
02042aa8  ldr r0,[r1,#0x384]
02042aac  ldr r1,[r2,#0x0]
02042ab0  add r0,r1,r0, lsl #0x2
02042ab4  ldr r0,[r0,#0xc]
02042ab8  sub r0,r0,#0x1
02042abc  blx 0x02064f20
02042ac0  ldr r0,[0x2042b40]
02042ac4  ldrb r0,[r0,#0x1f]
02042ac8  cmp r0,#0x0
02042acc  bne 0x02042af8
02042ad0  ldr r5,[0x2042b4c]
02042ad4  ldr r4,[0x2042b50]
02042ad8  mov r6,#0x0
02042adc  ldr r0,[r5,r6,lsl #0x2]
02042ae0  bl 0x0203d36c
02042ae4  ldr r0,[r4,r6,lsl #0x2]
02042ae8  bl 0x0203d36c
02042aec  add r6,r6,#0x1
02042af0  cmp r6,#0x4
02042af4  bcc 0x02042adc
02042af8  mov r5,#0x0
02042afc  ldr r4,[0x2042b40]
02042b00  b 0x02042b1c
02042b04  ldr r1,[r4,#0x824]
02042b08  add r0,r1,r5, lsl #0x3
02042b0c  ldr r0,[r0,#0x4]
02042b10  ldr r1,[r1,r5,lsl #0x3]
02042b14  blx r1
02042b18  add r5,r5,#0x1
02042b1c  ldr r0,[r4,#0x828]
02042b20  cmp r5,r0
02042b24  bcc 0x02042b04
02042b28  ldr r0,[0x2042b54]
02042b2c  add r0,r0,#0x3000
02042b30  ldr r1,[r0,#0xff8]
02042b34  orr r1,r1,#0x1
02042b38  str r1,[r0,#0xff8]
02042b3c  ldmia sp!,{r4,r5,r6,pc}
