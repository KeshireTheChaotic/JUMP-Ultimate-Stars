0214dce0  ldmdami r0!,{r2,r5,r11,sp,lr,pc}
0214dce4  andcss r6,r1,r1, lsl #0x10
0214dce8  stmdapl r8,{r8}
0214dcec  swi 0xd8f01c
0214dcf0  stmdavs r1,{r2,r3,r5,r11,lr}
0214dcf4  addeq r2,r0,r3, asr #32
