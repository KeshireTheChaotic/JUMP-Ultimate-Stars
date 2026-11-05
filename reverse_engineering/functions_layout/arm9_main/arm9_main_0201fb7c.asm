0201fb7c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0201fb80  ldr r2,[r0,#0x0]
0201fb84  mov r10,r0
0201fb88  ldr r2,[r2,#0xd0]
0201fb8c  mov r11,r1
0201fb90  blx r2
0201fb94  bl 0x0201e6d4
0201fb98  ldrb r5,[r0,#0x6]
0201fb9c  mov r6,#0x0
0201fba0  b 0x0201fc34
0201fba4  ldr r0,[r10,#0x5c]
0201fba8  mov r8,#0x0
0201fbac  ldr r7,[r0,r6,lsl #0x2]
0201fbb0  mov r0,r11, lsl #0x10
0201fbb4  mov r4,r0, lsr #0x10
0201fbb8  b 0x0201fc24
0201fbbc  ldr r1,[r7,#0x4c]
0201fbc0  add r3,r1,r8, lsl #0x4
0201fbc4  ldr r0,[r3,#0x4]
0201fbc8  ldr r1,[r1,r8,lsl #0x4]
0201fbcc  ldr r2,[r0,#0x0]
0201fbd0  ldr r9,[r3,#0xc]
0201fbd4  ldr r2,[r2,#0x68]
0201fbd8  blx r2
0201fbdc  mov r0,r0, lsr #0x1
0201fbe0  add r2,r0,#0x1
0201fbe4  b 0x0201fbec
0201fbe8  sub r9,r9,r2, lsl #0x1
0201fbec  ldrh r0,[r9,#0x0]
0201fbf0  cmp r4,r0
0201fbf4  bcc 0x0201fbe8
0201fbf8  mov r1,r2, lsl #0x1
0201fbfc  b 0x0201fc04
0201fc00  add r9,r9,r2, lsl #0x1
0201fc04  ldrh r0,[r1,r9]
0201fc08  cmp r0,r4
0201fc0c  bls 0x0201fc00
0201fc10  ldrh r0,[r9,#0x0]
0201fc14  cmp r0,r4
0201fc18  moveq r0,#0x1
0201fc1c  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
0201fc20  add r8,r8,#0x1
0201fc24  ldrh r0,[r7,#0x52]
0201fc28  cmp r8,r0
0201fc2c  blt 0x0201fbbc
0201fc30  add r6,r6,#0x1
0201fc34  cmp r6,r5
0201fc38  bcc 0x0201fba4
0201fc3c  mov r0,#0x0
0201fc40  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
