02158888  stmdb sp!,{lr}
0215888c  sub sp,sp,#0xc
02158890  ldr r1,[r0,#0x4]
02158894  ldr r0,[r1,#0x90]
02158898  and r0,r0,#0x10
0215889c  cmp r0,#0x10
021588a0  bne 0x021588f8
021588a4  ldr r0,[r1,#0x50]
021588a8  mov r2,#0xac
021588ac  ldr r1,[r0,#0xc]
021588b0  mov r0,r1, asr #0xb
021588b4  add r0,r1,r0, lsr #0x14
021588b8  mov r0,r0, asr #0xc
021588bc  add r1,r0,#0x4
021588c0  add r3,r0,#0xea
021588c4  cmp r1,#0x100
021588c8  movgt r1,#0x100
021588cc  cmp r3,#0x100
021588d0  str r2,[sp,#0x0]
021588d4  movgt r3,#0x100
021588d8  add r0,sp,#0x4
021588dc  mov r2,#0xc
021588e0  bl 0x0214ee3c
021588e4  bl 0x0203b3f4
021588e8  ldr r0,[r0,#0x88]
021588ec  add r2,sp,#0x4
021588f0  mov r1,#0x0
021588f4  bl 0x02152e64
021588f8  add sp,sp,#0xc
021588fc  ldmia sp!,{pc}
