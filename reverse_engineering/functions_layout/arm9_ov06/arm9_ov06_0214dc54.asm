0214dc54  adceq lr,r0,r6
0214dc58  sbcscc r1,r12,r8, lsl #0x10
0214dc5c  ldcne p8,cr6,[r9],#0x0
0214dc60  stmib r4,{r0,r3,r12,sp,lr,pc}
0214dc64  stmdami pc,{r2,r5,r6,r10,r11,r12}^
0214dc68  subcss r6,r6,r1, lsl #0x10
0214dc6c  stmdapl r8,{r7}
