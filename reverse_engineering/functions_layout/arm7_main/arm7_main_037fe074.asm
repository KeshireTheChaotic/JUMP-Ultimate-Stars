037fe074  stmdb sp!,{r4,lr}
037fe078  mov r4,r0
037fe07c  mov r0,#0x4
037fe080  ldr r1,[0x37fe0c8]
037fe084  bl 0x037fbd04
037fe088  ldrsh r12,[r4,#0x10]
037fe08c  and r3,r12,#0x100
037fe090  ldr r1,[0x37fe0cc]
037fe094  ldrh r0,[r1,#0x0]
037fe098  and r2,r0,#0x3f
037fe09c  and r0,r12,#0xff
037fe0a0  orr r0,r2,r0, lsl #0x8
037fe0a4  orr r0,r0,r3, asr #0x1
037fe0a8  strh r0,[r1,#0x0]
037fe0ac  ldrh r0,[r1,#0x0]
037fe0b0  orr r0,r0,#0x20
037fe0b4  strh r0,[r1,#0x0]
037fe0b8  mov r0,#0x4
037fe0bc  bl 0x037fbc4c
037fe0c0  ldmia sp!,{r4,lr}
037fe0c4  bx lr
