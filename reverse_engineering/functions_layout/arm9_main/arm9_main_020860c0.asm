020860c0  stmdb sp!,{r3,r4,r5,lr}
020860c4  ldr r0,[r0,#0x4]
020860c8  mov r5,#0x0
020860cc  ldr r4,[r0,#0x10]
020860d0  b 0x020860e8
020860d4  ldr r1,[r4,#0x8]
020860d8  ldr r0,[r4,#0xc]
020860dc  ldr r1,[r1,r5,lsl #0x2]
020860e0  bl 0x020865fc
020860e4  add r5,r5,#0x1
020860e8  ldrb r0,[r4,#0x10]
020860ec  cmp r5,r0
020860f0  blt 0x020860d4
020860f4  ldmia sp!,{r3,r4,r5,pc}
