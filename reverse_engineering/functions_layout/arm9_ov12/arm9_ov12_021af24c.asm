021af24c  stmdb sp!,{r4,lr}
021af250  mov r4,r0
021af254  blx 0x021b8868
021af258  ldr r1,[0x21af268]
021af25c  mov r0,r4
021af260  str r1,[r4,#0x0]
021af264  ldmia sp!,{r4,pc}
