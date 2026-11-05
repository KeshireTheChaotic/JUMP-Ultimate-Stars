
void FUN_0206ceac(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iStack_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x44);
  iStack_10 = param_4;
  if (iVar1 != 0) {
    FUN_02011b38(iVar1);
  }
  iVar1 = FUN_0206cf28();
  iVar2 = FUN_0206cf28(param_1);
  if (iVar1 == iVar2) {
    return;
  }
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar3 + 0x5c))(piVar3,iVar1);
  FUN_02024d44(&iStack_10,*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(int *)(iVar1 + 0xc) = -iStack_10;
  FUN_02024c3c(iVar1,1);
  return;
}

