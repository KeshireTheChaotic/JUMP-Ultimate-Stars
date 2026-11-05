020739fc  stmdb sp!,{r4,lr}
02073a00  mov r4,r1
02073a04  bl 0x0203b3f4
02073a08  ldr r0,[r0,#0x88]
02073a0c  rsb r1,r4,#0x10
02073a10  bl 0x0206e494
02073a14  ldmia sp!,{r4,pc}
