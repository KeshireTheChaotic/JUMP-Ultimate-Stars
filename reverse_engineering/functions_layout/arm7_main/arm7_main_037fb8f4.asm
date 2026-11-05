037fb8f4  stmdb sp!,{lr}
037fb8f8  mov r12,#0x4000000
037fb8fc  add r12,r12,#0x210
037fb900  ldr r1,[r12,#-0x8]
037fb904  cmp r1,#0x0
037fb908  ldmiaeq sp!,{pc}
037fb90c  ldmia r12,{r1,r2}
037fb910  ands r1,r1,r2
037fb914  ldmiaeq sp!,{pc}
037fb918  mov r3,#0x1
037fb91c  mov r0,#0x0
037fb920  ands r2,r1,r3, lsl r0
037fb924  addeq r0,r0,#0x1
037fb928  beq 0x037fb920
037fb92c  str r2,[r12,#0x4]
037fb930  ldr r1,[0x37fb940]
037fb934  ldr r0,[r1,r0,lsl #0x2]
037fb938  ldr lr,[0x37fb944]
037fb93c  bx r0
