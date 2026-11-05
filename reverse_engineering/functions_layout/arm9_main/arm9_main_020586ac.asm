020586ac  stmdb sp!,{lr}
020586b0  sub sp,sp,#0xc
020586b4  add r0,sp,#0x0
020586b8  bl 0x020554a8
020586bc  mov r2,#0x0
020586c0  add r1,sp,#0x0
020586c4  mov r3,r2
020586c8  ldrb r0,[r1,#0x0]
020586cc  add r2,r2,#0x1
020586d0  cmp r2,#0x6
020586d4  add r0,r3,r0
020586d8  mov r0,r0, lsl #0x10
020586dc  mov r3,r0, lsr #0x10
020586e0  add r1,r1,#0x1
020586e4  blt 0x020586c8
020586e8  ldr r0,[0x2058744]
020586ec  mov r1,#0xd
020586f0  ldr r0,[r0,#0x0]
020586f4  ldr r2,[0x2058748]
020586f8  add r0,r3,r0
020586fc  mov r0,r0, lsl #0x10
02058700  mov r3,r0, lsr #0x10
02058704  mul r0,r3,r1
02058708  mov r0,r0, lsl #0x10
0205870c  mov r3,r0, lsr #0x10
02058710  smull r0,r1,r2,r3
02058714  mov r1,r1, asr #0x2
02058718  mov r0,r3, lsr #0x1f
0205871c  ldr r2,[0x205874c]
02058720  add r1,r0,r1
02058724  smull r0,r1,r2,r1
02058728  sub r1,r3,r0
0205872c  add r0,r1,#0x1e
02058730  mov r0,r0, lsl #0x10
02058734  mov r0,r0, lsr #0x10
02058738  add sp,sp,#0xc
0205873c  ldmia sp!,{lr}
02058740  bx lr
