
void FUN_0215e3dc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  DAT_020a0f10 = DAT_020a0f10 + 1;
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  piVar2 = *(int **)(*(int *)(iVar3 + 0x44) + 4);
  (**(code **)(*piVar2 + 0x148))(piVar2,0x10);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215e43c);
  return;
}

