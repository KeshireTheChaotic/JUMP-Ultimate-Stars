0205dd64  stmdb sp!,{r4,lr}
0205dd68  mov r4,r0
0205dd6c  ldr r0,[0x205ddf4]
0205dd70  bl 0x02053ed0
0205dd74  ldr r0,[0x205ddf8]
0205dd78  ldr r1,[r0,#0x0]
0205dd7c  cmp r1,#0x0
0205dd80  beq 0x0205dd90
0205dd84  ldr r0,[0x205ddfc]
0205dd88  add r0,r1,r0
0205dd8c  bl 0x02053ed0
0205dd90  ldr r0,[r4,#0x110]
0205dd94  mov r0,r0, lsl #0x1e
0205dd98  movs r0,r0, asr #0x1f
0205dd9c  beq 0x0205dda8
0205dda0  mov r0,r4
0205dda4  bl 0x0205bdac
0205dda8  ldr r0,[r4,#0x110]
0205ddac  mov r0,r0, lsl #0x1f
0205ddb0  movs r0,r0, asr #0x1f
0205ddb4  beq 0x0205ddc4
0205ddb8  ldr r1,[r4,#0x16c]
0205ddbc  mov r0,r4
0205ddc0  blx r1
0205ddc4  mov r0,r4
0205ddc8  bl 0x0205dd00
0205ddcc  ldr r0,[0x205ddf4]
0205ddd0  bl 0x02053e60
0205ddd4  ldr r0,[0x205ddf8]
0205ddd8  ldr r1,[r0,#0x0]
0205dddc  cmp r1,#0x0
0205dde0  ldmiaeq sp!,{r4,pc}
0205dde4  ldr r0,[0x205ddfc]
0205dde8  add r0,r1,r0
0205ddec  bl 0x02053e60
0205ddf0  ldmia sp!,{r4,pc}
