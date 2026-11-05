
undefined4 FUN_02051e60(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = puRam02051ee4;
  while ((param_1 & 1) == 0) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 >> 1;
    puVar1 = puVar1 + 1;
    if (0x15 < iVar2) {
      return 0;
    }
  }
  if ((7 < iVar2) && (iVar2 < 0xc)) {
    return *(undefined4 *)(iRam02051ee8 + (iVar2 + -8) * 0xc);
  }
  if ((iVar2 < 3) || (6 < iVar2)) {
    return *puVar1;
  }
  return *(undefined4 *)(iRam02051ee8 + (iVar2 + 1) * 0xc);
}

