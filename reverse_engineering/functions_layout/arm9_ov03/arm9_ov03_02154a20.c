
void FUN_02154a20(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xac))(), uVar3 < uVar2;
      uVar3 = uVar3 + 1) {
    iVar1 = FUN_02154a7c(param_1,uVar3);
    if (uVar3 != 0) {
      (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    }
  }
  return;
}

