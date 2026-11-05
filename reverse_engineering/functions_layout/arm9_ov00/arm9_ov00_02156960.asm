02156960  stmdb sp!,{r3,lr}
02156964  ldr r0,[r0,#0x4]
02156968  add r1,r1,#0x60
0215696c  ldr r0,[r0,#0x8]
02156970  mov r2,r1, lsl #0xc
02156974  add r1,sp,#0x0
02156978  str r2,[sp,#0x0]
0215697c  bl 0x0214eed0
02156980  ldmia sp!,{r3,pc}
