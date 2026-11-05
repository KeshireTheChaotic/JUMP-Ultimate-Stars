02153ce8  bicmi r2,r1,lr, lsl r0
02153cec  andls r1,r5,r0, asr r8
02153cf0  swieq 0xc21ce8
02153cf4  bne 0x00395b00
02153cf8  bicmi r2,r1,lr, lsl r0
02153cfc  addeq r1,r0,r0, asr r8
02153d00  mcrrvs p8,0x2,r1,r2,cr0
02153d04  bcs 0x0216deec
02153d08  subcss sp,r9,#0x80000001
02153d0c  addeqs r6,r2,r3, lsl #0x10
