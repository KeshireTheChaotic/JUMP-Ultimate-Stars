0206ed80  stmdb sp!,{r4,lr}
0206ed84  mov r4,r1
0206ed88  cmp r4,#0x4
0206ed8c  addls pc,pc,r4, lsl #0x2
0206ed90  b 0x0206ee00
0206ee00  ldr r0,[0x206efdc]
0206ee04  ldr r0,[r0,#0x80]
0206ee08  cmp r0,#0x6
0206ee0c  addls pc,pc,r0, lsl #0x2
0206ee10  b 0x0206ef3c
0206ef3c  ldr r0,[0x206efdc]
0206ef40  ldr r0,[r0,#0x80]
0206ef44  cmp r0,#0x6
0206ef48  addls pc,pc,r0, lsl #0x2
0206ef4c  ldmia sp!,{r4,pc}
