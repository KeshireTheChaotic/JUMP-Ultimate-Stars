037faa0c  stmdb sp!,{lr}
037faa10  sub sp,sp,#0x4
037faa14  ldr r0,[0x37faa5c]
037faa18  ldr r0,[r0,#0x0]
037faa1c  add r0,r0,#0x300
037faa20  ldrh r0,[r0,#0xe8]
037faa24  cmp r0,#0x0
037faa28  beq 0x037faa30
037faa2c  bl 0x027f0fb0
037faa30  ldr r0,[0x37faa5c]
037faa34  ldr r0,[r0,#0x0]
037faa38  add r0,r0,#0x300
037faa3c  ldrh r0,[r0,#0x3a]
037faa40  mov r0,r0, lsl #0x19
037faa44  movs r0,r0, lsr #0x1f
037faa48  beq 0x037faa50
037faa4c  bl 0x027ecb60
037faa50  add sp,sp,#0x4
037faa54  ldmia sp!,{lr}
037faa58  bx lr
