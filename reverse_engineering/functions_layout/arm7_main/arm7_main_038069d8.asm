038069d8  ldr r1,[0x3806a8c]
038069dc  ldrh r0,[r1,#0x0]
038069e0  ands r0,r0,#0x80
038069e4  bne 0x038069dc
038069e8  ldr r0,[0x3806a90]
038069ec  strh r0,[r1,#0x0]
038069f0  mov r1,#0xec
038069f4  ldr r0,[0x3806a94]
038069f8  strh r1,[r0,#0x0]
038069fc  ldr r1,[0x3806a8c]
03806a00  ldrh r0,[r1,#0x0]
03806a04  ands r0,r0,#0x80
03806a08  bne 0x03806a00
03806a0c  mov r1,#0x0
03806a10  ldr r0,[0x3806a94]
03806a14  strh r1,[r0,#0x0]
03806a18  ldr r2,[0x3806a8c]
03806a1c  ldrh r0,[r2,#0x0]
03806a20  ands r0,r0,#0x80
03806a24  bne 0x03806a1c
03806a28  ldr r1,[0x3806a94]
03806a2c  ldrh r0,[r1,#0x0]
03806a30  and r0,r0,#0xff
03806a34  mov r0,r0, lsl #0x10
03806a38  mov r0,r0, lsr #0x10
03806a3c  mov r0,r0, lsl #0x18
03806a40  mov r3,r0, lsr #0x10
03806a44  ldr r0,[0x3806a98]
03806a48  strh r0,[r2,#0x0]
03806a4c  mov r0,#0x0
03806a50  strh r0,[r1,#0x0]
03806a54  ldr r1,[0x3806a8c]
03806a58  ldrh r0,[r1,#0x0]
03806a5c  ands r0,r0,#0x80
03806a60  bne 0x03806a58
03806a64  ldr r0,[0x3806a94]
03806a68  ldrh r0,[r0,#0x0]
03806a6c  and r0,r0,#0xff
03806a70  mov r0,r0, lsl #0x10
03806a74  orr r1,r3,r0, lsr #0x10
03806a78  ldr r0,[0x3806a9c]
03806a7c  and r0,r1,r0
03806a80  mov r0,r0, lsl #0x9
03806a84  mov r0,r0, lsr #0x10
03806a88  bx lr
