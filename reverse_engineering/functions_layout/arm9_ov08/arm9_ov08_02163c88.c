
undefined4 FUN_02163c88(void)

{
  int iVar1;
  uint uVar2;
  
  if (*(short *)(DAT_0216e808 + 2) == 0) {
    return 0;
  }
  uVar2 = 1;
  while ((((uint)*(ushort *)(DAT_0216e808 + 2) & 1 << (uVar2 & 0xff)) == 0 ||
         (iVar1 = func_0x021bea98(uVar2), iVar1 != 0))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (0xf < uVar2) {
      return 1;
    }
  }
  return 0;
}

