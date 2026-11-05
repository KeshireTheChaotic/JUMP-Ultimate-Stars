
undefined4 FUN_02087724(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)DAT_020afeb8;
  if ((uVar1 == 0) && (uVar1 = FUN_0208c51c(), uVar1 == 0)) {
    return 0;
  }
  iVar2 = FUN_020876ac(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_020876ac(iVar2);
  if (uVar1 < 4) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

