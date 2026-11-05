
void FUN_021650bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  func_0x021a3228(*(undefined4 *)(iVar2 + 8),0xff,0);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02165100);
  return;
}

