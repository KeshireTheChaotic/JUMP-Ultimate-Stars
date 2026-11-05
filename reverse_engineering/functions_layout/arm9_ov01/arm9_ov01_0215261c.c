
void FUN_0215261c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (uVar4 = 0; uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x16c))(), uVar4 < uVar2;
      uVar4 = uVar4 + 1) {
    (**(code **)(**(int **)(param_1 + 4) + 0x170))(*(int **)(param_1 + 4),uVar4);
    iVar1 = FUN_0214d37c();
    if (iVar3 == iVar1) {
      func_0x021b6214(*(undefined4 *)(iVar3 + 4),0);
    }
  }
  return;
}

