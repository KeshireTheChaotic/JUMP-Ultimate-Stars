0202ffd4  stmdb sp!,{r3,lr}
0202ffd8  ldrh r2,[r0,#0xa]
0202ffdc  sub r3,r2,#0x1
0202ffe0  b 0x0202fffc
0202ffe4  ldr r2,[r0,#0x10]
0202ffe8  ldr r2,[r2,r3,lsl #0x2]
0202ffec  cmp r2,r1
0202fff0  moveq r0,#0x1
0202fff4  ldmiaeq sp!,{r3,pc}
0202fff8  sub r3,r3,#0x1
0202fffc  cmp r3,#0x0
02030000  bge 0x0202ffe4
02030004  ldr r0,[r0,#0xc]
02030008  ldr r2,[r0,#0x0]
0203000c  ldr r2,[r2,#0x38]
02030010  blx r2
02030014  ldmia sp!,{r3,pc}
