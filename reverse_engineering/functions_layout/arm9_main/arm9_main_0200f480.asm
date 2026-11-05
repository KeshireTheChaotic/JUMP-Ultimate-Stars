0200f480  stmdb sp!,{r4,lr}
0200f484  ldrb r1,[r0,#0x6a]
0200f488  ldr r12,[r0,#0x60]
0200f48c  mov r4,#0xf
0200f490  cmp r1,#0x0
0200f494  ldr r1,[r0,#0x18]
0200f498  movne r2,#0x10
0200f49c  moveq r2,#0x0
0200f4a0  add r1,r1,r12
0200f4a4  sub lr,r1,r2
0200f4a8  mov r3,#0x1
0200f4ac  ldrh r1,[r0,#0x68]
0200f4b0  tst r1,r3, lsl r4
0200f4b4  ldrne r2,[lr,#-0x4]!
0200f4b8  addne r1,r0,r4, lsl #0x2
0200f4bc  strne r2,[r1,#0x1c]
0200f4c0  subs r4,r4,#0x1
0200f4c4  bpl 0x0200f4ac
0200f4c8  ldr r1,[r0,#0x18]
0200f4cc  add r1,r1,r12
0200f4d0  str r1,[r0,#0x14]
0200f4d4  ldr r0,[r0,#0x54]
0200f4d8  ldmia sp!,{r4,pc}
