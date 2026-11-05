02160a48  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02160a4c  movs r10,r0
02160a50  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
02160a54  mov r1,#0x0
02160a58  ldr r0,[0x2160b24]
02160a5c  mov r2,r1
02160a60  bl 0x02033410
02160a64  mov r4,r0
02160a68  ldr r1,[r4,#0x1c]
02160a6c  cmp r1,#0x0
02160a70  bne 0x02160a80
02160a74  ldr r1,[r0,#0x0]
02160a78  ldr r1,[r1,#0x10]
02160a7c  blx r1
02160a80  ldr r9,[r4,#0x1c]
02160a84  mov r1,#0x0
02160a88  ldr r0,[r9,#0x4]
02160a8c  ldr r2,[r0,#0x0]
02160a90  ldr r2,[r2,#0x2c]
02160a94  blx r2
02160a98  ldr r4,[0x2160b28]
02160a9c  mov r8,#0x0
02160aa0  strb r8,[r4,#0x4c]
02160aa4  mov r7,r0
02160aa8  ldrsb r6,[r4,#0x4b]
02160aac  mov r5,#0x1
02160ab0  ldr r11,[0x2160b2c]
02160ab4  b 0x02160b08
02160ab8  ldr r0,[0x2160b30]
02160abc  ldr r0,[r0,#0xe5c]
02160ac0  add r0,r11,r0
02160ac4  add r0,r0,#0x3000
02160ac8  ldrb r0,[r0,#0xdcc]
02160acc  tst r0,r5, lsl r8
02160ad0  bne 0x02160b04
02160ad4  add r0,r4,r8
02160ad8  ldrb r1,[r0,#0x4d]
02160adc  ldr r2,[0x2160b34]
02160ae0  mov r0,r10
02160ae4  ldrb r3,[r7,r1,lsl #0x2]
02160ae8  add r1,r7,r1, lsl #0x2
02160aec  ldr r2,[r2,r3,lsl #0x2]
02160af0  blx r2
02160af4  cmp r0,#0x0
02160af8  ldrbne r0,[r4,#0x4c]
02160afc  orrne r0,r0,r5, lsl r8
02160b00  strbne r0,[r4,#0x4c]
02160b04  add r8,r8,#0x1
02160b08  cmp r8,r6
02160b0c  blt 0x02160ab8
02160b10  ldr r0,[r9,#0x4]
02160b14  ldr r1,[r0,#0x0]
02160b18  ldr r1,[r1,#0xc]
02160b1c  blx r1
02160b20  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
