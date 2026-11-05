
undefined4 FUN_0219d880(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_021a2cfc(DAT_0214ccf8 + 0xc24);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  while( true ) {
    if (3 < uVar3) {
      return 1;
    }
    iVar1 = FUN_02176654(uVar3);
    if (((iVar1 != 0) && (uVar2 = FUN_021766fc(), uVar3 != uVar2)) &&
       (iVar1 = FUN_021a2d44(DAT_0214ccf8 + 0xc24,uVar3), iVar1 == 0)) break;
    uVar3 = uVar3 + 1 & 0xff;
  }
  return 0;
}

