02019ae0  ldr r2,[r0,#0x8]
02019ae4  mov r1,r1, lsl #0x1f
02019ae8  bic r2,r2,#0x20000
02019aec  orr r1,r2,r1, lsr #0xe
02019af0  str r1,[r0,#0x8]
02019af4  bx lr
