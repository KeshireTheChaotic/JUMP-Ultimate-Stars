027ec4e4  ldr r2,[0x27ec538]
027ec4e8  ldr r3,[r2,#0x0]
027ec4ec  ldr r2,[0x27ec53c]
027ec4f0  add r12,r3,r2
027ec4f4  ldrh r3,[r12,#0x2]
027ec4f8  mov r2,#0x1
027ec4fc  mvn r2,r2, lsl r0
027ec500  and r2,r3,r2
027ec504  orr r0,r2,r1, lsl r0
027ec508  strh r0,[r12,#0x2]
027ec50c  ldrh r1,[r12,#0x2]
027ec510  ldrh r0,[r12,#0x6]
027ec514  mvn r0,r0
027ec518  ands r0,r1,r0
027ec51c  movne r1,#0x8
027ec520  ldrne r0,[0x27ec540]
027ec524  strhne r1,[r0,#0x0]
027ec528  moveq r1,#0x8
027ec52c  ldreq r0,[0x27ec544]
027ec530  strheq r1,[r0,#0x0]
027ec534  bx lr
