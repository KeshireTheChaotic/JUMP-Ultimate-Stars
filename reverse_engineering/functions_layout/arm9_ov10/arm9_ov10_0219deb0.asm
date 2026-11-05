0219deb0  stmdb sp!,{r4,lr}
0219deb4  movs r4,r0
0219deb8  ldmiaeq sp!,{r4,pc}
0219debc  bl 0x02054b44
0219dec0  str r0,[r4,#0x20]
0219dec4  str r1,[r4,#0x24]
0219dec8  ldmia sp!,{r4,pc}
