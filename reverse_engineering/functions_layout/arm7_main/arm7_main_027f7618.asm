027f7618  stmdb sp!,{r4,lr}
027f761c  sub sp,sp,#0x8
027f7620  mov r4,r0
027f7624  add r0,sp,#0x0
027f7628  bl 0x027f74fc
027f762c  ldrh r0,[sp,#0x0]
027f7630  mov r0,r0, lsl #0x1c
027f7634  mov r0,r0, lsr #0x1c
027f7638  cmp r0,#0x4
027f763c  movne r0,#0x0
027f7640  bne 0x027f765c
027f7644  mov r0,#0x6
027f7648  mov r1,#0x10
027f764c  mov r2,r4
027f7650  mov r3,#0x3
027f7654  bl 0x027f717c
027f7658  mov r0,#0x1
027f765c  add sp,sp,#0x8
027f7660  ldmia sp!,{r4,lr}
027f7664  bx lr
