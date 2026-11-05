02049f48  ldr r0,[0x2049f6c]
02049f4c  ldr r12,[0x2049f70]
02049f50  ldrh r0,[r0,#0x0]
02049f54  and r0,r0,#0x8000
02049f58  mov r0,r0, asr #0xf
02049f5c  cmp r0,#0x1
02049f60  moveq r0,#0x1
02049f64  movne r0,#0x0
02049f68  bx r12
