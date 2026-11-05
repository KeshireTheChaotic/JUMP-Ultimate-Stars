027eae34  cmp r0,#0x1
027eae38  movhi r0,#0x5
027eae3c  bxhi lr
027eae40  ldr r3,[0x27eae94]
027eae44  ldr r1,[r3,#0x0]
027eae48  add r1,r1,#0x300
027eae4c  ldrh r2,[r1,#0x3a]
027eae50  bic r2,r2,#0x8
027eae54  mov r0,r0, lsl #0x10
027eae58  mov r0,r0, lsr #0x10
027eae5c  and r0,r0,#0x1
027eae60  orr r0,r2,r0, lsl #0x3
027eae64  strh r0,[r1,#0x3a]
027eae68  ldr r0,[r3,#0x0]
027eae6c  add r0,r0,#0x300
027eae70  ldrh r0,[r0,#0x3a]
027eae74  mov r1,r0, lsl #0x1a
027eae78  mov r1,r1, lsr #0x1f
027eae7c  mov r0,r0, lsl #0x1c
027eae80  eor r1,r1,r0, lsr #0x1f
027eae84  ldr r0,[0x27eae98]
027eae88  strh r1,[r0,#0x0]
027eae8c  mov r0,#0x0
027eae90  bx lr
