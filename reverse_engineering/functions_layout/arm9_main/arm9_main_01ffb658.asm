01ffb658  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffb65c  bl 0x01ff9450
01ffb660  add r11,r11,r6
01ffb664  bl 0x01ff9450
01ffb668  add r12,r12,r6
01ffb66c  bic r6,r11,#0x1
01ffb670  bic r7,r12,#0x1
01ffb674  ldr r8,[r0,#0x10]
01ffb678  add r11,r11,r12, lsl #0x8
01ffb67c  add r12,r6,r7, lsl #0x7
01ffb680  str r11,[r8,#0x0]
01ffb684  and r4,r11,#0x3
01ffb688  adr r8,0x1ffb61c
01ffb68c  ldr r8,[r8,r4,lsl #0x2]
01ffb690  mov pc,r8
01ffb694  ldr r4,[sp,#0x4]
01ffb698  ldr r5,[r0,#-0x8]
01ffb69c  add r4,r4,r11
01ffb6a0  ldr r9,[r0,#0x0]
01ffb6a4  ldr r11,[sp,#0x0]
01ffb6a8  add r4,r4,r9
01ffb6ac  add r5,r5,r9
01ffb6b0  ldmia r4,{r6,r7}
01ffb6b4  add r4,r4,#0x100
01ffb6b8  subs r11,r11,#0x1
01ffb6bc  stmia r5,{r6,r7}
01ffb6c0  add r5,r5,#0x100
01ffb6c4  bne 0x01ffb6b0
01ffb6c8  ldr r4,[sp,#0x8]
01ffb6cc  ldr r5,[r0,#-0x4]
01ffb6d0  add r4,r4,r12
01ffb6d4  ldr r9,[r0,#0x4]
01ffb6d8  ldr r11,[sp],#0xc
01ffb6dc  add r4,r4,r9
01ffb6e0  add r5,r5,r9
01ffb6e4  mov r11,r11, lsr #0x1
01ffb6e8  ldmia r4,{r6,r7}
01ffb6ec  add r4,r4,#0x100
01ffb6f0  subs r11,r11,#0x1
01ffb6f4  stmia r5,{r6,r7}
01ffb6f8  add r5,r5,#0x100
01ffb6fc  bne 0x01ffb6e8
01ffb700  ldmia sp!,{r11,r12,pc}
01ffb704  ldr r4,[sp,#0x4]
01ffb708  ldr r5,[r0,#-0x8]
01ffb70c  add r4,r4,r11
01ffb710  sub r4,r4,#0x1
01ffb714  ldr r9,[r0,#0x0]
01ffb718  ldr r11,[sp,#0x0]
01ffb71c  add r4,r4,r9
01ffb720  add r5,r5,r9
01ffb724  ldmia r4,{r6,r7}
01ffb728  ldrb r8,[r4,#0x8]
01ffb72c  add r4,r4,#0x100
01ffb730  mov r6,r6, lsr #0x8
01ffb734  orr r6,r6,r7, lsl #0x18
01ffb738  mov r7,r7, lsr #0x8
01ffb73c  orr r7,r7,r8, lsl #0x18
01ffb740  stmia r5,{r6,r7}
01ffb744  add r5,r5,#0x100
01ffb748  subs r11,r11,#0x1
01ffb74c  bne 0x01ffb724
01ffb750  ldr r4,[sp,#0x8]
01ffb754  ldr r5,[r0,#-0x4]
01ffb758  add r4,r4,r12
01ffb75c  ldr r9,[r0,#0x4]
01ffb760  ldr r11,[sp],#0xc
01ffb764  add r4,r4,r9
01ffb768  add r5,r5,r9
01ffb76c  mov r11,r11, lsr #0x1
01ffb770  ldmia r4,{r6,r7}
01ffb774  add r4,r4,#0x100
01ffb778  subs r11,r11,#0x1
01ffb77c  stmia r5,{r6,r7}
01ffb780  add r5,r5,#0x100
01ffb784  bne 0x01ffb770
01ffb788  ldmia sp!,{r11,r12,pc}
01ffb78c  ldr r4,[sp,#0x4]
01ffb790  ldr r5,[r0,#-0x8]
01ffb794  add r4,r4,r11
01ffb798  ldr r9,[r0,#0x0]
01ffb79c  ldr r11,[sp,#0x0]
01ffb7a0  add r4,r4,r9
01ffb7a4  add r5,r5,r9
01ffb7a8  ldrh r6,[r4],#0x2
01ffb7ac  ldrh r8,[r4,#0x4]
01ffb7b0  ldr r7,[r4],#0xfe
01ffb7b4  subs r11,r11,#0x1
01ffb7b8  orr r6,r6,r7, lsl #0x10
01ffb7bc  mov r7,r7, lsr #0x10
01ffb7c0  orr r7,r7,r8, lsl #0x10
01ffb7c4  stmia r5,{r6,r7}
01ffb7c8  add r5,r5,#0x100
01ffb7cc  bne 0x01ffb7a8
01ffb7d0  ldr r4,[sp,#0x8]
01ffb7d4  ldr r5,[r0,#-0x4]
01ffb7d8  add r4,r4,r12
01ffb7dc  ldr r9,[r0,#0x4]
01ffb7e0  ldr r11,[sp],#0xc
01ffb7e4  add r4,r4,r9
01ffb7e8  add r5,r5,r9
01ffb7ec  mov r11,r11, lsr #0x1
01ffb7f0  ldrh r6,[r4],#0x2
01ffb7f4  ldrh r8,[r4,#0x4]
01ffb7f8  ldr r7,[r4],#0xfe
01ffb7fc  subs r11,r11,#0x1
01ffb800  orr r6,r6,r7, lsl #0x10
01ffb804  mov r7,r7, lsr #0x10
01ffb808  orr r7,r7,r8, lsl #0x10
01ffb80c  stmia r5,{r6,r7}
01ffb810  add r5,r5,#0x100
01ffb814  bne 0x01ffb7f0
01ffb818  ldmia sp!,{r11,r12,pc}
01ffb81c  ldr r4,[sp,#0x4]
01ffb820  ldr r5,[r0,#-0x8]
01ffb824  add r4,r4,r11
01ffb828  ldr r9,[r0,#0x0]
01ffb82c  ldr r11,[sp,#0x0]
01ffb830  add r4,r4,r9
01ffb834  add r5,r5,r9
01ffb838  ldrb r6,[r4],#0x1
01ffb83c  ldmia r4,{r7,r8}
01ffb840  add r4,r4,#0xff
01ffb844  subs r11,r11,#0x1
01ffb848  orr r6,r6,r7, lsl #0x8
01ffb84c  mov r7,r7, lsr #0x18
01ffb850  orr r7,r7,r8, lsl #0x8
01ffb854  stmia r5,{r6,r7}
01ffb858  add r5,r5,#0x100
01ffb85c  bne 0x01ffb838
01ffb860  ldr r4,[sp,#0x8]
01ffb864  ldr r5,[r0,#-0x4]
01ffb868  add r4,r4,r12
01ffb86c  ldr r9,[r0,#0x4]
01ffb870  ldr r11,[sp],#0xc
01ffb874  add r4,r4,r9
01ffb878  add r5,r5,r9
01ffb87c  mov r11,r11, lsr #0x1
01ffb880  ldrh r6,[r4],#0x2
01ffb884  ldrh r8,[r4,#0x4]
01ffb888  ldr r7,[r4],#0xfe
01ffb88c  subs r11,r11,#0x1
01ffb890  orr r6,r6,r7, lsl #0x10
01ffb894  mov r7,r7, lsr #0x10
01ffb898  orr r7,r7,r8, lsl #0x10
01ffb89c  stmia r5,{r6,r7}
01ffb8a0  add r5,r5,#0x100
01ffb8a4  bne 0x01ffb880
01ffb8a8  ldmia sp!,{r11,r12,pc}
