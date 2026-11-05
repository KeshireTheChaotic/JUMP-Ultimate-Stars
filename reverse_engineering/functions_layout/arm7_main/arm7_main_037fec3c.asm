037fec3c  stmdb sp!,{r4,lr}
037fec40  mov r4,#0x0
037fec44  mov r0,#0x8000
037fec48  bl 0x037fec00
037fec4c  ldr r0,[0x37fec74]
037fec50  ldrh r1,[r0,#0x0]
037fec54  ands r0,r1,#0x80
037fec58  movne r4,#0x8000
037fec5c  and r0,r1,#0xb
037fec60  orr r1,r4,r0, lsl #0xa
037fec64  ldr r0,[0x37fec78]
037fec68  strh r1,[r0,#0x0]
037fec6c  ldmia sp!,{r4,lr}
037fec70  bx lr
