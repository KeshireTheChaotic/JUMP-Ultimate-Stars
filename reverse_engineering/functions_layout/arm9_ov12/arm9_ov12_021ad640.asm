021ad640  stmdb sp!,{r4,lr}
021ad644  ldr r2,[r0,#0x0]
021ad648  mov r4,r0
021ad64c  ldr r2,[r2,#0x1ac]
021ad650  blx r2
021ad654  mvn r1,#0x0
021ad658  cmp r0,r1
021ad65c  moveq r0,#0x0
021ad660  ldmiaeq sp!,{r4,pc}
021ad664  ldr r2,[r4,#0x15c]
021ad668  mov r1,#0x24
021ad66c  ldr r2,[r2,#0x8]
021ad670  ldr r2,[r2,#0x20]
021ad674  mla r1,r0,r1,r2
021ad678  ldr r0,[r1,#0x8]
021ad67c  mov r0,r0, lsl #0x1f
021ad680  movs r0,r0, lsr #0x1f
021ad684  addeq r0,r1,#0x9
021ad688  ldrne r0,[r1,#0x10]
021ad68c  ldmia sp!,{r4,pc}
