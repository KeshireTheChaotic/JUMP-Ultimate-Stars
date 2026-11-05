0215454c  stmdb sp!,{r4,r5,r6,lr}
02154550  mov r5,#0x0
02154554  mov r6,r0
02154558  mov r4,r5
0215455c  add r0,r6,r5, lsl #0x2
02154560  ldr r0,[r0,#0x3c0]
02154564  mov r1,r4
02154568  ldr r0,[r0,#0x4]
0215456c  ldr r2,[r0,#0x0]
02154570  ldr r2,[r2,#0xd8]
02154574  blx r2
02154578  add r5,r5,#0x1
0215457c  cmp r5,#0x3
02154580  blt 0x0215455c
02154584  ldmia sp!,{r4,r5,r6,pc}
