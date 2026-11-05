
uint FUN_02086da0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_0208c51c();
  if (iVar1 == 0) {
    uVar2 = FUN_0208bd0c();
    return (1 << (uVar2 & 0xff)) - 1;
  }
  uVar2 = func_0x0219b4b0();
  uVar4 = 0;
  uVar5 = 0;
  do {
    if ((uVar2 & 1 << (uVar5 & 0xff)) != 0) {
      uVar3 = FUN_020876cc(uVar5);
      uVar4 = uVar4 | 1 << (uVar3 & 0xff);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return uVar4;
}

