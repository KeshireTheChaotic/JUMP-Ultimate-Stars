02027edc  stmdb sp!,{r4,lr}
02027ee0  mov r4,r0
02027ee4  ldrb r1,[r4,#0x28]
02027ee8  mov r0,r1, lsl #0x1b
02027eec  movs r0,r0, lsr #0x1f
02027ef0  beq 0x02027f9c
02027ef4  mov r0,r1, lsl #0x1c
02027ef8  movs r0,r0, lsr #0x1f
02027efc  bne 0x02027f0c
02027f00  mov r0,r1, lsl #0x1d
02027f04  movs r0,r0, lsr #0x1f
02027f08  beq 0x02027f54
02027f0c  ldrb r0,[r4,#0x28]
02027f10  mov r1,r0, lsl #0x1e
02027f14  movs r1,r1, lsr #0x1f
02027f18  bne 0x02027f54
02027f1c  mov r0,r0, lsl #0x18
02027f20  movs r0,r0, lsr #0x1f
02027f24  bne 0x02027f54
02027f28  ldrb r0,[r4,#0x29]
02027f2c  mov r0,r0, lsl #0x1e
02027f30  movs r0,r0, lsr #0x1f
02027f34  bne 0x02027f54
02027f38  ldr r1,[r4,#0x34]
02027f3c  ldr r0,[r4,#0x3c]
02027f40  ldr r1,[r1,#0x248]
02027f44  bic r0,r0,#0x80000000
02027f48  orr r0,r0,#0x80000000
02027f4c  tst r1,r0
02027f50  ldmiane sp!,{r4,pc}
02027f54  ldr r0,[r4,#0x38]
02027f58  cmp r0,#0x0
02027f5c  ldrne r0,[r0,#0x0]
02027f60  cmpne r0,#0x0
02027f64  ldmiane sp!,{r4,pc}
02027f68  mov r0,r4
02027f6c  ldr r1,[r0,#0x0]
02027f70  ldr r1,[r1,#0x5c]
02027f74  blx r1
02027f78  ldrb r1,[r4,#0x28]
02027f7c  mov r0,r4
02027f80  bic r2,r1,#0x1
02027f84  and r1,r2,#0xff
02027f88  mov r1,r1, lsl #0x1f
02027f8c  mov r1,r1, lsr #0x1f
02027f90  strb r2,[r4,#0x28]
02027f94  bl 0x02027e7c
02027f98  ldmia sp!,{r4,pc}
02027f9c  ldr r0,[r4,#0x38]
02027fa0  cmp r0,#0x0
02027fa4  ldrne r1,[r0,#0x0]
02027fa8  cmpne r1,#0x0
02027fac  bne 0x02027ff8
02027fb0  ldrb r1,[r4,#0x28]
02027fb4  mov r2,r1, lsl #0x18
02027fb8  movs r2,r2, lsr #0x1f
02027fbc  bne 0x02028094
02027fc0  mov r1,r1, lsl #0x1e
02027fc4  movs r1,r1, lsr #0x1f
02027fc8  bne 0x02028094
02027fcc  ldrb r1,[r4,#0x29]
02027fd0  mov r1,r1, lsl #0x1e
02027fd4  movs r1,r1, lsr #0x1f
02027fd8  bne 0x02028094
02027fdc  ldr r2,[r4,#0x34]
02027fe0  ldr r1,[r4,#0x3c]
02027fe4  ldr r2,[r2,#0x248]
02027fe8  bic r1,r1,#0x80000000
02027fec  orr r1,r1,#0x80000000
02027ff0  tst r2,r1
02027ff4  beq 0x02028094
02027ff8  ldrb r1,[r4,#0x28]
02027ffc  mov r2,r1, lsl #0x1c
02028000  movs r2,r2, lsr #0x1f
02028004  bne 0x02028024
02028008  mov r1,r1, lsl #0x1d
0202800c  movs r1,r1, lsr #0x1f
02028010  bne 0x02028024
02028014  cmp r0,#0x0
02028018  ldrne r0,[r0,#0x0]
0202801c  cmpne r0,#0x0
02028020  beq 0x0202805c
02028024  mov r0,r4
02028028  ldr r1,[r0,#0x0]
0202802c  ldr r1,[r1,#0x58]
02028030  blx r1
02028034  ldrb r1,[r4,#0x28]
02028038  mov r0,r4
0202803c  bic r1,r1,#0x1
02028040  orr r2,r1,#0x1
02028044  and r1,r2,#0xff
02028048  mov r1,r1, lsl #0x1f
0202804c  mov r1,r1, lsr #0x1f
02028050  strb r2,[r4,#0x28]
02028054  bl 0x02027e7c
02028058  ldmia sp!,{r4,pc}
0202805c  ldrb r0,[r4,#0x28]
02028060  mov r1,r0, lsl #0x1f
02028064  mov r1,r1, lsr #0x1f
02028068  cmp r1,#0x1
0202806c  ldmiaeq sp!,{r4,pc}
02028070  bic r0,r0,#0x1
02028074  orr r2,r0,#0x1
02028078  and r0,r2,#0xff
0202807c  mov r1,r0, lsl #0x1f
02028080  mov r0,r4
02028084  mov r1,r1, lsr #0x1f
02028088  strb r2,[r4,#0x28]
0202808c  bl 0x02027e7c
02028090  ldmia sp!,{r4,pc}
02028094  ldrb r0,[r4,#0x28]
02028098  mov r1,r0, lsl #0x1f
0202809c  movs r1,r1, lsr #0x1f
020280a0  ldmiaeq sp!,{r4,pc}
020280a4  bic r2,r0,#0x1
020280a8  and r0,r2,#0xff
020280ac  mov r1,r0, lsl #0x1f
020280b0  mov r0,r4
020280b4  mov r1,r1, lsr #0x1f
020280b8  strb r2,[r4,#0x28]
020280bc  bl 0x02027e7c
020280c0  ldmia sp!,{r4,pc}
