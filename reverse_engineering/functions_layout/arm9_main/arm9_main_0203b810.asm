0203b810  ldr r2,[0x203b834]
0203b814  cmp r1,#0x0
0203b818  ldrh r1,[r2,#0x0]
0203b81c  bic r1,r1,#0x3f00
0203b820  orr r1,r1,r0, lsl #0x8
0203b824  ldr r0,[0x203b834]
0203b828  orrne r1,r1,#0x2000
0203b82c  strh r1,[r0,#0x0]
0203b830  bx lr
