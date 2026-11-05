02024d64  ldrsh r3,[r2,#0x0]
02024d68  ldrsh r2,[r2,#0x2]
02024d6c  ldr r0,[r1,#0x50]
02024d70  mov r1,r3, lsl #0xc
02024d74  str r1,[r0,#0xc]
02024d78  mov r2,r2, lsl #0xc
02024d7c  ldr r12,[0x2024d8c]
02024d80  mov r1,#0x1
02024d84  str r2,[r0,#0x10]
02024d88  bx r12
