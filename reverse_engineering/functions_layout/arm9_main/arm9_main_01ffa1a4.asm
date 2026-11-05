01ffa1a4  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffa1a8  bl 0x01ff9450
01ffa1ac  add r11,r11,r6
01ffa1b0  bl 0x01ff9450
01ffa1b4  add r12,r12,r6
01ffa1b8  bic r6,r11,#0x1
01ffa1bc  bic r7,r12,#0x1
01ffa1c0  ldr r8,[r0,#0x10]
01ffa1c4  add r11,r11,r12, lsl #0x8
01ffa1c8  add r12,r6,r7, lsl #0x7
01ffa1cc  str r11,[r8,#0x0]
01ffa1d0  and r4,r11,#0x3
01ffa1d4  adr r8,0x1ffa168
01ffa1d8  ldr r8,[r8,r4,lsl #0x2]
01ffa1dc  mov pc,r8
01ffa1e0  ldr r4,[sp,#0x4]
01ffa1e4  ldr r5,[r0,#-0x8]
01ffa1e8  add r4,r4,r11
01ffa1ec  ldr r9,[r0,#0x0]
01ffa1f0  ldr r11,[sp,#0x0]
01ffa1f4  add r4,r4,r9
01ffa1f8  add r5,r5,r9
01ffa1fc  ldmia r4,{r6,r7,r8,r9}
01ffa200  add r4,r4,#0x100
01ffa204  subs r11,r11,#0x1
01ffa208  stmia r5,{r6,r7,r8,r9}
01ffa20c  add r5,r5,#0x100
01ffa210  bne 0x01ffa1fc
01ffa214  ldr r4,[sp,#0x8]
01ffa218  ldr r5,[r0,#-0x4]
01ffa21c  add r4,r4,r12
01ffa220  ldr r9,[r0,#0x4]
01ffa224  ldr r11,[sp],#0xc
01ffa228  add r4,r4,r9
01ffa22c  add r5,r5,r9
01ffa230  mov r11,r11, lsr #0x1
01ffa234  ldmia r4,{r6,r7,r8,r9}
01ffa238  add r4,r4,#0x100
01ffa23c  subs r11,r11,#0x1
01ffa240  stmia r5,{r6,r7,r8,r9}
01ffa244  add r5,r5,#0x100
01ffa248  bne 0x01ffa234
01ffa24c  ldmia sp!,{r11,r12,pc}
01ffa250  ldr r4,[sp,#0x4]
01ffa254  ldr r5,[r0,#-0x8]
01ffa258  add r4,r4,r11
01ffa25c  sub r4,r4,#0x1
01ffa260  ldr r9,[r0,#0x0]
01ffa264  ldr r11,[sp,#0x0]
01ffa268  add r4,r4,r9
01ffa26c  add r5,r5,r9
01ffa270  ldmia r4,{r6,r7,r8,r9}
01ffa274  ldrb r10,[r4,#0x10]
01ffa278  mov r6,r6, lsr #0x8
01ffa27c  orr r6,r6,r7, lsl #0x18
01ffa280  mov r7,r7, lsr #0x8
01ffa284  orr r7,r7,r8, lsl #0x18
01ffa288  mov r8,r8, lsr #0x8
01ffa28c  orr r8,r8,r9, lsl #0x18
01ffa290  mov r9,r9, lsr #0x8
01ffa294  orr r9,r9,r10, lsl #0x18
01ffa298  stmia r5,{r6,r7,r8,r9}
01ffa29c  add r4,r4,#0x100
01ffa2a0  add r5,r5,#0x100
01ffa2a4  subs r11,r11,#0x1
01ffa2a8  bne 0x01ffa270
01ffa2ac  ldr r4,[sp,#0x8]
01ffa2b0  ldr r5,[r0,#-0x4]
01ffa2b4  add r4,r4,r12
01ffa2b8  ldr r9,[r0,#0x4]
01ffa2bc  ldr r11,[sp],#0xc
01ffa2c0  add r4,r4,r9
01ffa2c4  add r5,r5,r9
01ffa2c8  mov r11,r11, lsr #0x1
01ffa2cc  ldmia r4,{r6,r7,r8,r9}
01ffa2d0  add r4,r4,#0x100
01ffa2d4  subs r11,r11,#0x1
01ffa2d8  stmia r5,{r6,r7,r8,r9}
01ffa2dc  add r5,r5,#0x100
01ffa2e0  bne 0x01ffa2cc
01ffa2e4  ldmia sp!,{r11,r12,pc}
01ffa2e8  ldr r4,[sp,#0x4]
01ffa2ec  ldr r5,[r0,#-0x8]
01ffa2f0  add r4,r4,r11
01ffa2f4  ldr r9,[r0,#0x0]
01ffa2f8  ldr r11,[sp,#0x0]
01ffa2fc  add r4,r4,r9
01ffa300  add r5,r5,r9
01ffa304  ldrh r6,[r4],#0x2
01ffa308  ldmia r4,{r7,r8,r9}
01ffa30c  ldrh r10,[r4,#0xc]
01ffa310  orr r6,r6,r7, lsl #0x10
01ffa314  mov r7,r7, lsr #0x10
01ffa318  orr r7,r7,r8, lsl #0x10
01ffa31c  mov r8,r8, lsr #0x10
01ffa320  orr r8,r8,r9, lsl #0x10
01ffa324  mov r9,r9, lsr #0x10
01ffa328  orr r9,r9,r10, lsl #0x10
01ffa32c  stmia r5,{r6,r7,r8,r9}
01ffa330  add r4,r4,#0xfe
01ffa334  add r5,r5,#0x100
01ffa338  subs r11,r11,#0x1
01ffa33c  bne 0x01ffa304
01ffa340  ldr r4,[sp,#0x8]
01ffa344  ldr r5,[r0,#-0x4]
01ffa348  add r4,r4,r12
01ffa34c  ldr r9,[r0,#0x4]
01ffa350  ldr r11,[sp],#0xc
01ffa354  add r4,r4,r9
01ffa358  add r5,r5,r9
01ffa35c  mov r11,r11, lsr #0x1
01ffa360  ldrh r6,[r4],#0x2
01ffa364  ldmia r4,{r7,r8,r9}
01ffa368  ldrh r10,[r4,#0xc]
01ffa36c  orr r6,r6,r7, lsl #0x10
01ffa370  mov r7,r7, lsr #0x10
01ffa374  orr r7,r7,r8, lsl #0x10
01ffa378  mov r8,r8, lsr #0x10
01ffa37c  orr r8,r8,r9, lsl #0x10
01ffa380  mov r9,r9, lsr #0x10
01ffa384  orr r9,r9,r10, lsl #0x10
01ffa388  stmia r5,{r6,r7,r8,r9}
01ffa38c  add r4,r4,#0xfe
01ffa390  add r5,r5,#0x100
01ffa394  subs r11,r11,#0x1
01ffa398  bne 0x01ffa360
01ffa39c  ldmia sp!,{r11,r12,pc}
01ffa3a0  ldr r4,[sp,#0x4]
01ffa3a4  ldr r5,[r0,#-0x8]
01ffa3a8  add r4,r4,r11
01ffa3ac  ldr r9,[r0,#0x0]
01ffa3b0  ldr r11,[sp,#0x0]
01ffa3b4  add r4,r4,r9
01ffa3b8  add r5,r5,r9
01ffa3bc  ldrb r6,[r4],#0x1
01ffa3c0  ldmia r4,{r7,r8,r9,r10}
01ffa3c4  orr r6,r6,r7, lsl #0x8
01ffa3c8  mov r7,r7, lsr #0x18
01ffa3cc  orr r7,r7,r8, lsl #0x8
01ffa3d0  mov r8,r8, lsr #0x18
01ffa3d4  orr r8,r8,r9, lsl #0x8
01ffa3d8  mov r9,r9, lsr #0x18
01ffa3dc  orr r9,r9,r10, lsl #0x8
01ffa3e0  stmia r5,{r6,r7,r8,r9}
01ffa3e4  add r4,r4,#0xff
01ffa3e8  add r5,r5,#0x100
01ffa3ec  subs r11,r11,#0x1
01ffa3f0  bne 0x01ffa3bc
01ffa3f4  ldr r4,[sp,#0x8]
01ffa3f8  ldr r5,[r0,#-0x4]
01ffa3fc  add r4,r4,r12
01ffa400  ldr r9,[r0,#0x4]
01ffa404  ldr r11,[sp],#0xc
01ffa408  add r4,r4,r9
01ffa40c  add r5,r5,r9
01ffa410  mov r11,r11, lsr #0x1
01ffa414  ldrh r6,[r4],#0x2
01ffa418  ldmia r4,{r7,r8,r9}
01ffa41c  ldrh r10,[r4,#0xc]
01ffa420  orr r6,r6,r7, lsl #0x10
01ffa424  mov r7,r7, lsr #0x10
01ffa428  orr r7,r7,r8, lsl #0x10
01ffa42c  mov r8,r8, lsr #0x10
01ffa430  orr r8,r8,r9, lsl #0x10
01ffa434  mov r9,r9, lsr #0x10
01ffa438  orr r9,r9,r10, lsl #0x10
01ffa43c  stmia r5,{r6,r7,r8,r9}
01ffa440  add r4,r4,#0xfe
01ffa444  add r5,r5,#0x100
01ffa448  subs r11,r11,#0x1
01ffa44c  bne 0x01ffa414
01ffa450  ldmia sp!,{r11,r12,pc}
