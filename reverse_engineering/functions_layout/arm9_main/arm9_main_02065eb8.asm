02065eb8  ldr r0,[0x2065f40]
02065ebc  mov r2,#0x4000000
02065ec0  ldr r1,[r2,#0x0]
02065ec4  ldrh r3,[r0,#0x0]
02065ec8  ldr r0,[r2,#0x0]
02065ecc  and r12,r1,#0x7
02065ed0  and r0,r0,#0x38000000
02065ed4  mov r1,r0, lsr #0x1b
02065ed8  and r0,r3,#0x1f00
02065edc  mov r2,r1, lsl #0x10
02065ee0  cmp r12,#0x6
02065ee4  mov r1,r0, lsr #0x8
02065ee8  addls pc,pc,r12, lsl #0x2
02065eec  b 0x02065f38
02065ef0  b 0x02065f0c
02065ef4  b 0x02065f0c
02065ef8  b 0x02065f0c
02065efc  b 0x02065f0c
02065f00  b 0x02065f0c
02065f04  b 0x02065f18
02065f08  b 0x02065f30
02065f0c  add r0,r2,#0x6000000
02065f10  add r0,r0,r1, lsl #0xb
02065f14  bx lr
02065f18  ands r0,r3,#0x80
02065f1c  movne r0,r1, lsl #0xe
02065f20  addne r0,r0,#0x6000000
02065f24  addeq r0,r2,#0x6000000
02065f28  addeq r0,r0,r1, lsl #0xb
02065f2c  bx lr
02065f30  mov r0,#0x6000000
02065f34  bx lr
02065f38  mov r0,#0x0
02065f3c  bx lr
