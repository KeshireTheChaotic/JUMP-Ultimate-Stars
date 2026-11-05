027e6628  ldr r0,[0x27e6670]
027e662c  ldrh r12,[r0,#0x0]
027e6630  ldr r2,[0x27e6674]
027e6634  ldrh r1,[r2,#0x0]
027e6638  ldr r0,[0x27e6678]
027e663c  ldrh r3,[r0,#0x0]
027e6640  ldrh r2,[r2,#0x0]
027e6644  cmp r1,r2
027e6648  ldrhhi r3,[r0,#0x0]
027e664c  orr r0,r2,r3, lsl #0x10
027e6650  mov r1,r0, lsl #0x1
027e6654  mov r0,#0x7f
027e6658  mul r0,r12,r0
027e665c  sub r0,r1,r0
027e6660  mov r1,r0, lsr #0x7
027e6664  ldr r0,[0x27e667c]
027e6668  strh r1,[r0,#0x0]
027e666c  bx lr
