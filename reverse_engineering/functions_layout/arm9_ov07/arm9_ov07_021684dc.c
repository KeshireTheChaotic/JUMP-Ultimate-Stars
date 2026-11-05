
void FUN_021684dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02168454();
  if (iVar1 == 0) {
    if (*(int *)(iVar2 + 0x28) != 0) {
      *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
    }
    if ((*(int *)(iVar2 + 0x28) == 0) && (iVar1 = FUN_0207382c(), iVar1 != 0)) {
      func_0x021bac28(*(undefined4 *)(iVar2 + 0x44),0x53,0,0,0,0,0,0,param_4);
      func_0x021bad18(*(undefined4 *)(iVar2 + 0x44),1);
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0216856c);
    }
  }
  return;
}

