027eb7ac  mov r0,#0x0
027eb7b0  ldr r3,[0x27eb91c]
027eb7b4  ldr r1,[0x27eb920]
027eb7b8  mov r12,r0
027eb7bc  mov r2,r1
027eb7c0  sub r1,r1,#0x1
027eb7c4  mov r1,r1, lsl #0x10
027eb7c8  mov r1,r1, lsr #0x10
027eb7cc  strh r2,[r3],#0x2
027eb7d0  add r12,r12,#0x2
027eb7d4  cmp r12,#0x2000
027eb7d8  bcc 0x027eb7bc
027eb7dc  ldr r12,[0x27eb91c]
027eb7e0  ldr r3,[0x27eb920]
027eb7e4  mov r2,#0x0
027eb7e8  b 0x027eb818
027eb7ec  ldrh r1,[r12,#0x0]
027eb7f0  cmp r1,r3
027eb7f4  beq 0x027eb804
027eb7f8  cmp r0,#0x20
027eb7fc  add r0,r0,#0x1
027eb800  bhi 0x027eb8f8
027eb804  add r2,r2,#0x2
027eb808  add r12,r12,#0x2
027eb80c  sub r1,r3,#0x1
027eb810  mov r1,r1, lsl #0x10
027eb814  mov r3,r1, lsr #0x10
027eb818  cmp r2,#0x2000
027eb81c  bcc 0x027eb7ec
027eb820  ldr r3,[0x27eb91c]
027eb824  ldr r1,[0x27eb924]
027eb828  mov r2,#0x0
027eb82c  strh r1,[r3],#0x2
027eb830  add r2,r2,#0x2
027eb834  mvn r1,r1
027eb838  mov r1,r1, lsl #0x10
027eb83c  mov r1,r1, lsr #0x10
027eb840  cmp r2,#0x2000
027eb844  bcc 0x027eb82c
027eb848  ldr r12,[0x27eb91c]
027eb84c  ldr r3,[0x27eb924]
027eb850  mov r2,#0x0
027eb854  b 0x027eb884
027eb858  ldrh r1,[r12,#0x0]
027eb85c  cmp r1,r3
027eb860  beq 0x027eb870
027eb864  cmp r0,#0x20
027eb868  add r0,r0,#0x1
027eb86c  bhi 0x027eb8f8
027eb870  add r2,r2,#0x2
027eb874  add r12,r12,#0x2
027eb878  mvn r1,r3
027eb87c  mov r1,r1, lsl #0x10
027eb880  mov r3,r1, lsr #0x10
027eb884  cmp r2,#0x2000
027eb888  bcc 0x027eb858
027eb88c  ldr r3,[0x27eb91c]
027eb890  ldr r1,[0x27eb928]
027eb894  mov r2,#0x0
027eb898  strh r1,[r3],#0x2
027eb89c  add r2,r2,#0x2
027eb8a0  mvn r1,r1
027eb8a4  mov r1,r1, lsl #0x10
027eb8a8  mov r1,r1, lsr #0x10
027eb8ac  cmp r2,#0x2000
027eb8b0  bcc 0x027eb898
027eb8b4  ldr r12,[0x27eb91c]
027eb8b8  ldr r3,[0x27eb928]
027eb8bc  mov r2,#0x0
027eb8c0  b 0x027eb8f0
027eb8c4  ldrh r1,[r12,#0x0]
027eb8c8  cmp r1,r3
027eb8cc  beq 0x027eb8dc
027eb8d0  cmp r0,#0x20
027eb8d4  add r0,r0,#0x1
027eb8d8  bhi 0x027eb8f8
027eb8dc  add r2,r2,#0x2
027eb8e0  add r12,r12,#0x2
027eb8e4  mvn r1,r3
027eb8e8  mov r1,r1, lsl #0x10
027eb8ec  mov r3,r1, lsr #0x10
027eb8f0  cmp r2,#0x2000
027eb8f4  bcc 0x027eb8c4
027eb8f8  cmp r0,#0x0
027eb8fc  bxeq lr
027eb900  ldr r0,[0x27eb92c]
027eb904  ldr r0,[r0,#0x0]
027eb908  add r0,r0,#0x300
027eb90c  ldrh r1,[r0,#0x3e]
027eb910  orr r1,r1,#0x2
027eb914  strh r1,[r0,#0x3e]
027eb918  bx lr
