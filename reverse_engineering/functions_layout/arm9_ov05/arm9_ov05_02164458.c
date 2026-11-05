
int FUN_02164458(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar4 = 0;
  do {
    if (iVar3 != 0) {
      iVar3 = FUN_02072840(iVar4,*(undefined2 *)(param_1 + iVar4 * 2 + 8));
    }
    uVar1 = *(ushort *)(param_1 + iVar4 * 2 + 8);
    iVar2 = FUN_0207281c(iVar4);
    *(uint *)(param_2 + iVar4 * 4) = iVar2 - (uint)uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (iVar3 == 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_2 + iVar4 * 4);
      if (iVar2 < 0) {
        *(int *)(param_2 + iVar4 * 4) = -iVar2;
      }
      else {
        *(undefined4 *)(param_2 + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  return iVar3;
}

