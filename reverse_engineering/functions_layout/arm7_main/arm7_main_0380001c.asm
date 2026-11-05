0380001c  stmdb sp!,{r4,lr}
03800020  mov r4,r0
03800024  mov r0,r1
03800028  bl 0x037ffaa4
0380002c  strh r0,[r4,#0x1e]
03800030  ldmia sp!,{r4,lr}
03800034  bx lr
