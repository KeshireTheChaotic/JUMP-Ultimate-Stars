
undefined2 FUN_021759a4(void)

{
  undefined2 uVar1;
  int iVar2;
  
  if (DAT_021a73f4 == 0) {
    return 0;
  }
  uVar1 = 1;
  if (*(short *)(DAT_021a73f4 + 4) != 1) {
    iVar2 = FUN_020675c8();
    if (iVar2 == 5) {
      *(undefined2 *)(DAT_021a73f4 + 4) = 4;
      *(undefined2 *)(DAT_021a73f4 + 6) = 1;
      return 4;
    }
    if (iVar2 < 0) {
      if (iVar2 < -10) {
        FUN_02175744(5);
        *(undefined2 *)(DAT_021a73f4 + 4) = 7;
        return 7;
      }
      FUN_02175744(9,iVar2 + -700);
      *(undefined2 *)(DAT_021a73f4 + 4) = 8;
      return 8;
    }
    uVar1 = 2;
  }
  return uVar1;
}

