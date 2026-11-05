02017c40  ldr r3,[r0,#0xc]
02017c44  ldrh r0,[r0,#0x8]
02017c48  tst r1,#0x1
02017c4c  mulne r0,r2,r0
02017c50  movne r0,r0, lsr #0x1
02017c54  addne r0,r0,r1, lsr #0x1
02017c58  ldrbne r0,[r3,r0]
02017c5c  movne r0,r0, asr #0x4
02017c60  bxne lr
02017c64  mul r0,r2,r0
02017c68  mov r0,r0, lsr #0x1
02017c6c  add r0,r0,r1, lsr #0x1
02017c70  ldrb r0,[r3,r0]
02017c74  and r0,r0,#0xf
02017c78  bx lr
