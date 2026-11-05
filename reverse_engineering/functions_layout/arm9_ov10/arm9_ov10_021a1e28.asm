021a1e28  stmdb sp!,{r3,r4,r5,lr}
021a1e2c  mov r4,r1
021a1e30  mov r5,r0
021a1e34  bl 0x021a1f68
021a1e38  cmp r0,r4
021a1e3c  ldmiaeq sp!,{r3,r4,r5,pc}
021a1e40  ldrb r1,[r5,#0x35]
021a1e44  and r0,r4,#0xff
021a1e48  mov r0,r0, lsl #0x1f
021a1e4c  bic r1,r1,#0x2
021a1e50  orr r2,r1,r0, lsr #0x1e
021a1e54  mov r0,r5
021a1e58  mov r1,#0x50
021a1e5c  strb r2,[r5,#0x35]
021a1e60  blx 0x021782b4
021a1e64  ldmia sp!,{r3,r4,r5,pc}
