02154d28  stmdb sp!,{r4,lr}
02154d2c  movs r4,r0
02154d30  ldmiaeq sp!,{r4,pc}
02154d34  mov r0,#0x3c
02154d38  smulbb r0,r1,r0
02154d3c  add r0,r0,#0xe7
02154d40  add r0,r0,#0x300
02154d44  mov r1,#0x3e8
02154d48  bl 0x0200d12c
02154d4c  mov r0,r0, lsl #0x18
02154d50  movs r0,r0, asr #0x18
02154d54  movmi r0,#0x0
02154d58  cmp r0,#0x3c
02154d5c  movgt r0,#0x3c
02154d60  strb r0,[r4,#0xf5]
02154d64  ldmia sp!,{r4,pc}
