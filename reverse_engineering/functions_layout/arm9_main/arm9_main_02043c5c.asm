02043c5c  ldr r2,[r0,#0x1c]
02043c60  mov r0,r1, lsl #0x1
02043c64  ldr r1,[r2,#0x8]
02043c68  ldrh r0,[r1,r0]
02043c6c  mov r0,r0, asr #0x1
02043c70  add r0,r0,#0x1
02043c74  add r0,r1,r0, lsl #0x1
02043c78  bx lr
