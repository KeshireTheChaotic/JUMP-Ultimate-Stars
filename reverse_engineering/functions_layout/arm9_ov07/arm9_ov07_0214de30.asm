0214de30  stmdb sp!,{r4,lr}
0214de34  ldr r4,[r2,#0x0]
0214de38  ldr r2,[r1,#0x0]
0214de3c  ldr r1,[r3,#0x0]
0214de40  rsb lr,r2,r2, lsl #0x5
0214de44  rsb r12,r4,r4, lsl #0x5
0214de48  rsb r4,r1,r1, lsl #0x5
0214de4c  mov r2,lr, asr #0xb
0214de50  mov r3,r12, asr #0xb
0214de54  mov r1,r4, asr #0xb
0214de58  add r2,lr,r2, lsr #0x14
0214de5c  add r3,r12,r3, lsr #0x14
0214de60  add r1,r4,r1, lsr #0x14
0214de64  mov r2,r2, lsl #0x4
0214de68  mov r3,r3, lsl #0x4
0214de6c  mov r1,r1, lsl #0x4
0214de70  mov r12,r2, lsr #0x10
0214de74  mov r2,r3, lsr #0x10
0214de78  mov r3,r1, lsr #0x10
0214de7c  ldr r4,[r0,#0x4]
0214de80  and r1,r12,#0x1f
0214de84  mov r0,r2, lsl #0x1b
0214de88  mov r2,r3, lsl #0x1b
0214de8c  orr r0,r1,r0, lsr #0x16
0214de90  orr r0,r0,r2, lsr #0x11
0214de94  orr r1,r0,#0x8000
0214de98  add r0,r4,#0x800
0214de9c  strh r1,[r0,#0xb8]
0214dea0  mov r0,#0x1
0214dea4  strb r0,[r4,#0x8fc]
0214dea8  ldmia sp!,{r4,pc}
