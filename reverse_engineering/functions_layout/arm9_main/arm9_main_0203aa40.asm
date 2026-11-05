0203aa40  stmdb sp!,{r4,lr}
0203aa44  mov r4,r0
0203aa48  bl 0x02029d44
0203aa4c  ldrh r0,[r4,#0x8]
0203aa50  mov r0,r0, lsl #0x1
0203aa54  str r0,[r4,#0x34]
0203aa58  ldmia sp!,{r4,pc}
