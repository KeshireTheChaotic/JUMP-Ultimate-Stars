027eacbc  cmp r0,#0x1
027eacc0  movhi r0,#0x5
027eacc4  bxhi lr
027eacc8  ldr r1,[0x27ead0c]
027eaccc  ldr r1,[r1,#0x0]
027eacd0  add r2,r1,#0x300
027eacd4  ldrh r1,[r2,#0x3a]
027eacd8  bic r3,r1,#0x80
027eacdc  mov r1,r0, lsl #0x10
027eace0  mov r1,r1, lsr #0x10
027eace4  and r1,r1,#0x1
027eace8  orr r1,r3,r1, lsl #0x7
027eacec  strh r1,[r2,#0x3a]
027eacf0  cmp r0,#0x1
027eacf4  ldreq r0,[0x27ead10]
027eacf8  ldrheq r1,[r0,#0x0]
027eacfc  ldreq r0,[0x27ead14]
027ead00  strheq r1,[r0,#0x0]
027ead04  mov r0,#0x0
027ead08  bx lr
