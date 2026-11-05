
void FUN_02160094(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    func_0x021b65cc();
    FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 4),0x21600c1);
  }
  FUN_021600c0(param_1);
  return;
}

