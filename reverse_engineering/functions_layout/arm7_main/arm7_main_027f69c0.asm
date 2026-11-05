027f69c0  stmdb sp!,{r4,lr}
027f69c4  sub sp,sp,#0x8
027f69c8  add r0,sp,#0x0
027f69cc  bl 0x027f7554
027f69d0  ldrh r0,[sp,#0x0]
027f69d4  mov r1,r0, lsl #0x1b
027f69d8  movs r1,r1, lsr #0x1f
027f69dc  bne 0x027f69ec
027f69e0  mov r0,r0, lsl #0x1a
027f69e4  movs r0,r0, lsr #0x1f
027f69e8  beq 0x027f6a44
027f69ec  add r0,sp,#0x2
027f69f0  bl 0x027f74fc
027f69f4  mov r4,#0x0
027f69f8  ldrh r0,[sp,#0x0]
027f69fc  mov r0,r0, lsl #0x1b
027f6a00  movs r0,r0, lsr #0x1f
027f6a04  orrne r4,r4,#0x1
027f6a08  ldrhne r0,[sp,#0x2]
027f6a0c  bicne r0,r0,#0xf
027f6a10  strhne r0,[sp,#0x2]
027f6a14  ldrh r0,[sp,#0x0]
027f6a18  mov r0,r0, lsl #0x1a
027f6a1c  movs r0,r0, lsr #0x1f
027f6a20  orrne r4,r4,#0x2
027f6a24  ldrhne r0,[sp,#0x2]
027f6a28  bicne r0,r0,#0x40
027f6a2c  strhne r0,[sp,#0x2]
027f6a30  add r0,sp,#0x2
027f6a34  bl 0x027f74d0
027f6a38  mov r0,#0x30
027f6a3c  mov r1,r4
027f6a40  bl 0x027f6f0c
027f6a44  add sp,sp,#0x8
027f6a48  ldmia sp!,{r4,lr}
027f6a4c  bx lr
