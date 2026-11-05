027ead58  cmp r0,#0x1
027ead5c  bhi 0x027ead68
027ead60  cmp r1,#0x1
027ead64  bls 0x027ead70
027ead68  mov r0,#0x5
027ead6c  bx lr
027ead70  cmp r0,#0x0
027ead74  beq 0x027ead84
027ead78  cmp r0,#0x1
027ead7c  beq 0x027eadb0
027ead80  b 0x027eadd8
027ead84  ldr r2,[0x27eae2c]
027ead88  ldr r2,[r2,#0x0]
027ead8c  add r2,r2,#0x300
027ead90  ldrh r3,[r2,#0x3a]
027ead94  bic r3,r3,#0x20
027ead98  mov r1,r1, lsl #0x10
027ead9c  mov r1,r1, lsr #0x10
027eada0  and r1,r1,#0x1
027eada4  orr r1,r3,r1, lsl #0x5
027eada8  strh r1,[r2,#0x3a]
027eadac  b 0x027eadd8
027eadb0  ldr r1,[0x27eae2c]
027eadb4  ldr r1,[r1,#0x0]
027eadb8  add r1,r1,#0x300
027eadbc  ldrh r2,[r1,#0x2e]
027eadc0  cmp r2,#0x1
027eadc4  movne r0,#0xb
027eadc8  bxne lr
027eadcc  ldrh r2,[r1,#0x3a]
027eadd0  bic r2,r2,#0x20
027eadd4  strh r2,[r1,#0x3a]
027eadd8  ldr r3,[0x27eae2c]
027eaddc  ldr r1,[r3,#0x0]
027eade0  add r1,r1,#0x300
027eade4  ldrh r2,[r1,#0x3a]
027eade8  bic r2,r2,#0x10
027eadec  mov r0,r0, lsl #0x10
027eadf0  mov r0,r0, lsr #0x10
027eadf4  and r0,r0,#0x1
027eadf8  orr r0,r2,r0, lsl #0x4
027eadfc  strh r0,[r1,#0x3a]
027eae00  ldr r0,[r3,#0x0]
027eae04  add r0,r0,#0x300
027eae08  ldrh r0,[r0,#0x3a]
027eae0c  mov r1,r0, lsl #0x1a
027eae10  mov r1,r1, lsr #0x1f
027eae14  mov r0,r0, lsl #0x1c
027eae18  eor r1,r1,r0, lsr #0x1f
027eae1c  ldr r0,[0x27eae30]
027eae20  strh r1,[r0,#0x0]
027eae24  mov r0,#0x0
027eae28  bx lr
