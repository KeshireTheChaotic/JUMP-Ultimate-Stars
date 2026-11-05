0201fdd8  stmdb sp!,{r4,r5,r6,lr}
0201fddc  ldr r2,[r0,#0x0]
0201fde0  mov r6,r0
0201fde4  ldr r2,[r2,#0xd0]
0201fde8  mov r4,r1
0201fdec  blx r2
0201fdf0  bl 0x0201e6d4
0201fdf4  mov r5,r0
0201fdf8  mov r0,r6
0201fdfc  ldr r1,[r0,#0x0]
0201fe00  ldr r1,[r1,#0xd0]
0201fe04  blx r1
0201fe08  ldrh r1,[r6,#0x2a]
0201fe0c  bl 0x02020590
0201fe10  ldrb r1,[r5,#0x4]
0201fe14  cmp r1,#0x1
0201fe18  addls r1,r0,r4, lsl #0x1
0201fe1c  ldrhls r1,[r1,#0x28]
0201fe20  ldrbls r0,[r0,r1]
0201fe24  ldmials sp!,{r4,r5,r6,pc}
0201fe28  mov r2,#0x0
0201fe2c  mov r3,r2
0201fe30  b 0x0201fe44
0201fe34  add r1,r0,r3, lsl #0x1
0201fe38  ldrh r1,[r1,#0x28]
0201fe3c  add r3,r3,#0x1
0201fe40  add r2,r2,r1
0201fe44  cmp r3,r4
0201fe48  bcc 0x0201fe34
0201fe4c  add r1,r0,r4, lsl #0x1
0201fe50  ldrh r1,[r1,#0x28]
0201fe54  add r1,r2,r1
0201fe58  ldrb r0,[r0,r1]
0201fe5c  ldmia sp!,{r4,r5,r6,pc}
