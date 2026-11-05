02162dc4  stmdb lr,{r0,r4,r5,r6,r7,r9,r10,r12,sp,lr,pc}
02162dc8  andcc r1,r12,r0, lsr r12
02162dcc  andcs r4,r8,#0xc0000
02162dd0  blx 0x040a0856
