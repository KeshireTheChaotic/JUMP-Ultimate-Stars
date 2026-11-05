01ffec80  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
01ffec84  ldr r8,[r0,#0xc]
01ffec88  ldr r9,[r0,#0x10]
01ffec8c  ldr r10,[r0,#0x14]
01ffec90  rsb r5,r9,#0x200
01ffec94  rsb r6,r9,#0x100
01ffec98  sub r7,r8,r9
01ffec9c  mov r7,r7, lsl #0x1
01ffeca0  stmdb sp!,{r5,r6,r7,r8,r9,r10}
01ffeca4  ldr r1,[r0,#0x4]
01ffeca8  ldr r2,[r0,#0x8]
01ffecac  ldr r0,[r0,#0x0]
01ffecb0  ldr r3,[0x1fff1dc]
01ffecb4  add lr,r2,r8
01ffecb8  str r10,[sp,#-0x4]!
01ffecbc  ldr r10,[sp,#0x14]
01ffecc0  ldrb r5,[r1,#0x1]
01ffecc4  ldrb r6,[r1],#0x2
01ffecc8  ldrb r4,[r0],#0x1
01ffeccc  sub r5,r5,#0x80
01ffecd0  sub r6,r6,#0x80
01ffecd4  add r7,r5,r6, asr #0x1
01ffecd8  sub r7,r3,r7
01ffecdc  add r5,r3,r5, lsl #0x1
01ffece0  add r6,r3,r6, lsl #0x1
01ffece4  add r6,r6,#0x300
01ffece8  ldrb r8,[r7,r4]
01ffecec  ldrb r11,[r5,r4]
01ffecf0  ldrb r12,[r6,r4]
01ffecf4  ldrb r4,[r0],#0xff
01ffecf8  add r8,r11,r8, lsl #0x5
01ffecfc  add r8,r8,r12, lsl #0xa
01ffed00  sub r4,r4,#0x4
01ffed04  ldrb r9,[r7,r4]
01ffed08  ldrb r11,[r5,r4]
01ffed0c  ldrb r12,[r6,r4]
01ffed10  ldrb r4,[r0],#0x1
01ffed14  add r8,r8,r9, lsl #0x15
01ffed18  add r8,r8,r11, lsl #0x10
01ffed1c  add r8,r8,r12, lsl #0x1a
01ffed20  str r8,[r2],#0x4
01ffed24  sub r4,r4,#0x4
01ffed28  ldrb r8,[r7,r4]
01ffed2c  ldrb r11,[r5,r4]
01ffed30  ldrb r12,[r6,r4]
01ffed34  ldrb r4,[r0],#-0xff
01ffed38  add r8,r11,r8, lsl #0x5
01ffed3c  add r8,r8,r12, lsl #0xa
01ffed40  ldrb r9,[r7,r4]
01ffed44  ldrb r11,[r5,r4]
01ffed48  ldrb r12,[r6,r4]
01ffed4c  add r8,r8,r9, lsl #0x15
01ffed50  add r8,r8,r11, lsl #0x10
01ffed54  add r8,r8,r12, lsl #0x1a
01ffed58  str r8,[lr],#0x4
01ffed5c  ldrb r5,[r1,#0x1]
01ffed60  ldrb r6,[r1],#0x2
01ffed64  ldrb r4,[r0],#0x1
01ffed68  sub r5,r5,#0x80
01ffed6c  sub r6,r6,#0x80
01ffed70  add r7,r5,r6, asr #0x1
01ffed74  sub r7,r3,r7
01ffed78  add r5,r3,r5, lsl #0x1
01ffed7c  add r6,r3,r6, lsl #0x1
01ffed80  add r6,r6,#0x300
01ffed84  ldrb r8,[r7,r4]
01ffed88  ldrb r11,[r5,r4]
01ffed8c  ldrb r12,[r6,r4]
01ffed90  ldrb r4,[r0],#0xff
01ffed94  add r8,r11,r8, lsl #0x5
01ffed98  add r8,r8,r12, lsl #0xa
01ffed9c  sub r4,r4,#0x4
01ffeda0  ldrb r9,[r7,r4]
01ffeda4  ldrb r11,[r5,r4]
01ffeda8  ldrb r12,[r6,r4]
01ffedac  ldrb r4,[r0],#0x1
01ffedb0  add r8,r8,r9, lsl #0x15
01ffedb4  add r8,r8,r11, lsl #0x10
01ffedb8  add r8,r8,r12, lsl #0x1a
01ffedbc  str r8,[r2],#0x4
01ffedc0  sub r4,r4,#0x4
01ffedc4  ldrb r8,[r7,r4]
01ffedc8  ldrb r11,[r5,r4]
01ffedcc  ldrb r12,[r6,r4]
01ffedd0  ldrb r4,[r0],#-0xff
01ffedd4  add r8,r11,r8, lsl #0x5
01ffedd8  add r8,r8,r12, lsl #0xa
01ffeddc  ldrb r9,[r7,r4]
01ffede0  ldrb r11,[r5,r4]
01ffede4  ldrb r12,[r6,r4]
01ffede8  add r8,r8,r9, lsl #0x15
01ffedec  add r8,r8,r11, lsl #0x10
01ffedf0  add r8,r8,r12, lsl #0x1a
01ffedf4  str r8,[lr],#0x4
01ffedf8  ldrb r5,[r1,#0x1]
01ffedfc  ldrb r6,[r1],#0x2
01ffee00  ldrb r4,[r0],#0x1
01ffee04  sub r5,r5,#0x80
01ffee08  sub r6,r6,#0x80
01ffee0c  add r7,r5,r6, asr #0x1
01ffee10  sub r7,r3,r7
01ffee14  add r5,r3,r5, lsl #0x1
01ffee18  add r6,r3,r6, lsl #0x1
01ffee1c  add r6,r6,#0x300
01ffee20  ldrb r8,[r7,r4]
01ffee24  ldrb r11,[r5,r4]
01ffee28  ldrb r12,[r6,r4]
01ffee2c  ldrb r4,[r0],#0xff
01ffee30  add r8,r11,r8, lsl #0x5
01ffee34  add r8,r8,r12, lsl #0xa
01ffee38  sub r4,r4,#0x4
01ffee3c  ldrb r9,[r7,r4]
01ffee40  ldrb r11,[r5,r4]
01ffee44  ldrb r12,[r6,r4]
01ffee48  ldrb r4,[r0],#0x1
01ffee4c  add r8,r8,r9, lsl #0x15
01ffee50  add r8,r8,r11, lsl #0x10
01ffee54  add r8,r8,r12, lsl #0x1a
01ffee58  str r8,[r2],#0x4
01ffee5c  sub r4,r4,#0x4
01ffee60  ldrb r8,[r7,r4]
01ffee64  ldrb r11,[r5,r4]
01ffee68  ldrb r12,[r6,r4]
01ffee6c  ldrb r4,[r0],#-0xff
01ffee70  add r8,r11,r8, lsl #0x5
01ffee74  add r8,r8,r12, lsl #0xa
01ffee78  ldrb r9,[r7,r4]
01ffee7c  ldrb r11,[r5,r4]
01ffee80  ldrb r12,[r6,r4]
01ffee84  add r8,r8,r9, lsl #0x15
01ffee88  add r8,r8,r11, lsl #0x10
01ffee8c  add r8,r8,r12, lsl #0x1a
01ffee90  str r8,[lr],#0x4
01ffee94  ldrb r5,[r1,#0x1]
01ffee98  ldrb r6,[r1],#0x2
01ffee9c  ldrb r4,[r0],#0x1
01ffeea0  sub r5,r5,#0x80
01ffeea4  sub r6,r6,#0x80
01ffeea8  add r7,r5,r6, asr #0x1
01ffeeac  sub r7,r3,r7
01ffeeb0  add r5,r3,r5, lsl #0x1
01ffeeb4  add r6,r3,r6, lsl #0x1
01ffeeb8  add r6,r6,#0x300
01ffeebc  ldrb r8,[r7,r4]
01ffeec0  ldrb r11,[r5,r4]
01ffeec4  ldrb r12,[r6,r4]
01ffeec8  ldrb r4,[r0],#0xff
01ffeecc  add r8,r11,r8, lsl #0x5
01ffeed0  add r8,r8,r12, lsl #0xa
01ffeed4  sub r4,r4,#0x4
01ffeed8  ldrb r9,[r7,r4]
01ffeedc  ldrb r11,[r5,r4]
01ffeee0  ldrb r12,[r6,r4]
01ffeee4  ldrb r4,[r0],#0x1
01ffeee8  add r8,r8,r9, lsl #0x15
01ffeeec  add r8,r8,r11, lsl #0x10
01ffeef0  add r8,r8,r12, lsl #0x1a
01ffeef4  str r8,[r2],#0x4
01ffeef8  sub r4,r4,#0x4
01ffeefc  ldrb r8,[r7,r4]
01ffef00  ldrb r11,[r5,r4]
01ffef04  ldrb r12,[r6,r4]
01ffef08  ldrb r4,[r0],#-0xff
01ffef0c  add r8,r11,r8, lsl #0x5
01ffef10  add r8,r8,r12, lsl #0xa
01ffef14  ldrb r9,[r7,r4]
01ffef18  ldrb r11,[r5,r4]
01ffef1c  ldrb r12,[r6,r4]
01ffef20  add r8,r8,r9, lsl #0x15
01ffef24  add r8,r8,r11, lsl #0x10
01ffef28  add r8,r8,r12, lsl #0x1a
01ffef2c  str r8,[lr],#0x4
01ffef30  ldrb r5,[r1,#0x1]
01ffef34  ldrb r6,[r1],#0x2
01ffef38  ldrb r4,[r0],#0x1
01ffef3c  sub r5,r5,#0x80
01ffef40  sub r6,r6,#0x80
01ffef44  add r7,r5,r6, asr #0x1
01ffef48  sub r7,r3,r7
01ffef4c  add r5,r3,r5, lsl #0x1
01ffef50  add r6,r3,r6, lsl #0x1
01ffef54  add r6,r6,#0x300
01ffef58  ldrb r8,[r7,r4]
01ffef5c  ldrb r11,[r5,r4]
01ffef60  ldrb r12,[r6,r4]
01ffef64  ldrb r4,[r0],#0xff
01ffef68  add r8,r11,r8, lsl #0x5
01ffef6c  add r8,r8,r12, lsl #0xa
01ffef70  sub r4,r4,#0x4
01ffef74  ldrb r9,[r7,r4]
01ffef78  ldrb r11,[r5,r4]
01ffef7c  ldrb r12,[r6,r4]
01ffef80  ldrb r4,[r0],#0x1
01ffef84  add r8,r8,r9, lsl #0x15
01ffef88  add r8,r8,r11, lsl #0x10
01ffef8c  add r8,r8,r12, lsl #0x1a
01ffef90  str r8,[r2],#0x4
01ffef94  sub r4,r4,#0x4
01ffef98  ldrb r8,[r7,r4]
01ffef9c  ldrb r11,[r5,r4]
01ffefa0  ldrb r12,[r6,r4]
01ffefa4  ldrb r4,[r0],#-0xff
01ffefa8  add r8,r11,r8, lsl #0x5
01ffefac  add r8,r8,r12, lsl #0xa
01ffefb0  ldrb r9,[r7,r4]
01ffefb4  ldrb r11,[r5,r4]
01ffefb8  ldrb r12,[r6,r4]
01ffefbc  add r8,r8,r9, lsl #0x15
01ffefc0  add r8,r8,r11, lsl #0x10
01ffefc4  add r8,r8,r12, lsl #0x1a
01ffefc8  str r8,[lr],#0x4
01ffefcc  ldrb r5,[r1,#0x1]
01ffefd0  ldrb r6,[r1],#0x2
01ffefd4  ldrb r4,[r0],#0x1
01ffefd8  sub r5,r5,#0x80
01ffefdc  sub r6,r6,#0x80
01ffefe0  add r7,r5,r6, asr #0x1
01ffefe4  sub r7,r3,r7
01ffefe8  add r5,r3,r5, lsl #0x1
01ffefec  add r6,r3,r6, lsl #0x1
01ffeff0  add r6,r6,#0x300
01ffeff4  ldrb r8,[r7,r4]
01ffeff8  ldrb r11,[r5,r4]
01ffeffc  ldrb r12,[r6,r4]
01fff000  ldrb r4,[r0],#0xff
01fff004  add r8,r11,r8, lsl #0x5
01fff008  add r8,r8,r12, lsl #0xa
01fff00c  sub r4,r4,#0x4
01fff010  ldrb r9,[r7,r4]
01fff014  ldrb r11,[r5,r4]
01fff018  ldrb r12,[r6,r4]
01fff01c  ldrb r4,[r0],#0x1
01fff020  add r8,r8,r9, lsl #0x15
01fff024  add r8,r8,r11, lsl #0x10
01fff028  add r8,r8,r12, lsl #0x1a
01fff02c  str r8,[r2],#0x4
01fff030  sub r4,r4,#0x4
01fff034  ldrb r8,[r7,r4]
01fff038  ldrb r11,[r5,r4]
01fff03c  ldrb r12,[r6,r4]
01fff040  ldrb r4,[r0],#-0xff
01fff044  add r8,r11,r8, lsl #0x5
01fff048  add r8,r8,r12, lsl #0xa
01fff04c  ldrb r9,[r7,r4]
01fff050  ldrb r11,[r5,r4]
01fff054  ldrb r12,[r6,r4]
01fff058  add r8,r8,r9, lsl #0x15
01fff05c  add r8,r8,r11, lsl #0x10
01fff060  add r8,r8,r12, lsl #0x1a
01fff064  str r8,[lr],#0x4
01fff068  ldrb r5,[r1,#0x1]
01fff06c  ldrb r6,[r1],#0x2
01fff070  ldrb r4,[r0],#0x1
01fff074  sub r5,r5,#0x80
01fff078  sub r6,r6,#0x80
01fff07c  add r7,r5,r6, asr #0x1
01fff080  sub r7,r3,r7
01fff084  add r5,r3,r5, lsl #0x1
01fff088  add r6,r3,r6, lsl #0x1
01fff08c  add r6,r6,#0x300
01fff090  ldrb r8,[r7,r4]
01fff094  ldrb r11,[r5,r4]
01fff098  ldrb r12,[r6,r4]
01fff09c  ldrb r4,[r0],#0xff
01fff0a0  add r8,r11,r8, lsl #0x5
01fff0a4  add r8,r8,r12, lsl #0xa
01fff0a8  sub r4,r4,#0x4
01fff0ac  ldrb r9,[r7,r4]
01fff0b0  ldrb r11,[r5,r4]
01fff0b4  ldrb r12,[r6,r4]
01fff0b8  ldrb r4,[r0],#0x1
01fff0bc  add r8,r8,r9, lsl #0x15
01fff0c0  add r8,r8,r11, lsl #0x10
01fff0c4  add r8,r8,r12, lsl #0x1a
01fff0c8  str r8,[r2],#0x4
01fff0cc  sub r4,r4,#0x4
01fff0d0  ldrb r8,[r7,r4]
01fff0d4  ldrb r11,[r5,r4]
01fff0d8  ldrb r12,[r6,r4]
01fff0dc  ldrb r4,[r0],#-0xff
01fff0e0  add r8,r11,r8, lsl #0x5
01fff0e4  add r8,r8,r12, lsl #0xa
01fff0e8  ldrb r9,[r7,r4]
01fff0ec  ldrb r11,[r5,r4]
01fff0f0  ldrb r12,[r6,r4]
01fff0f4  add r8,r8,r9, lsl #0x15
01fff0f8  add r8,r8,r11, lsl #0x10
01fff0fc  add r8,r8,r12, lsl #0x1a
01fff100  str r8,[lr],#0x4
01fff104  ldrb r5,[r1,#0x1]
01fff108  ldrb r6,[r1],#0x2
01fff10c  ldrb r4,[r0],#0x1
01fff110  sub r5,r5,#0x80
01fff114  sub r6,r6,#0x80
01fff118  add r7,r5,r6, asr #0x1
01fff11c  sub r7,r3,r7
01fff120  add r5,r3,r5, lsl #0x1
01fff124  add r6,r3,r6, lsl #0x1
01fff128  add r6,r6,#0x300
01fff12c  ldrb r8,[r7,r4]
01fff130  ldrb r11,[r5,r4]
01fff134  ldrb r12,[r6,r4]
01fff138  ldrb r4,[r0],#0xff
01fff13c  add r8,r11,r8, lsl #0x5
01fff140  add r8,r8,r12, lsl #0xa
01fff144  sub r4,r4,#0x4
01fff148  ldrb r9,[r7,r4]
01fff14c  ldrb r11,[r5,r4]
01fff150  ldrb r12,[r6,r4]
01fff154  ldrb r4,[r0],#0x1
01fff158  add r8,r8,r9, lsl #0x15
01fff15c  add r8,r8,r11, lsl #0x10
01fff160  add r8,r8,r12, lsl #0x1a
01fff164  str r8,[r2],#0x4
01fff168  sub r4,r4,#0x4
01fff16c  ldrb r8,[r7,r4]
01fff170  ldrb r11,[r5,r4]
01fff174  ldrb r12,[r6,r4]
01fff178  ldrb r4,[r0],#-0xff
01fff17c  add r8,r11,r8, lsl #0x5
01fff180  add r8,r8,r12, lsl #0xa
01fff184  ldrb r9,[r7,r4]
01fff188  ldrb r11,[r5,r4]
01fff18c  ldrb r12,[r6,r4]
01fff190  add r8,r8,r9, lsl #0x15
01fff194  add r8,r8,r11, lsl #0x10
01fff198  add r8,r8,r12, lsl #0x1a
01fff19c  str r8,[lr],#0x4
01fff1a0  subs r10,r10,#0x10
01fff1a4  bgt 0x01ffecc0
01fff1a8  ldr r10,[sp],#0x4
01fff1ac  ldr r5,[sp,#0x0]
01fff1b0  ldr r6,[sp,#0x4]
01fff1b4  ldr r7,[sp,#0x8]
01fff1b8  add r0,r0,r5
01fff1bc  add r1,r1,r6
01fff1c0  add r2,r2,r7
01fff1c4  add lr,lr,r7
01fff1c8  subs r10,r10,#0x2
01fff1cc  bgt 0x01ffecb8
01fff1d0  ldmia sp!,{r5,r6,r7,r8,r9,r10}
01fff1d4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
01fff1d8  bx lr
