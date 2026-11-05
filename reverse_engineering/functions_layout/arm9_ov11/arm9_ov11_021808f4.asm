021808f4  stmdb sp!,{r3,lr}
021808f8  ldrb r2,[r0,#0xd2]
021808fc  ldr r1,[0x218090c]
02180900  ldr r1,[r1,r2,lsl #0x2]
02180904  blx r1
02180908  ldmia sp!,{r3,pc}
