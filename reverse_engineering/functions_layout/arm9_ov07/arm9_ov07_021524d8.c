
void FUN_021524d8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xac))(), uVar3 < uVar2;
      uVar3 = uVar3 + 1) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 4) + 0xc0))(*(int **)(param_1 + 4),uVar3);
      iVar1 = FUN_0214f340();
    }
    if (uVar3 != 0) {
      (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    }
  }
  return;
}

