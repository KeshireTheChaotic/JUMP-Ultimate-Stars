0216293c  stmdbcs r0,{r0,r11,pc}
02162940  bmi 0x03cd7134
02162944  andhi r6,r2,r3, lsr r8
02162948  subhi r1,r1,r1, lsl pc
0216294c  addhi r3,r2,r10, lsl r10
02162950  ldceq p2,cr1,[r2,#-0x368]
02162954  ldmdavs r6!,{r1,r3,r4,r7,r11,r12}^
02162958  sbchi r2,r1,r0, lsl #0x2
0216295c  ldceq p2,cr1,[r11,#-0x3cc]
02162960  stmdbls r11,{r0,r1,r4,r5,r6,r7,r11,r12}
