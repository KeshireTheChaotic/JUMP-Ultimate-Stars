02073ebc  stmdb sp!,{r3,lr}
02073ec0  ldr r2,[0x2073ee8]
02073ec4  mov r3,r0
02073ec8  ldr r12,[r2,r3,lsl #0x2]
02073ecc  mov r2,r1
02073ed0  ldr r0,[0x2073eec]
02073ed4  mov r1,r3
02073ed8  mov r3,#0x3f
02073edc  str r12,[sp,#0x0]
02073ee0  bl 0x02073e90
02073ee4  ldmia sp!,{r3,pc}
