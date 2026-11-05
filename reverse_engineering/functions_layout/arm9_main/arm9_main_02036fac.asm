02036fac  stmdb sp!,{r3,r4,r5,lr}
02036fb0  mov r4,r1
02036fb4  mov r5,r0
02036fb8  mov r0,r4
02036fbc  blx 0x02004b04
02036fc0  add r0,r0,#0x1
02036fc4  rsb r0,r0,r0, lsl #0x1
02036fc8  bl 0x0201a228
02036fcc  mov r1,r4
02036fd0  mov r4,r0
02036fd4  blx 0x02004b18
02036fd8  str r4,[r5,#0x70]
02036fdc  ldmia sp!,{r3,r4,r5,pc}
