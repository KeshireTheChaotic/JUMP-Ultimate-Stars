
uint FUN_02064380(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((param_2 < 4) && (iVar2 = 0, 0 < param_2)) {
    uVar1 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + iVar2);
      if (uVar4 == 0) {
        return uVar3;
      }
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 + 0x20;
      }
      uVar3 = uVar3 | uVar4 << (uVar1 & 0xff);
      uVar1 = uVar1 + 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return uVar3;
}

