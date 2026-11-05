0205de00  stmdb sp!,{r4,lr}
0205de04  mov r4,r0
0205de08  ldr r3,[r4,#0x110]
0205de0c  mov r2,r1
0205de10  mov r1,r3, lsl #0x1e
0205de14  movs r1,r1, asr #0x1f
0205de18  bne 0x0205de24
0205de1c  bl 0x0205dd64
0205de20  ldmia sp!,{r4,pc}
0205de24  cmp r2,#0x0
0205de28  bne 0x0205de34
0205de2c  bl 0x0205dd64
0205de30  ldmia sp!,{r4,pc}
0205de34  add r0,r4,#0xe8
0205de38  mov r1,#0x0
0205de3c  bl 0x0205e090
0205de40  ldr r1,[r4,#0x110]
0205de44  mov r0,#0x0
0205de48  orr r1,r1,#0x8
0205de4c  str r1,[r4,#0x110]
0205de50  str r0,[r4,#0x150]
0205de54  ldmia sp!,{r4,pc}
