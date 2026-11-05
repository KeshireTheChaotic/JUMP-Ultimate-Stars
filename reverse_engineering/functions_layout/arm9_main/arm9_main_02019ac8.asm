02019ac8  ldr r2,[r0,#0x8]
02019acc  mov r1,r1, lsl #0x1f
02019ad0  bic r2,r2,#0x4000
02019ad4  orr r1,r2,r1, lsr #0x11
02019ad8  str r1,[r0,#0x8]
02019adc  bx lr
