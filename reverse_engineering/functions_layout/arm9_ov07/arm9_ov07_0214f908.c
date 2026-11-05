
void FUN_0214f908(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0214f898(param_1,0x31305053);
  iVar4 = 0;
  do {
    iVar2 = FUN_0214f45c(param_2);
    iVar3 = FUN_0214f45c(&DAT_02169544 + iVar4 * 8);
    if (iVar2 == iVar3) {
      iVar2 = FUN_0214f474(param_2);
      iVar3 = FUN_0214f474(&DAT_02169544 + iVar4 * 8);
      if ((iVar2 == iVar3) && ((&DAT_02168a2c)[iVar4] != 0)) {
        FUN_02023894(*(undefined4 *)(iVar1 + 4),(&DAT_02168a2c)[iVar4],0);
        (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

