
/* JUS-SDK OS_DisableProtectionUnit [exact] instruction template OS_DisableProtectionUnit */

uint OS_DisableProtectionUnit(void)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffe);
  return uVar1 & 0xfffffffe;
}

