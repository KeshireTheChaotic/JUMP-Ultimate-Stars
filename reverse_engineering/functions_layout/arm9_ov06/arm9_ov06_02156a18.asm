02156a18  stmdb sp!,{r3,lr}
02156a1c  ldrh r3,[r1,#0x0]
02156a20  ldr r2,[0x2156a34]
02156a24  and r3,r3,#0xff
02156a28  ldr r2,[r2,r3,lsl #0x2]
02156a2c  blx r2
02156a30  ldmia sp!,{r3,pc}
