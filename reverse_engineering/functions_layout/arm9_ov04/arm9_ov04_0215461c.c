
void FUN_0215461c(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (uVar5 = 0; uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xac))(), uVar5 < uVar2;
      uVar5 = uVar5 + 1) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    iVar6 = param_1;
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xc0))(*(int **)(param_1 + 4),uVar5);
      iVar6 = FUN_0214e3ec();
    }
    if (uVar5 != 0) {
      (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
    }
  }
  piVar3 = *(int **)(*(int *)(iVar4 + 0x28) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,0);
  iVar6 = 0;
  do {
    piVar3 = *(int **)(*(int *)(iVar4 + iVar6 * 4 + 0x18) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  FUN_021545f8(*(undefined4 *)(iVar4 + 0x3c),1);
  iVar6 = 0;
  do {
    FUN_02154814(iVar4,iVar6,0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return;
}

