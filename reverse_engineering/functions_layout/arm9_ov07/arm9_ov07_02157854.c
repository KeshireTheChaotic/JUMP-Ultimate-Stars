
void FUN_02157854(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x44) + 4) + 0x19c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x44) + 4) + 0x19c))();
    if (*(uint *)(iVar3 + 0x58) < iVar1 + 6U) {
      piVar2 = *(int **)(*(int *)(iVar3 + 0x44) + 4);
      (**(code **)(*piVar2 + 0x1a0))(piVar2,*(uint *)(iVar3 + 0x58) - 5,0);
    }
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x44) + 4) + 0x194))();
  if ((*(int *)(iVar3 + 0x58) < iVar1) &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x44) + 4) + 0x194))(), 5 < iVar1)) {
    piVar2 = *(int **)(*(int *)(iVar3 + 0x44) + 4);
    (**(code **)(*piVar2 + 0x198))(piVar2,*(undefined4 *)(iVar3 + 0x58));
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_021578dc_1);
  return;
}

