037fe6f4  cmp r2,#0x0
037fe6f8  bxeq lr
037fe6fc  tst r0,#0x1
037fe700  beq 0x037fe720
037fe704  ldrh r12,[r0,#-0x1]
037fe708  and r12,r12,#0xff
037fe70c  orr r3,r12,r1, lsl #0x8
037fe710  strh r3,[r0,#-0x1]
037fe714  add r0,r0,#0x1
037fe718  subs r2,r2,#0x1
037fe71c  bxeq lr
037fe720  cmp r2,#0x2
037fe724  bcc 0x037fe768
037fe728  orr r1,r1,r1, lsl #0x8
037fe72c  tst r0,#0x2
037fe730  beq 0x037fe740
037fe734  strh r1,[r0],#0x2
037fe738  subs r2,r2,#0x2
037fe73c  bxeq lr
037fe740  orr r1,r1,r1, lsl #0x10
037fe744  bics r3,r2,#0x3
037fe748  beq 0x037fe760
037fe74c  sub r2,r2,r3
037fe750  add r12,r3,r0
037fe754  str r1,[r0],#0x4
037fe758  cmp r0,r12
037fe75c  bcc 0x037fe754
037fe760  tst r2,#0x2
037fe764  strhne r1,[r0],#0x2
037fe768  tst r2,#0x1
037fe76c  bxeq lr
037fe770  ldrh r3,[r0,#0x0]
037fe774  and r3,r3,#0xff00
037fe778  and r1,r1,#0xff
037fe77c  orr r1,r1,r3
037fe780  strh r1,[r0,#0x0]
037fe784  bx lr
