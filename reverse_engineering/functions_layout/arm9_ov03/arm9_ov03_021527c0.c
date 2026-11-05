
void FUN_021527c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x1a0) + 4));
  *(undefined1 *)(iVar2 + 0x58b) = 1;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021529ec);
  return;
}

