0205fb64  stmdb sp!,{lr}
0205fb68  sub sp,sp,#0x4
0205fb6c  mov r3,r0
0205fb70  ldrb r2,[r3,#0xc]
0205fb74  ldr r12,[r3,#0x4]
0205fb78  cmp r2,#0x4
0205fb7c  orreq r0,r1,r1, lsl #0x4
0205fb80  orreq r0,r0,r0, lsl #0x8
0205fb84  orreq r1,r0,r0, lsl #0x10
0205fb88  orrne r0,r1,r1, lsl #0x8
0205fb8c  orrne r1,r0,r0, lsl #0x10
0205fb90  ldr r0,[r3,#0x8]
0205fb94  mov r2,r2, lsl #0x6
0205fb98  mul lr,r12,r0
0205fb9c  mov r0,r2, asr #0x2
0205fba0  add r0,r2,r0, lsr #0x1d
0205fba4  mov r2,r0, asr #0x3
0205fba8  mov r0,r1
0205fbac  mul r2,lr,r2
0205fbb0  ldr r1,[r3,#0x0]
0205fbb4  bl 0x02051778
0205fbb8  add sp,sp,#0x4
0205fbbc  ldmia sp!,{pc}
