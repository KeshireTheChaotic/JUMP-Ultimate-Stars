0205ed1c  stmdb sp!,{lr}
0205ed20  sub sp,sp,#0x4
0205ed24  ldrh r2,[r0,#0xc]
0205ed28  ldrh r12,[r0,#0xe]
0205ed2c  mov lr,#0x0
0205ed30  add r0,r0,r2
0205ed34  cmp r12,#0x0
0205ed38  bls 0x0205ed68
0205ed3c  ldr r2,[r0,#0x0]
0205ed40  cmp r2,r1
0205ed44  addeq sp,sp,#0x4
0205ed48  ldmiaeq sp!,{pc}
0205ed4c  add r2,lr,#0x1
0205ed50  mov r2,r2, lsl #0x10
0205ed54  ldr r3,[r0,#0x4]
0205ed58  mov lr,r2, lsr #0x10
0205ed5c  cmp lr,r12
0205ed60  add r0,r0,r3
0205ed64  bcc 0x0205ed3c
0205ed68  mov r0,#0x0
0205ed6c  add sp,sp,#0x4
0205ed70  ldmia sp!,{pc}
