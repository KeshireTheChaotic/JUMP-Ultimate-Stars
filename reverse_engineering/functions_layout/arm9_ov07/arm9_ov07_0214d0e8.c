
undefined4 FUN_0214d0e8(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_0216acea == 0) {
    return 0;
  }
  uVar2 = 1;
  while( true ) {
    if (0xf < uVar2) {
      return 1;
    }
    if ((((uint)DAT_0216acea & 1 << (uVar2 & 0xff)) != 0) &&
       (iVar1 = func_0x021bea98(uVar2), iVar1 == 0)) break;
    uVar2 = uVar2 + 1 & 0xffff;
  }
  return 0;
}

