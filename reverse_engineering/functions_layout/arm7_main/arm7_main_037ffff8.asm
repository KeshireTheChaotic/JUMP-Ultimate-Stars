037ffff8  stmdb sp!,{r4,lr}
037ffffc  mov r4,r0
03800000  mov r0,r1
03800004  bl 0x037ffaa4
03800008  strh r0,[r4,#0x20]
0380000c  ldmia sp!,{r4,lr}
03800010  bx lr
