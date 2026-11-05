02017cb4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02017cb8  mov r4,r1
02017cbc  mov r5,r0
02017cc0  mov r0,r4
02017cc4  ldr r1,[r0,#0x0]
02017cc8  ldr r1,[r1,#0x20]
02017ccc  blx r1
02017cd0  ldr r1,[0x2017e90]
02017cd4  cmp r0,r1
02017cd8  mov r0,r4
02017cdc  ldr r1,[r0,#0x0]
02017ce0  bne 0x02017d78
02017ce4  ldr r1,[r1,#0x60]
02017ce8  blx r1
02017cec  mov r1,r0
02017cf0  ldr r0,[r5,#0x20]
02017cf4  ldr r2,[r0,#0x0]
02017cf8  ldr r2,[r2,#0x14]
02017cfc  blx r2
02017d00  mov r7,#0x0
02017d04  mov r6,r7
02017d08  b 0x02017d68
02017d0c  mov r0,r5
02017d10  ldr r2,[r0,#0x0]
02017d14  mov r1,r7
02017d18  ldr r2,[r2,#0x38]
02017d1c  blx r2
02017d20  mov r8,r0
02017d24  mov r0,r4
02017d28  ldr r2,[r0,#0x0]
02017d2c  mov r1,r7
02017d30  ldr r2,[r2,#0x34]
02017d34  blx r2
02017d38  mov r3,r6
02017d3c  b 0x02017d58
02017d40  ldrb r1,[r0,r3]
02017d44  mov r2,r1, lsl #0x1c
02017d48  mov r1,r1, asr #0x4
02017d4c  orr r1,r1,r2, lsr #0x18
02017d50  strb r1,[r8,r3]
02017d54  add r3,r3,#0x1
02017d58  ldrh r1,[r5,#0x8]
02017d5c  cmp r3,r1, lsr #0x1
02017d60  blt 0x02017d40
02017d64  add r7,r7,#0x1
02017d68  ldrh r0,[r5,#0xa]
02017d6c  cmp r7,r0
02017d70  blt 0x02017d0c
02017d74  ldmia sp!,{r4,r5,r6,r7,r8,pc}
02017d78  ldr r1,[r1,#0x20]
02017d7c  blx r1
02017d80  ldr r1,[0x2017e94]
02017d84  cmp r0,r1
02017d88  bne 0x02017e80
02017d8c  mov r0,r4
02017d90  ldr r1,[r0,#0x0]
02017d94  ldr r1,[r1,#0x60]
02017d98  blx r1
02017d9c  mov r1,r0
02017da0  ldr r0,[r5,#0x20]
02017da4  ldr r2,[r0,#0x0]
02017da8  ldr r2,[r2,#0x14]
02017dac  blx r2
02017db0  mov r6,#0x0
02017db4  b 0x02017e70
02017db8  mov r0,r5
02017dbc  ldr r2,[r0,#0x0]
02017dc0  mov r1,r6
02017dc4  ldr r2,[r2,#0x38]
02017dc8  blx r2
02017dcc  mov r7,r0
02017dd0  mov r0,r4
02017dd4  ldr r2,[r0,#0x0]
02017dd8  mov r1,r6
02017ddc  ldr r2,[r2,#0x34]
02017de0  blx r2
02017de4  mov r2,#0x0
02017de8  b 0x02017e60
02017dec  ldrb r3,[r0,r2]
02017df0  add r1,r7,r2, lsl #0x2
02017df4  mov r8,r3, asr #0x6
02017df8  mov r3,r3, asr #0x7
02017dfc  mov r8,r8, lsl #0x1f
02017e00  and r3,r3,#0x1
02017e04  orr r3,r3,r8, lsr #0x1b
02017e08  strb r3,[r7,r2,lsl #0x2]
02017e0c  ldrb r3,[r0,r2]
02017e10  mov r8,r3, asr #0x4
02017e14  mov r3,r3, asr #0x5
02017e18  mov r8,r8, lsl #0x1f
02017e1c  and r3,r3,#0x1
02017e20  orr r3,r3,r8, lsr #0x1b
02017e24  strb r3,[r1,#0x1]
02017e28  ldrb r3,[r0,r2]
02017e2c  mov r8,r3, asr #0x2
02017e30  mov r3,r3, asr #0x3
02017e34  mov r8,r8, lsl #0x1f
02017e38  and r3,r3,#0x1
02017e3c  orr r3,r3,r8, lsr #0x1b
02017e40  strb r3,[r1,#0x2]
02017e44  ldrb r8,[r0,r2]
02017e48  add r2,r2,#0x1
02017e4c  mov r3,r8, asr #0x1
02017e50  mov r8,r8, lsl #0x1f
02017e54  and r3,r3,#0x1
02017e58  orr r3,r3,r8, lsr #0x1b
02017e5c  strb r3,[r1,#0x3]
02017e60  ldrh r1,[r5,#0x8]
02017e64  cmp r2,r1, lsr #0x3
02017e68  blt 0x02017dec
02017e6c  add r6,r6,#0x1
02017e70  ldrh r0,[r5,#0xa]
02017e74  cmp r6,r0
02017e78  blt 0x02017db8
02017e7c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
02017e80  mov r0,r5
02017e84  mov r1,r4
02017e88  bl 0x0201694c
02017e8c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
