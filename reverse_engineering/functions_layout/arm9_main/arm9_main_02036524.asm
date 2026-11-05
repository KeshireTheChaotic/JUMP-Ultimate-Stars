02036524  stmdb sp!,{r3,lr}
02036528  mov r0,#0x40
0203652c  bl 0x0201a228
02036530  cmp r0,#0x0
02036534  ldmiaeq sp!,{r3,pc}
02036538  bl 0x020357d0
0203653c  ldmia sp!,{r3,pc}
