
void FUN_0214d184(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x20) + 8) + 4) + 0x68) + 0x6c))();
  FUN_0214f538(*(undefined4 *)(iVar2 + 0x1c));
  func_0x021b65cc();
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x24) + 4));
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

