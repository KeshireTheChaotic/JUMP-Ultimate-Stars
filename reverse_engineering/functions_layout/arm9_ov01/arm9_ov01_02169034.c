
void FUN_02169034(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  for (uVar3 = 0; uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 4) + 0xac))(),
      uVar3 < uVar2; uVar3 = uVar3 + 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar1 = (**(code **)(**(int **)(iVar4 + 4) + 0xa8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(iVar4 + 4) + 0xc0))(*(int **)(iVar4 + 4),uVar3);
      iVar4 = FUN_0214d37c();
    }
    (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
  }
  return;
}

