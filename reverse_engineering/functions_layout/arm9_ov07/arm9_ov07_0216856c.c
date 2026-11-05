
void FUN_0216856c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02168454();
  if ((iVar1 == 0) && (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0x44)), iVar1 != 0)) {
    iVar1 = func_0x021bacfc(*(undefined4 *)(iVar3 + 0x44));
    if (iVar1 == 0) {
      FUN_0208bfdc();
      FUN_02168674(2);
      FUN_0208c17c();
      FUN_0208b784(1);
      DAT_020afeb9 = 0;
      FUN_02086c24();
      FUN_02168674(0x1e);
      func_0x021bac28(*(undefined4 *)(iVar3 + 0x44),0x52,0,0,0,0,0,0);
      while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0x44)), iVar1 == 0) {
        (*DAT_020a0e18)();
      }
      *(undefined4 *)(iVar3 + 0x24) = 1;
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02168858);
    }
    else {
      piVar2 = *(int **)(*(int *)(iVar3 + 0x34) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021686a4);
    }
  }
  return;
}

