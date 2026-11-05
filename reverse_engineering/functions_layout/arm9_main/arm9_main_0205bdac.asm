0205bdac  stmdb sp!,{lr}
0205bdb0  sub sp,sp,#0x4
0205bdb4  ldr r1,[r0,#0x24]
0205bdb8  mov r1,r1, lsl #0x1f
0205bdbc  movs r1,r1, asr #0x1f
0205bdc0  addeq sp,sp,#0x4
0205bdc4  ldmiaeq sp!,{pc}
0205bdc8  bl 0x0205bc6c
0205bdcc  add sp,sp,#0x4
0205bdd0  ldmia sp!,{pc}
