02159a34  stmdb sp!,{r4,lr}
02159a38  mov r4,r0
02159a3c  ldrb r1,[r4,#0x4]
02159a40  ldr r0,[0x2159ab0]
02159a44  ldr r0,[r0,r1,lsl #0x4]
02159a48  cmp r0,#0x1
02159a4c  bne 0x02159a70
02159a50  ldr r0,[0x2159ab4]
02159a54  ldr r0,[r0,r1,lsl #0x4]
02159a58  bl 0x020736b4
02159a5c  ldrb r2,[r4,#0x4]
02159a60  ldr r0,[0x2159ab8]
02159a64  mov r1,#0x0
02159a68  ldr r0,[r0,r2,lsl #0x4]
02159a6c  bl 0x020736e4
02159a70  ldrb r1,[r4,#0x4]
02159a74  ldr r0,[0x2159ab0]
02159a78  ldr r0,[r0,r1,lsl #0x4]
02159a7c  cmp r0,#0x0
02159a80  bne 0x02159aa8
02159a84  ldr r0,[0x2159ab4]
02159a88  ldr r0,[r0,r1,lsl #0x4]
02159a8c  bl 0x02073744
02159a90  ldrb r2,[r4,#0x4]
02159a94  ldr r0,[0x2159abc]
02159a98  ldr r1,[0x2159ab8]
02159a9c  ldr r0,[r0,r2,lsl #0x4]
02159aa0  ldr r1,[r1,r2,lsl #0x4]
02159aa4  bl 0x0207342c
02159aa8  mov r0,#0x0
02159aac  ldmia sp!,{r4,pc}
