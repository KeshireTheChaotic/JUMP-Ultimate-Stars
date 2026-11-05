0214de0c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
0214de10  mov r4,r0
0214de14  ldr r2,[r4,#0x34]
0214de18  mov r0,#0x48
0214de1c  mla r7,r1,r0,r2
0214de20  ldrb r0,[r7,#0x43]
0214de24  cmp r0,#0x3
0214de28  addls pc,pc,r0, lsl #0x2
0214de2c  b 0x0214ded0
0214de30  b 0x0214de40
0214de34  b 0x0214de48
0214de38  b 0x0214de94
0214de3c  b 0x0214debc
0214de40  mov r0,#0x1
0214de44  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
0214de48  mov r9,#0x0
0214de4c  mov r8,#0x1
0214de50  mov r6,r9
0214de54  mvn r5,#0x0
0214de58  add r0,r7,r9, lsl #0x1
0214de5c  ldrsh r1,[r0,#0x30]
0214de60  cmp r1,r5
0214de64  beq 0x0214de78
0214de68  mov r0,r4
0214de6c  bl 0x0214dedc
0214de70  cmp r0,#0x0
0214de74  moveq r8,r6
0214de78  add r9,r9,#0x1
0214de7c  cmp r9,#0x4
0214de80  blt 0x0214de58
0214de84  cmp r8,#0x0
0214de88  beq 0x0214ded0
0214de8c  mov r0,#0x1
0214de90  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
0214de94  ldrsh r2,[r7,#0x30]
0214de98  ldr r1,[0x214ded8]
0214de9c  mov r0,#0x1
0214dea0  and r3,r2,#0xff
0214dea4  mov r2,r3, lsr #0x5
0214dea8  ldr r1,[r1,r2,lsl #0x2]
0214deac  and r2,r3,#0x1f
0214deb0  tst r1,r0, lsl r2
0214deb4  moveq r0,#0x0
0214deb8  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
0214debc  blx 0x02070f94
0214dec0  ldrsh r1,[r7,#0x30]
0214dec4  cmp r1,r0
0214dec8  movlt r0,#0x1
0214decc  ldmialt sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
0214ded0  mov r0,#0x0
0214ded4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
