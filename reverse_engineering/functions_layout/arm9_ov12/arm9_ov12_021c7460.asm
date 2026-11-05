021c7460  stmdb sp!,{r3,r4,r5,lr}
021c7464  mov r5,r0
021c7468  bl 0x02032fe8
021c746c  ldrh r1,[r5,#0x10]
021c7470  mov r4,r0
021c7474  and r0,r1,#0x1f
021c7478  orr r0,r0,r0, lsl #0x5
021c747c  mov r0,r0, lsr #0x5
021c7480  bl 0x0200c99c
021c7484  ldr r1,[0x21c7534]
021c7488  bl 0x0200c5ac
021c748c  mov r1,r0
021c7490  ldr r0,[0x21c7538]
021c7494  bl 0x0200c9e4
021c7498  bl 0x0200c8e0
021c749c  str r0,[r4,#0x0]
021c74a0  ldrh r0,[r5,#0x10]
021c74a4  mov r0,r0, asr #0x5
021c74a8  and r0,r0,#0x1f
021c74ac  orr r0,r0,r0, lsl #0x5
021c74b0  mov r0,r0, lsr #0x5
021c74b4  bl 0x0200c99c
021c74b8  ldr r1,[0x21c7534]
021c74bc  bl 0x0200c5ac
021c74c0  mov r1,r0
021c74c4  ldr r0,[0x21c7538]
021c74c8  bl 0x0200c9e4
021c74cc  bl 0x0200c8e0
021c74d0  str r0,[r4,#0x4]
021c74d4  ldrh r0,[r5,#0x10]
021c74d8  mov r0,r0, asr #0xa
021c74dc  and r0,r0,#0x1f
021c74e0  orr r0,r0,r0, lsl #0x5
021c74e4  mov r0,r0, lsr #0x5
021c74e8  bl 0x0200c99c
021c74ec  ldr r1,[0x21c7534]
021c74f0  bl 0x0200c5ac
021c74f4  mov r1,r0
021c74f8  ldr r0,[0x21c7538]
021c74fc  bl 0x0200c9e4
021c7500  bl 0x0200c8e0
021c7504  str r0,[r4,#0x8]
021c7508  ldrh r0,[r5,#0x12]
021c750c  bl 0x0200c99c
021c7510  ldr r1,[0x21c7534]
021c7514  bl 0x0200c5ac
021c7518  mov r1,r0
021c751c  ldr r0,[0x21c7538]
021c7520  bl 0x0200c9e4
021c7524  bl 0x0200c8e0
021c7528  str r0,[r4,#0xc]
021c752c  mov r0,r4
021c7530  ldmia sp!,{r3,r4,r5,pc}
