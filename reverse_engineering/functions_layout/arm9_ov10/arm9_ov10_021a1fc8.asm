021a1fc8  stmdb sp!,{r4,lr}
021a1fcc  mov r4,r0
021a1fd0  bl 0x021a1f04
021a1fd4  cmp r0,#0x0
021a1fd8  beq 0x021a1ff0
021a1fdc  ldrb r0,[r4,#0x35]
021a1fe0  mov r0,r0, lsl #0x1b
021a1fe4  movs r0,r0, lsr #0x1f
021a1fe8  movne r0,#0x1
021a1fec  ldmiane sp!,{r4,pc}
021a1ff0  mov r0,#0x0
021a1ff4  ldmia sp!,{r4,pc}
