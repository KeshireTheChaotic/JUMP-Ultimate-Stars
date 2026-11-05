0214dc38  adceq r4,r0,r5, lsl #0x6
0214dc3c  sbcscc r1,r12,r8, lsl #0x10
0214dc40  rsbcs r6,r10,r1, lsl #0x10
0214dc44  stmdapl r8,{r7}
0214dc48  stmdbvs r0,{r0,r3,r4,r6,r8,r11,lr}
0214dc4c  blvs 0x031e9354
