
int FUN_0216446c(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    if (unaff_r4 != 0) {
      unaff_r4 = FUN_02072840(unaff_r7,*(undefined2 *)(unaff_r6 + unaff_r7 * 2 + 8));
    }
    uVar1 = *(ushort *)(unaff_r6 + unaff_r7 * 2 + 8);
    iVar2 = FUN_0207281c(unaff_r7);
    *(uint *)(unaff_r5 + unaff_r7 * 4) = iVar2 - (uint)uVar1;
    unaff_r7 = unaff_r7 + 1;
  } while (unaff_r7 < 6);
  if (unaff_r4 == 0) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(unaff_r5 + iVar2 * 4);
      if (iVar3 < 0) {
        *(int *)(unaff_r5 + iVar2 * 4) = -iVar3;
      }
      else {
        *(undefined4 *)(unaff_r5 + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  return unaff_r4;
}

