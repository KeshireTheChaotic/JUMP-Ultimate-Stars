021bddb0  cmp r0,#0x1
021bddb2  bcc 0x021bddbc
021bddb4  cmp r0,#0xf
021bddb6  bhi 0x021bddbc
021bddb8  mov r0,#0x1
021bddba  bx lr
021bddbc  mov r0,#0x0
021bddbe  bx lr
