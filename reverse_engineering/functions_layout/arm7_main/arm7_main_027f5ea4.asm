027f5ea4  mov r3,#0x0
027f5ea8  mov r2,r3
027f5eac  ldr r0,[0x27f5ec8]
027f5eb0  mov r1,r3, lsl #0x1
027f5eb4  strh r2,[r0,r1]
027f5eb8  add r3,r3,#0x1
027f5ebc  cmp r3,#0x10
027f5ec0  blt 0x027f5eb0
027f5ec4  bx lr
