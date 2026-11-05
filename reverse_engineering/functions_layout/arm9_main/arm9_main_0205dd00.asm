0205dd00  stmdb sp!,{r4,lr}
0205dd04  mov r4,r0
0205dd08  ldr r1,[r4,#0x110]
0205dd0c  mov r1,r1, lsl #0x1f
0205dd10  movs r1,r1, asr #0x1f
0205dd14  ldmiaeq sp!,{r4,pc}
0205dd18  bl 0x0205dcc4
0205dd1c  ldr r1,[r4,#0x164]
0205dd20  mov r0,r4
0205dd24  blx r1
0205dd28  ldr r0,[0x205dd5c]
0205dd2c  mov r1,r4
0205dd30  bl 0x0205dc54
0205dd34  ldr r0,[0x205dd60]
0205dd38  ldr r0,[r0,#0x0]
0205dd3c  cmp r0,#0x0
0205dd40  beq 0x0205dd50
0205dd44  mov r1,r4
0205dd48  add r0,r0,#0x4e0
0205dd4c  bl 0x0205dc54
0205dd50  mov r0,r4
0205dd54  bl 0x0205de58
0205dd58  ldmia sp!,{r4,pc}
