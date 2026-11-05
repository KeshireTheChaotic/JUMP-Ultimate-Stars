02197c54  mov r1,r0
02197c58  mov r0,#0x0
02197c5c  mov r3,#0x1
02197c60  clz r2,r1
02197c64  rsbs r2,r2,#0x1f
02197c68  bxcc lr
02197c6c  bic r1,r1,r3, lsl r2
02197c70  add r0,r0,#0x1
02197c74  b 0x02197c60
