
ulonglong FUN_0200b7c4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 & 0x80000000) == 0) {
    iVar1 = -(param_2 >> 0x14);
    uVar2 = iVar1 + 0x43e;
    if (param_2 >> 0x14 < 0x43f) {
      if (0x3f < (int)uVar2) {
        return 0;
      }
      uVar3 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
      if ((int)uVar2 < 0x21) {
        return CONCAT44(uVar3 >> (uVar2 & 0xff),
                        (param_1 << 0xb) >> (uVar2 & 0xff) | uVar3 << (0x20 - uVar2 & 0xff));
      }
      return (ulonglong)(uVar3 >> (iVar1 + 0x41eU & 0xff));
    }
  }
  else if (param_2 < 0xfff00000 || param_2 == 0xfff00000 && param_1 == 0) {
    return 0;
  }
  return 0xffffffffffffffff;
}

