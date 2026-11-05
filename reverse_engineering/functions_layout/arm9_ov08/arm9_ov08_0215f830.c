
void FUN_0215f830(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02154488();
  if (iVar1 == 0) {
    iVar1 = FUN_0215701c();
    if (iVar1 == 0) {
      FUN_02162378(7);
      *(undefined1 *)(DAT_0216e7b4 + 0x1d) = 2;
    }
    else if (iVar1 == 1) {
      FUN_02154424();
      FUN_02157088(0x215798d);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    *(undefined1 *)(DAT_0216e7b4 + 0x1d) = 1;
    uVar2 = (uint)DAT_0216e7b0;
    if (3 < uVar2) {
      iVar1 = FUN_02161fc0(uVar2 - 4);
      if (iVar1 == 0xff) {
        FUN_02162378(9);
        FUN_02154464(0xffffffff);
        return;
      }
      FUN_02162378(6);
      iVar1 = FUN_0215702c();
      FUN_02163654(0x46,0,1,(int)(char)(&DAT_0216abac)[iVar1],uVar2 - 3);
      FUN_0215f470();
      FUN_02154424();
      FUN_02157088(0x215f37d);
      return;
    }
    if (uVar2 < 3) {
      FUN_02161f10();
    }
    FUN_02162378(6);
    FUN_0215f2d8();
  }
  FUN_02157088(0x215f801);
  return;
}

