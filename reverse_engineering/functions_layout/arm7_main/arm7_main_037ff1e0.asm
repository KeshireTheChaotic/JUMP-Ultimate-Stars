037ff1e0  stmdb sp!,{r4,r5,r6,r7,lr}
037ff1e4  sub sp,sp,#0x4
037ff1e8  mov r7,r1
037ff1ec  mov r6,r3
037ff1f0  ldr r5,[sp,#0x1c]
037ff1f4  mov r4,r0, lsl #0x4
037ff1f8  ldr r1,[0x37ff284]
037ff1fc  strb r5,[r1,r0]
037ff200  ldr r1,[0x37ff288]
037ff204  ldr r1,[r1,#0x0]
037ff208  cmp r1,#0x0
037ff20c  movge r5,r1
037ff210  ldr r1,[0x37ff28c]
037ff214  strb r2,[r1,r0]
037ff218  ldr r1,[0x37ff290]
037ff21c  ldr r1,[r1,#0x0]
037ff220  cmp r1,#0x0
037ff224  ble 0x037ff24c
037ff228  mov r1,#0x1
037ff22c  mov r1,r1, lsl r0
037ff230  ldr r0,[0x37ff294]
037ff234  ands r0,r1,r0
037ff238  beq 0x037ff24c
037ff23c  mov r0,r2
037ff240  mov r1,r5
037ff244  bl 0x037fee8c
037ff248  mov r2,r0
037ff24c  mov r0,r7, lsl #0x18
037ff250  orr r0,r0,#0x60000000
037ff254  orr r0,r0,r5, lsl #0x10
037ff258  orr r0,r0,r6, lsl #0x8
037ff25c  orr r1,r2,r0
037ff260  add r0,r4,#0x4000000
037ff264  str r1,[r0,#0x400]
037ff268  ldr r1,[sp,#0x18]
037ff26c  rsb r1,r1,#0x10000
037ff270  add r0,r0,#0x400
037ff274  strh r1,[r0,#0x8]
037ff278  add sp,sp,#0x4
037ff27c  ldmia sp!,{r4,r5,r6,r7,lr}
037ff280  bx lr
