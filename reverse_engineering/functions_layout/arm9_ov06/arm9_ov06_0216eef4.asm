0216eef4  stmdb sp!,{r3,r4,r5,r6,lr}
0216eef8  sub sp,sp,#0x4
0216eefc  mov r4,r1
0216ef00  ldr r5,[r4,#0x10]
0216ef04  mov r1,#0x0
0216ef08  str r1,[sp,#0x0]
0216ef0c  ldr r3,[r5,#0x34]
0216ef10  ldr r1,[r5,#0x3c]
0216ef14  orr r3,r3,#0x1000
0216ef18  mov r5,r0
0216ef1c  mov r6,r2
0216ef20  mov r2,r3, lsl #0x10
0216ef24  orr r1,r1,#0x8400000
0216ef28  mov r3,r1, lsl #0x10
0216ef2c  ldr r0,[0x216ef78]
0216ef30  mov r1,r6
0216ef34  mov r2,r2, lsr #0x10
0216ef38  mov r3,r3, lsr #0x10
0216ef3c  bl 0x02083624
0216ef40  str r0,[r5,#0x2c]
0216ef44  cmp r0,#0x0
0216ef48  ldrheq r1,[r5,#0x26]
0216ef4c  moveq r0,#0x0
0216ef50  orreq r1,r1,#0x8
0216ef54  strheq r1,[r5,#0x26]
0216ef58  beq 0x0216ef70
0216ef5c  mov r0,r5
0216ef60  mov r1,r4
0216ef64  mov r2,r6
0216ef68  bl 0x0216f100
0216ef6c  mov r0,#0x0
0216ef70  add sp,sp,#0x4
0216ef74  ldmia sp!,{r3,r4,r5,r6,pc}
