027f50c8  stmdb sp!,{r4,r5,r6,lr}
027f50cc  mov r6,r0
027f50d0  ldr r0,[0x27f5244]
027f50d4  ldr r1,[r0,#0x0]
027f50d8  add r5,r1,#0x344
027f50dc  ldr r0,[0x27f5248]
027f50e0  add r4,r1,r0
027f50e4  ldrh r0,[r5,#0x8]
027f50e8  cmp r0,#0x40
027f50ec  movne r0,#0x1
027f50f0  bne 0x027f523c
027f50f4  add r0,r6,#0x1e
027f50f8  add r1,r5,#0x64
027f50fc  bl 0x027e9cfc
027f5100  cmp r0,#0x0
027f5104  beq 0x027f511c
027f5108  add r0,r6,#0x24
027f510c  add r1,r5,#0x82
027f5110  bl 0x027e9cfc
027f5114  cmp r0,#0x0
027f5118  bne 0x027f5124
027f511c  mov r0,#0x1
027f5120  b 0x027f523c
027f5124  mov r1,#0x1
027f5128  ldrh r0,[r5,#0x6a]
027f512c  mov r0,r1, lsl r0
027f5130  mov r0,r0, lsl #0x10
027f5134  mov r1,r0, lsr #0x10
027f5138  ldrh r0,[r6,#0x2e]
027f513c  ands r0,r1,r0
027f5140  moveq r0,#0x0
027f5144  strheq r0,[r4,#0x6]
027f5148  movne r0,#0x2000
027f514c  strhne r0,[r4,#0x6]
027f5150  ldr r0,[0x27f524c]
027f5154  ldrh r1,[r0,#0x0]
027f5158  ands r0,r1,#0x8000
027f515c  beq 0x027f5188
027f5160  ldr r0,[0x27f5250]
027f5164  and r0,r1,r0
027f5168  mov r0,r0, lsl #0x1
027f516c  add r0,r0,#0x4800000
027f5170  add r0,r0,#0x4000
027f5174  ldrh r0,[r0,#0x4]
027f5178  cmp r0,#0x0
027f517c  ldrhne r0,[r4,#0x6]
027f5180  orrne r0,r0,#0x4000
027f5184  strhne r0,[r4,#0x6]
027f5188  ldrh r0,[r5,#0x88]
027f518c  bl 0x027ec3fc
027f5190  ldrh r0,[r6,#0x10]
027f5194  sub r0,r0,#0x1c
027f5198  strh r0,[r6,#0x6]
027f519c  sub r1,r6,#0x10
027f51a0  ldr r0,[0x27f5254]
027f51a4  strh r0,[r1,#0xc]
027f51a8  ldrh r0,[r6,#0x6]
027f51ac  add r0,r0,#0x31
027f51b0  mov r0,r0, lsr #0x1
027f51b4  strh r0,[r1,#0xe]
027f51b8  ldrh r3,[r1,#0x3e]
027f51bc  mov r0,#0x0
027f51c0  b 0x027f51d4
027f51c4  ands r2,r3,#0x1
027f51c8  addne r0,r0,#0x1
027f51cc  mov r2,r3, lsl #0xf
027f51d0  mov r3,r2, lsr #0x10
027f51d4  cmp r3,#0x0
027f51d8  bne 0x027f51c4
027f51dc  ldrh r6,[r1,#0x18]
027f51e0  ldr r2,[0x27f5258]
027f51e4  ldrh r2,[r2,#0x0]
027f51e8  and r5,r2,#0x8000
027f51ec  ldrh r3,[r4,#0x6]
027f51f0  ldr r2,[0x27f524c]
027f51f4  ldrh r2,[r2,#0x0]
027f51f8  and r2,r2,#0x8000
027f51fc  orr r2,r3,r2, asr #0x4
027f5200  orr r2,r2,r5, asr #0x3
027f5204  orr r2,r6,r2
027f5208  strh r2,[r1,#0x18]
027f520c  ldrh r3,[r1,#0x1c]
027f5210  ldrh r2,[r1,#0x3c]
027f5214  add r2,r2,#0xa
027f5218  mul r2,r0,r2
027f521c  add r0,r2,#0xfc
027f5220  add r0,r3,r0, lsr #0x4
027f5224  strh r0,[r1,#0x1a]
027f5228  ldr r0,[0x27f5244]
027f522c  ldr r0,[r0,#0x0]
027f5230  add r0,r0,#0x188
027f5234  bl 0x037f8e64
027f5238  mov r0,#0x0
027f523c  ldmia sp!,{r4,r5,r6,lr}
027f5240  bx lr
