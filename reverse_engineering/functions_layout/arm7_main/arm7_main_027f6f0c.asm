027f6f0c  stmdb sp!,{r4,r5,r6,lr}
027f6f10  mov r0,r0, lsl #0x8
027f6f14  and r0,r0,#0x7f00
027f6f18  orr r2,r0,#0x8000
027f6f1c  and r0,r1,#0xff
027f6f20  orr r6,r2,r0
027f6f24  mov r5,#0x5
027f6f28  mov r4,#0x0
027f6f2c  mov r0,r5
027f6f30  mov r1,r6
027f6f34  mov r2,r4
027f6f38  bl 0x037fe9ec
027f6f3c  cmp r0,#0x0
027f6f40  blt 0x027f6f2c
027f6f44  ldmia sp!,{r4,r5,r6,lr}
027f6f48  bx lr
