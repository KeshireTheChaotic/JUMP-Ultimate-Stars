
/* JUS-SDK OS_EnableProtectionUnit [exact] instruction template OS_EnableProtectionUnit */

uint OS_EnableProtectionUnit(void)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 1);
  return uVar1 | 1;
}

