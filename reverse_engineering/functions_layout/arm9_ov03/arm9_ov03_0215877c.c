
void FUN_0215877c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))(), uVar3 < uVar1;
      uVar3 = uVar3 + 1) {
    iVar2 = FUN_02154a7c(param_1,uVar3);
    if (uVar3 != 0) {
      (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 3) {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    *(undefined1 *)(iVar2 + 0xde) = 1;
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x38) + 4));
    return;
  }
  return;
}

