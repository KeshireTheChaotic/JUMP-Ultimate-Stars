027f783c  stmdb sp!,{r4,r5,lr}
027f7840  sub sp,sp,#0xc
027f7844  mov r4,r0
027f7848  and r5,r4,#0x1
027f784c  mov r0,r5, lsl #0x10
027f7850  mov r0,r0, lsr #0x10
027f7854  cmp r0,#0x1
027f7858  bne 0x027f7930
027f785c  add r0,sp,#0x0
027f7860  bl 0x027f7554
027f7864  ldrh r1,[sp,#0x0]
027f7868  mov r0,r1, lsl #0x1e
027f786c  mov r2,r0, lsr #0x1f
027f7870  mov r0,r5, lsl #0x10
027f7874  cmp r2,r0, lsr #0x10
027f7878  beq 0x027f7930
027f787c  and r4,r4,#0x1
027f7880  bic r1,r1,#0x2
027f7884  mov r0,r4, lsl #0x10
027f7888  mov r0,r0, lsr #0x10
027f788c  and r0,r0,#0x1
027f7890  orr r0,r1,r0, lsl #0x1
027f7894  strh r0,[sp,#0x0]
027f7898  add r0,sp,#0x0
027f789c  bl 0x027f7528
027f78a0  mov r0,#0x86
027f78a4  mov r1,#0x10
027f78a8  add r2,sp,#0x4
027f78ac  mov r3,#0x3
027f78b0  bl 0x027f717c
027f78b4  mov r0,r4, lsl #0x10
027f78b8  movs r0,r0, lsr #0x10
027f78bc  bne 0x027f78cc
027f78c0  add r0,sp,#0x4
027f78c4  bl 0x027f72f8
027f78c8  b 0x027f78d4
027f78cc  add r0,sp,#0x4
027f78d0  bl 0x027f71e0
027f78d4  mov r0,#0x6
027f78d8  mov r1,#0x10
027f78dc  add r2,sp,#0x4
027f78e0  mov r3,#0x3
027f78e4  bl 0x027f717c
027f78e8  mov r0,#0x86
027f78ec  mov r1,#0x50
027f78f0  add r2,sp,#0x4
027f78f4  mov r3,#0x3
027f78f8  bl 0x027f717c
027f78fc  mov r0,r5, lsl #0x10
027f7900  movs r0,r0, lsr #0x10
027f7904  bne 0x027f7914
027f7908  add r0,sp,#0x4
027f790c  bl 0x027f72f8
027f7910  b 0x027f791c
027f7914  add r0,sp,#0x4
027f7918  bl 0x027f71e0
027f791c  mov r0,#0x6
027f7920  mov r1,#0x50
027f7924  add r2,sp,#0x4
027f7928  mov r3,#0x3
027f792c  bl 0x027f717c
027f7930  add sp,sp,#0xc
027f7934  ldmia sp!,{r4,r5,lr}
027f7938  bx lr
