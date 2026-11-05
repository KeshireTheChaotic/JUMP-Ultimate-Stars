021599f0  ldrh r0,[r0,#0xa0]
021599f4  cmp r0,#0x20
021599f8  moveq r0,#0x1
021599fc  movne r0,#0x0
02159a00  cmp r0,#0x0
02159a04  movne r0,#0x1
02159a08  moveq r0,#0x0
02159a0c  bx lr
