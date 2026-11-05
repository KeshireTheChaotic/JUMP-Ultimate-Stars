
/* JUS-SDK OS_GetDTCMAddress [exact] instruction template OS_GetDTCMAddress */

uint OS_GetDTCMAddress(void)

{
  uint uVar1;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr9,in_cr1);
  return uVar1 & 0xfffff000;
}

