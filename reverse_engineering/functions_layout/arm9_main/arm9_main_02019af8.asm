02019af8  add r12,r0,#0x1c
02019afc  mov r3,r2, lsl #0x1
02019b00  ldrh r2,[r12,r3]
02019b04  mov r0,r1, lsl #0x10
02019b08  mov r0,r0, lsr #0x10
02019b0c  bic r1,r2,#0x18
02019b10  mov r0,r0, lsl #0x1e
02019b14  orr r0,r1,r0, lsr #0x1b
02019b18  strh r0,[r12,r3]
02019b1c  bx lr
