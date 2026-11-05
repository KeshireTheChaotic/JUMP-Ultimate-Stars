021a1ec4  stmdb sp!,{r3,r4,r5,lr}
021a1ec8  mov r4,r1
021a1ecc  mov r5,r0
021a1ed0  bl 0x021a1fc8
021a1ed4  cmp r0,r4
021a1ed8  ldmiaeq sp!,{r3,r4,r5,pc}
021a1edc  ldrb r1,[r5,#0x35]
021a1ee0  and r0,r4,#0xff
021a1ee4  mov r0,r0, lsl #0x1f
021a1ee8  bic r1,r1,#0x10
021a1eec  orr r2,r1,r0, lsr #0x1b
021a1ef0  mov r0,r5
021a1ef4  mov r1,#0x50
021a1ef8  strb r2,[r5,#0x35]
021a1efc  blx 0x021782b4
021a1f00  ldmia sp!,{r3,r4,r5,pc}
