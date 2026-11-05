
uint FUN_02068e34(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xffffffff;
  if (0 < 0x20 - param_1) {
    do {
      uVar2 = uVar2 << 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20 - param_1);
  }
  return uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00;
}

