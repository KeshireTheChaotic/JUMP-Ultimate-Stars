02015184  stmdb sp!,{r3,lr}
02015188  ldr r0,[r0,#0x38]
0201518c  cmp r0,#0x0
02015190  ldmiaeq sp!,{r3,pc}
02015194  ldrb r2,[r0,#0x29]
02015198  mov r2,r2, lsl #0x19
0201519c  movs r2,r2, lsr #0x1f
020151a0  ldmiane sp!,{r3,pc}
020151a4  ldr r2,[r0,#0x0]
020151a8  ldr r2,[r2,#0xe4]
020151ac  blx r2
020151b0  ldmia sp!,{r3,pc}
