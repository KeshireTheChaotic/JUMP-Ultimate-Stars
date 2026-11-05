021643a4  ldr r1,[r1,r2,lsl #0x2]
021643a8  and r2,r3,#0x1f
021643ac  tst r1,r0, lsl r2
021643b0  moveq r0,#0x0
021643b4  ldmia sp!,{r3,pc}
