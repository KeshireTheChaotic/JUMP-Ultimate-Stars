021540c0  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021540c4  mov r5,r0
021540c8  mov r4,#0x0
021540cc  add r6,r5,#0x400
021540d0  mov r7,r4
021540d4  b 0x021540f8
021540d8  add r0,r5,r4, lsl #0x2
021540dc  ldr r0,[r0,#0x278]
021540e0  mov r1,r7
021540e4  ldr r0,[r0,#0x4]
021540e8  ldr r2,[r0,#0x0]
021540ec  ldr r2,[r2,#0xd8]
021540f0  blx r2
021540f4  add r4,r4,#0x1
021540f8  ldrsb r0,[r6,#0xa7]
021540fc  cmp r4,r0
02154100  blt 0x021540d8
02154104  ldmia sp!,{r3,r4,r5,r6,r7,pc}
