02160c9c  stmdb sp!,{r3,lr}
02160ca0  ldr r0,[r0,#0x4]
02160ca4  ldr r0,[r0,#0x94]
02160ca8  cmp r0,#0x0
02160cac  moveq r0,#0x0
02160cb0  ldmiaeq sp!,{r3,pc}
02160cb4  bl 0x021504fc
02160cb8  ldmia sp!,{r3,pc}
