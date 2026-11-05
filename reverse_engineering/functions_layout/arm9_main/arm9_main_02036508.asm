02036508  stmdb sp!,{r3,lr}
0203650c  mov r0,#0x40
02036510  bl 0x0201a228
02036514  cmp r0,#0x0
02036518  ldmiaeq sp!,{r3,pc}
0203651c  bl 0x020357d0
02036520  ldmia sp!,{r3,pc}
