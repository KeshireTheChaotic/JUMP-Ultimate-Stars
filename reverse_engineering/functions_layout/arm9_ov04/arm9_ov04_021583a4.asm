021583a4  stmdb sp!,{r3,r4,r5,lr}
021583a8  movs r5,r0
021583ac  moveq r0,#0x1
021583b0  ldmiaeq sp!,{r3,r4,r5,pc}
021583b4  mov r4,#0x0
021583b8  b 0x021583d8
021583bc  add r0,r5,r4, lsl #0x2
021583c0  ldr r0,[r0,#0x4]
021583c4  bl 0x02157f1c
021583c8  cmp r0,#0x0
021583cc  moveq r0,#0x0
021583d0  ldmiaeq sp!,{r3,r4,r5,pc}
021583d4  add r4,r4,#0x1
021583d8  cmp r4,#0x4
021583dc  blt 0x021583bc
021583e0  mov r0,#0x1
021583e4  ldmia sp!,{r3,r4,r5,pc}
