
void FUN_0216eb8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_0216e538(&local_20);
  if (param_1 != 0) {
    FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(*(int *)(iVar2 + 4) + 0x50);
  local_20 = *(undefined4 *)(iVar1 + 0xc);
  local_1c = *(undefined4 *)(iVar1 + 0x10);
  local_18 = *(undefined4 *)(iVar1 + 0x14);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),param_2,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  FUN_0216e54c(iVar2,&local_20);
  return;
}

