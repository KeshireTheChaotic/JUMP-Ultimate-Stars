020882f4  ldr r1,[0x208830c]
020882f8  mov r2,#0x1
020882fc  ldr r3,[r1,#0x8]
02088300  orr r0,r3,r2, lsl r0
02088304  str r0,[r1,#0x8]
02088308  bx lr
