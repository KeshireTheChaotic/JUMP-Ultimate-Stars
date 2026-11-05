027ead18  cmp r0,#0x1
027ead1c  movhi r0,#0x5
027ead20  bxhi lr
027ead24  ldr r1,[0x27ead54]
027ead28  ldr r1,[r1,#0x0]
027ead2c  add r1,r1,#0x300
027ead30  ldrh r2,[r1,#0x3a]
027ead34  bic r2,r2,#0x40
027ead38  mov r0,r0, lsl #0x10
027ead3c  mov r0,r0, lsr #0x10
027ead40  and r0,r0,#0x1
027ead44  orr r0,r2,r0, lsl #0x6
027ead48  strh r0,[r1,#0x3a]
027ead4c  mov r0,#0x0
027ead50  bx lr
